/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209134
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    arr_6 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) ((unsigned char) arr_0 [i_1 - 1] [i_1]))) : (((/* implicit */int) (signed char)-21))));
                    arr_7 [i_1] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1843436081U)) && (((/* implicit */_Bool) (signed char)-40)))))) : (((((/* implicit */_Bool) 1955482409U)) ? (2453174234U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)18)))))))));
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0]))) < (((/* implicit */int) (signed char)86)))))) | ((~(arr_5 [i_2 - 1] [i_1])))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_2]);
                }
                /* vectorizable */
                for (unsigned short i_3 = 2; i_3 < 11; i_3 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            arr_17 [i_1] [i_1] [i_3 + 1] [i_4] [i_1] = ((/* implicit */signed char) var_8);
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)18))) : (16369762738339879879ULL)));
                            arr_18 [i_0] [i_0] [i_3 - 2] [i_4] [i_1] [i_3 - 2] = ((/* implicit */int) ((short) arr_15 [i_1 + 1] [i_1 + 1] [i_0] [i_0] [i_3 + 1]));
                        }
                        var_17 = ((/* implicit */short) min((var_17), (((short) arr_12 [i_0] [i_1 + 1] [i_3 - 2] [i_3] [i_0]))));
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            arr_21 [i_0] [i_1] [i_1] [i_4] [i_0] [i_4] [i_3] |= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [(short)8] [i_6])) : (((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) ((unsigned short) 4294967295U)))));
                            var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_3] [i_3 - 1] [i_3 + 1] [i_3])) ? (((/* implicit */int) arr_13 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_19 [i_1] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_3 - 1] [i_6]))));
                        }
                        for (short i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            arr_24 [i_0] [i_1] [i_1 - 1] [i_3 - 2] [i_4] [i_3 - 2] = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned char) var_14)));
                            arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)177)) >> ((((-(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_4] [i_3] [i_0] [i_0])))) + (30375)))));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_3 - 1] [i_3 + 1] [i_1 - 1])) : (((/* implicit */int) arr_12 [i_0] [i_7] [i_7] [i_3 + 1] [i_1 - 1]))));
                        }
                        var_20 = ((/* implicit */unsigned int) ((short) (short)8427));
                    }
                    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-9510))));
                }
                for (short i_8 = 1; i_8 < 11; i_8 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-1)))))));
                    var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((unsigned long long int) arr_19 [i_0] [i_0] [i_1] [i_1] [i_8 - 1] [i_8 - 1] [i_8])), (((/* implicit */unsigned long long int) 3764316996U)))))));
                    /* LoopSeq 2 */
                    for (int i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((int) ((unsigned char) arr_13 [i_0] [i_0]))))));
                        var_25 += ((/* implicit */unsigned char) arr_26 [i_0]);
                    }
                    for (int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
                        {
                            arr_38 [i_0] [i_1] [i_0] [i_10] [i_11] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_16 [i_0] [11ULL] [i_0] [i_0] [i_11])), (((int) max((2436474710U), (((/* implicit */unsigned int) (short)9520)))))));
                            var_26 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)18))))) ? (((/* implicit */int) arr_36 [i_0] [i_0] [i_1] [i_0] [i_0] [i_11] [i_11])) : (((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
                        {
                            arr_41 [i_0] [i_1] [i_8 + 1] [i_12] [i_12] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_10] [i_10] [(unsigned short)11] [i_0])) ? (max((arr_35 [i_12] [i_8] [i_1 + 1] [i_12]), (((/* implicit */int) (unsigned short)52812)))) : (((/* implicit */int) arr_22 [i_10] [(unsigned char)5] [i_12] [i_10] [i_12] [i_0] [i_10]))));
                            arr_42 [i_0] [i_1] [i_8 - 1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_10 [i_8] [i_8] [i_8])), (var_13)))) + (((/* implicit */int) (short)13311))));
                        }
                        /* vectorizable */
                        for (unsigned int i_13 = 0; i_13 < 12; i_13 += 1) 
                        {
                            arr_46 [i_1 + 1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_8 - 1] [i_1 - 1])))));
                            arr_47 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (arr_28 [i_1 + 1] [i_8 + 1] [i_1]) : (arr_28 [i_1 - 1] [i_1] [i_1])));
                            arr_48 [(unsigned short)10] [i_1 + 1] [i_13] [i_8 - 1] [i_8 - 1] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_8 - 1] [i_8 - 1]))));
                            var_27 = ((/* implicit */_Bool) var_2);
                        }
                        var_28 |= ((/* implicit */unsigned int) max((min((arr_2 [i_8 + 1] [(_Bool)1] [i_8]), (((/* implicit */int) (signed char)18)))), (((/* implicit */int) ((_Bool) arr_35 [(unsigned short)8] [i_8 + 1] [i_8] [i_8 + 1])))));
                        var_29 += ((/* implicit */unsigned short) min((arr_2 [i_1 + 1] [(_Bool)1] [(_Bool)1]), (arr_2 [i_1 - 1] [2U] [i_1 - 1])));
                    }
                }
                var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)243)))))));
                var_31 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_40 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1 - 1] [i_0])), (((unsigned int) arr_40 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0] [i_0]))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned int) var_8);
}
