/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45505
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_14))))))), (((unsigned long long int) 1023))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) min(((((((-(((/* implicit */int) arr_0 [(unsigned short)6] [(unsigned char)10])))) + (2147483647))) >> (((/* implicit */int) arr_1 [i_0])))), ((-(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] = ((/* implicit */long long int) min((((/* implicit */int) arr_0 [i_0] [i_0])), ((-(((/* implicit */int) (unsigned char)229))))));
        arr_4 [6] [i_0] = ((/* implicit */unsigned char) (!(((_Bool) max((((/* implicit */unsigned short) arr_1 [i_0])), (arr_0 [i_0] [i_0]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        arr_7 [(signed char)18] = ((/* implicit */unsigned long long int) (!((_Bool)1)));
        arr_8 [0LL] = ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_5 [i_1]))))));
    }
    var_20 = ((/* implicit */unsigned long long int) var_3);
}
