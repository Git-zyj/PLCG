/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241740
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
    var_11 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) ((signed char) var_8))) && (((((/* implicit */int) (short)17399)) < (((/* implicit */int) var_4))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) min((arr_1 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) (short)30099)) > (((/* implicit */int) (short)0)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) max(((_Bool)1), (((max((arr_1 [i_0]), (((/* implicit */unsigned int) arr_0 [(unsigned char)8])))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */_Bool) (signed char)3);
        arr_10 [i_1] = ((/* implicit */int) (_Bool)0);
        var_12 = ((/* implicit */long long int) var_2);
    }
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        arr_15 [i_2] [i_2] = ((/* implicit */long long int) arr_13 [i_2]);
        var_13 ^= ((/* implicit */short) ((((-1026162458960542173LL) / (((/* implicit */long long int) (-2147483647 - 1))))) << ((((+(((/* implicit */int) arr_11 [i_2])))) - (15)))));
        var_14 -= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)4208)) || (((/* implicit */_Bool) (short)-4208)))))));
    }
}
