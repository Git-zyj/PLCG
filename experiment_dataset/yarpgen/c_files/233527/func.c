/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233527
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_4)), (18446744073709551591ULL))) + (((/* implicit */unsigned long long int) 4294967295U))))) ? (((arr_2 [i_0 + 1]) >> (((((/* implicit */int) ((unsigned short) var_11))) - (46448))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22174)))));
        arr_4 [i_0 + 1] = ((/* implicit */int) var_17);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 4; i_1 < 24; i_1 += 1) 
        {
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_13))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_1 [i_0 - 1] [i_1 - 1])) == (var_0)));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 24; i_3 += 2) 
                {
                    for (short i_4 = 1; i_4 < 23; i_4 += 4) 
                    {
                        {
                            var_20 *= ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))));
                            var_21 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (var_3))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned char i_5 = 1; i_5 < 24; i_5 += 4) 
                {
                    arr_18 [i_0] [i_1] [(unsigned char)24] [(unsigned char)24] = (-(((/* implicit */int) (unsigned short)24387)));
                    arr_19 [i_1] [6] [6] [i_0] = arr_15 [i_0] [i_1] [i_2] [i_2] [(_Bool)1];
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_22 [i_0] [16LL] [i_0] [i_2] [i_1] = ((/* implicit */unsigned short) ((((((-1) + (2147483647))) >> (((/* implicit */int) (signed char)15)))) < (((/* implicit */int) var_13))));
                    var_22 = ((/* implicit */unsigned short) arr_14 [i_0] [i_1] [3U] [i_2] [i_6]);
                }
                for (int i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    arr_26 [i_0 - 1] [i_1] [i_2] [i_0 - 1] = (~(((/* implicit */int) (!(((/* implicit */_Bool) 3216026790U))))));
                    arr_27 [i_1] [i_1] [i_1] [9] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) + (((/* implicit */int) arr_7 [i_1]))))) : ((~(3964767748U)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        arr_30 [i_0] [(signed char)18] [i_2] [i_7] [i_7] [i_8] [i_8] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)24387)) ? (arr_5 [i_8]) : (((/* implicit */unsigned long long int) ((var_5) & (((/* implicit */int) arr_25 [i_0] [i_1] [i_2] [9U] [9U])))))));
                        arr_31 [i_0] [i_1] = var_5;
                        arr_32 [i_0 + 1] [i_1 - 2] [i_7] [i_7] [i_8] [i_8] [i_8] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_1 - 3] [i_7] [i_7] [i_8] [i_7] [i_8] [i_1 - 3]))) != (((((/* implicit */_Bool) arr_16 [7U] [i_2] [i_7] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)256))) : (4020235551U)))));
                    }
                }
            }
            for (signed char i_9 = 2; i_9 < 23; i_9 += 4) 
            {
                arr_35 [i_1] [i_1] [i_9 + 2] [i_9 - 2] = ((((/* implicit */_Bool) ((unsigned char) 13305219720459641047ULL))) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_12) <= (((var_12) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-10))))))))));
                arr_36 [i_1] [i_1 - 4] = ((/* implicit */unsigned char) (-(var_5)));
            }
            arr_37 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_14)) | (arr_8 [i_1] [i_1 - 2] [i_1 - 4] [i_0])));
        }
    }
    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) 330199547U)) ? (3779419042U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)216))))))));
    var_24 = ((/* implicit */int) max((11294050963602334009ULL), (((/* implicit */unsigned long long int) (short)11390))));
}
