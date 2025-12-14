/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4502
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
    var_19 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-1)) != (((/* implicit */int) (short)-1)))))) : (arr_0 [i_0]));
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? ((+(9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))));
        var_20 = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            arr_10 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) ((short) 0U))) ? (min((((/* implicit */int) (short)0)), (var_0))) : (((/* implicit */int) ((arr_8 [i_2]) != (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 16; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    {
                        var_21 |= ((/* implicit */unsigned int) var_5);
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) -974289919152746755LL)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)-1)))))));
                        var_23 += ((/* implicit */long long int) var_8);
                    }
                } 
            } 
        }
        var_24 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_8) : (((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)28))))))) ? (max((min((((/* implicit */long long int) var_16)), (var_10))), (((((/* implicit */_Bool) arr_14 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_11 [i_1] [i_1] [i_1]))))) : (((((/* implicit */_Bool) arr_13 [13U] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (var_3))));
    }
    for (unsigned int i_5 = 2; i_5 < 11; i_5 += 1) 
    {
        var_25 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((-9223372036854775807LL - 1LL)))) != (((/* implicit */long long int) arr_16 [i_5])))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_12 [i_5] [i_5 - 2] [i_5] [(short)0]), (arr_12 [i_5] [i_5 + 3] [i_5 + 2] [(unsigned char)2])))))));
        arr_18 [i_5 - 2] = ((/* implicit */unsigned int) (((-(arr_16 [i_5 - 2]))) << (((((max((arr_16 [i_5 + 2]), (arr_16 [i_5 + 2]))) + (1107811170))) - (23)))));
    }
    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) min((9223372036854775807LL), (max((((1058446231422423884LL) + (((/* implicit */long long int) var_17)))), (((/* implicit */long long int) var_13)))))))));
}
