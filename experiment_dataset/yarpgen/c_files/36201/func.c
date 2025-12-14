/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36201
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
    for (int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    var_15 += ((/* implicit */short) min((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1])));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */short) ((((arr_2 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3 - 1] [(_Bool)1] [i_0]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [(_Bool)1])))));
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_0] [3] [i_3])) + (2147483647))) >> (((((arr_3 [i_2] [(unsigned short)12]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))) - (4157599704U))))))));
                        /* LoopSeq 1 */
                        for (short i_4 = 2; i_4 < 12; i_4 += 3) 
                        {
                            var_18 = ((((/* implicit */int) arr_0 [i_3 + 1])) ^ (arr_9 [i_3 + 2] [i_4 - 2] [i_0 - 1] [i_2 + 2] [i_3]));
                            arr_13 [i_4] [i_4] [i_2] = arr_9 [i_0] [i_1] [i_1] [10] [i_0];
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((arr_2 [i_1]) * (((((/* implicit */unsigned long long int) arr_1 [i_2])) / (arr_2 [i_0]))))))));
                        }
                        var_20 = ((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_3]) ^ (arr_3 [i_0 - 1] [i_2 + 1])));
                    }
                }
            } 
        } 
        arr_14 [(short)9] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [(_Bool)1]);
        arr_15 [11] = ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max((arr_17 [i_5]), (arr_17 [i_6]))))) < (((((arr_19 [i_5] [i_6] [i_7]) + (9223372036854775807LL))) << (min((arr_20 [i_7] [i_6]), (((/* implicit */unsigned long long int) arr_16 [i_7]))))))));
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) min((((((/* implicit */_Bool) arr_20 [i_5] [i_6])) || (((/* implicit */_Bool) arr_22 [i_5])))), (((arr_23 [i_6] [i_6] [i_6]) < (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5]))))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        for (int i_10 = 0; i_10 < 24; i_10 += 1) 
                        {
                            {
                                arr_33 [i_9] [i_9] [i_6] [i_7] [i_9] = ((/* implicit */signed char) min((arr_25 [i_5] [i_6] [i_7] [i_9] [i_10] [i_5]), (min((arr_25 [i_7] [i_5] [i_7] [1] [i_10] [i_5]), (arr_25 [i_6] [i_6] [i_6] [(signed char)5] [i_10] [i_9])))));
                                arr_34 [i_10] [i_7] [i_7] = ((/* implicit */int) ((arr_25 [(unsigned char)11] [i_6] [i_6] [i_7] [i_9] [i_9]) && (((/* implicit */_Bool) min((((/* implicit */short) arr_16 [i_10])), ((short)13227))))));
                                var_23 = ((/* implicit */short) min((((/* implicit */long long int) max((((/* implicit */int) arr_17 [i_5])), (arr_28 [i_5] [i_5] [i_7] [i_5] [i_5])))), (((((/* implicit */long long int) ((/* implicit */int) arr_16 [(short)14]))) % (arr_29 [i_5] [i_7])))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) arr_19 [i_5] [i_6] [i_7]);
                    /* LoopNest 2 */
                    for (signed char i_11 = 1; i_11 < 22; i_11 += 1) 
                    {
                        for (signed char i_12 = 4; i_12 < 22; i_12 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */int) ((((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13227))))) + (min((((/* implicit */unsigned long long int) (short)-27888)), (12900284305152400363ULL)))));
                                var_26 = ((/* implicit */signed char) ((arr_27 [i_5] [i_5] [i_5] [i_11]) & (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_12] [i_11] [i_7] [(signed char)2]))) | (arr_37 [17]))), (((/* implicit */unsigned int) arr_32 [i_5] [i_6] [i_6] [i_11] [i_6]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_13 = 0; i_13 < 24; i_13 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_36 [i_5] [i_6] [i_7] [i_7] [i_13])), (min((arr_19 [8] [i_6] [i_6]), (((/* implicit */long long int) arr_32 [(short)22] [i_6] [i_7] [12U] [i_5]))))));
                        var_28 = ((/* implicit */short) max((var_28), (min(((short)27904), (((/* implicit */short) arr_21 [i_5] [i_13] [i_13]))))));
                    }
                    for (int i_14 = 0; i_14 < 24; i_14 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */int) ((((max((((/* implicit */unsigned long long int) arr_17 [i_5])), (arr_26 [(signed char)22] [(signed char)22] [i_7] [i_7]))) + (((/* implicit */unsigned long long int) ((arr_40 [i_5] [21] [i_6] [i_5] [7]) | (arr_42 [(unsigned short)6] [i_6] [i_7] [i_7] [i_14])))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5] [7] [8])))));
                        var_30 = ((/* implicit */long long int) arr_35 [i_5] [i_7]);
                        var_31 |= arr_23 [i_7] [i_6] [i_5];
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_41 [i_5] [i_6] [i_5] [i_14] [i_14]), (((/* implicit */long long int) max((((/* implicit */int) arr_38 [i_5] [i_5] [i_6] [i_14])), (arr_31 [i_5] [i_6] [i_7] [(short)9] [(signed char)13]))))))) || (((/* implicit */_Bool) arr_17 [i_7]))));
                    }
                }
            } 
        } 
        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((arr_23 [i_5] [i_5] [i_5]) == (min((arr_23 [i_5] [i_5] [i_5]), (arr_41 [i_5] [i_5] [i_5] [i_5] [i_5]))))))));
    }
    var_34 = ((/* implicit */short) var_11);
}
