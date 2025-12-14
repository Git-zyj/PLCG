/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31823
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] &= ((/* implicit */short) var_3);
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((var_14) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0])))))));
        arr_4 [i_0] = arr_1 [i_0];
        var_20 ^= ((/* implicit */unsigned short) (signed char)-125);
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_2 [(short)5])) * (var_15)))) : (((1991912434840739645LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    for (int i_1 = 1; i_1 < 14; i_1 += 2) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_1 [i_1])))))))), (var_17)));
        arr_9 [i_1] &= ((((/* implicit */_Bool) ((signed char) arr_0 [i_1 + 2]))) ? (((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_16))) : (min((((/* implicit */unsigned int) var_1)), (1920649463U))));
        arr_10 [0U] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) arr_6 [i_1])) : (((1574666678) | (((/* implicit */int) var_5)))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_14 [i_2] = ((/* implicit */signed char) var_6);
        var_21 *= ((/* implicit */signed char) var_7);
    }
    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        var_22 -= ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-118))));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_15))));
        arr_19 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)7912)) : (((/* implicit */int) (_Bool)1))))) ? (3379469952U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)12371)))));
    }
    var_24 *= ((/* implicit */short) ((signed char) min((var_17), (((/* implicit */unsigned int) ((unsigned short) var_4))))));
    var_25 = ((/* implicit */unsigned short) max((var_7), (((/* implicit */short) (signed char)-125))));
}
