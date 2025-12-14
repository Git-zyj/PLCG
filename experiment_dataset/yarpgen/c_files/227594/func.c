/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227594
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_11 *= ((/* implicit */short) arr_1 [i_0]);
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((arr_1 [i_0]) < (((/* implicit */unsigned int) arr_0 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (~(((/* implicit */int) var_7)))))));
        var_14 = ((/* implicit */int) ((signed char) arr_3 [i_1]));
        var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1515777562))));
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_1] [i_2]))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 4; i_3 < 15; i_3 += 4) 
            {
                arr_12 [i_3] [i_2] [i_1] = ((/* implicit */int) arr_1 [i_3 + 1]);
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_3 - 2])))))) ? ((+(((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) ((var_1) == (((/* implicit */int) var_7))))))))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_3 - 2] [i_3])) || (((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_3 [i_1])))))));
            }
            var_18 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1] [i_2])) * (((/* implicit */int) arr_4 [i_1] [i_2]))));
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_1]))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_10))));
                var_21 = arr_8 [i_1] [i_1];
            }
            for (signed char i_5 = 3; i_5 < 13; i_5 += 3) 
            {
                var_22 ^= arr_4 [i_5] [i_2];
                /* LoopSeq 1 */
                for (signed char i_6 = 1; i_6 < 13; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_23 *= ((/* implicit */_Bool) (~(-1515777564)));
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_5 + 3] [i_2] [i_5 + 3] [i_6] [i_6 + 1])) >> (((((int) var_4)) + (818534940))))))));
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (+(((arr_5 [i_6 - 1]) / (((/* implicit */int) var_9)))))))));
                        var_26 = ((/* implicit */unsigned long long int) ((long long int) arr_7 [i_5] [i_5 - 1] [i_6 + 3]));
                    }
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) arr_2 [i_1] [i_1]))));
                    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((arr_10 [i_5 - 3] [i_6 + 1]) * (arr_10 [i_5 + 3] [i_2]))))));
                }
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((((/* implicit */int) arr_3 [i_1])) ^ (((/* implicit */int) var_6)))) * (((/* implicit */int) var_0)))))));
            }
        }
        for (long long int i_8 = 0; i_8 < 16; i_8 += 4) 
        {
            var_30 = ((/* implicit */signed char) (-(arr_8 [i_8] [i_1])));
            var_31 *= ((/* implicit */unsigned long long int) var_1);
            arr_26 [i_1] = ((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1]);
        }
        arr_27 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_10)));
    }
    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 4) 
    {
        var_32 *= ((/* implicit */_Bool) max((2405528852U), (((/* implicit */unsigned int) max(((+(((/* implicit */int) (unsigned char)6)))), (((/* implicit */int) ((2147483647) <= (((/* implicit */int) (signed char)-51))))))))));
        arr_30 [i_9] &= ((/* implicit */unsigned long long int) ((1515777556) / (-1515777574)));
    }
    /* vectorizable */
    for (long long int i_10 = 0; i_10 < 11; i_10 += 4) 
    {
        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (~(arr_29 [i_10] [i_10]))))));
        var_34 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) + (2147483647))) >> (((((/* implicit */int) arr_11 [i_10] [i_10] [i_10])) - (60508)))));
        var_35 *= ((/* implicit */signed char) arr_16 [i_10] [i_10]);
    }
    var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))))));
}
