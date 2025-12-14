/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195067
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) >> (((16300385850802634151ULL) - (16300385850802634151ULL)))));
    var_18 = ((/* implicit */signed char) var_7);
    var_19 = var_13;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (arr_0 [i_0] [i_0])));
        arr_2 [0ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_14))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) arr_3 [i_1 + 1]);
        arr_6 [i_1 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_16))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        var_23 *= ((/* implicit */unsigned long long int) arr_9 [i_2] [i_2]);
        arr_10 [i_2] = ((/* implicit */signed char) arr_9 [i_2] [i_2]);
        /* LoopNest 3 */
        for (unsigned short i_3 = 2; i_3 < 20; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) != (9223372036854775807LL)));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned int) 9223372036854775807LL);
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_4 - 1] [i_4] [i_5] [i_5] [i_5 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_3 + 1]))) : (((((/* implicit */_Bool) arr_16 [i_2] [i_3] [i_4 + 1] [i_5 + 1] [i_5 + 1] [i_4 + 1])) ? (arr_7 [i_4 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))))));
                            arr_22 [i_4] [i_4] [i_5 - 1] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_3] [i_3 - 2] [i_3 - 1] [i_4 - 1] [i_5 + 1] [i_5] [i_5 + 3])) ? (((/* implicit */int) arr_20 [i_2] [i_2] [i_3 + 2] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_5 + 1])) : (((/* implicit */int) arr_20 [i_2] [i_3] [i_3 - 2] [i_4 - 1] [i_3 - 2] [i_3 - 2] [i_5 + 3]))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_7 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32492)))));
                            var_28 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_5 + 1] [i_5] [i_5] [i_6] [i_6])) ? (arr_21 [i_5 + 2] [(unsigned short)17] [i_5] [i_5] [(unsigned char)6]) : (arr_21 [i_5 + 4] [i_5 + 4] [i_6] [i_5 + 4] [i_5 + 4])));
                        }
                    }
                } 
            } 
        } 
    }
}
