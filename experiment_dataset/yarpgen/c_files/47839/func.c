/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47839
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_20 = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0])), (((((/* implicit */long long int) 1903944136)) - (arr_0 [i_0])))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            var_21 = ((/* implicit */int) (signed char)77);
            var_22 &= min((1883677445), (((/* implicit */int) (short)-21935)));
        }
        arr_6 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (max((arr_0 [i_0]), (((/* implicit */long long int) (_Bool)0)))))) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)11130))))));
        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_4 [i_0]))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_5)), (var_14)))) ? (((((/* implicit */int) var_2)) / (((/* implicit */int) (short)21934)))) : (((/* implicit */int) max(((unsigned short)54414), (((/* implicit */unsigned short) (_Bool)1))))))) : (((/* implicit */int) var_9)));
    }
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)54414)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_9 [i_2]))))))) ? (arr_5 [i_2] [i_2] [i_2]) : (((/* implicit */int) var_18))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) max((max((-5286309256615449211LL), (((long long int) arr_7 [i_2] [(short)2])))), (((/* implicit */long long int) ((min((var_4), (var_4))) > (((/* implicit */long long int) var_10)))))));
    }
    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        var_25 = ((/* implicit */unsigned int) var_1);
        var_26 = ((/* implicit */long long int) var_12);
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
    {
        var_27 *= ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (unsigned short)11122))));
        var_28 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4]))) * (0U))));
    }
    var_29 = ((/* implicit */int) max((var_16), (((/* implicit */long long int) ((((/* implicit */int) (signed char)127)) * (((/* implicit */int) (_Bool)1)))))));
    var_30 |= ((/* implicit */unsigned int) var_2);
}
