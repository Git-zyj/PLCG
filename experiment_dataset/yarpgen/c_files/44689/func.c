/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44689
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_20 += var_4;
        var_21 = ((/* implicit */unsigned short) (~((((-(((/* implicit */int) arr_0 [i_0] [i_0])))) / (((/* implicit */int) (signed char)75))))));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) var_9)) / (((/* implicit */int) min((((/* implicit */short) (signed char)-1)), ((short)9236)))))))));
        arr_2 [(signed char)18] = ((/* implicit */signed char) (_Bool)1);
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_6 [i_1] [(unsigned short)8] = ((/* implicit */unsigned short) ((unsigned long long int) var_7));
        var_23 = ((signed char) (((~(((/* implicit */int) (signed char)63)))) & ((~(((/* implicit */int) (unsigned short)65527))))));
    }
    var_24 += ((/* implicit */_Bool) var_12);
}
