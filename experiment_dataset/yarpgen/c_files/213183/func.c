/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213183
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
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_1]))))) ? (arr_3 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 43154075U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0] [i_1])))))));
                arr_7 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_9)) : ((+(arr_5 [i_0] [i_0] [i_0])))));
                var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [9LL])) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_1] [i_1]))) : (arr_3 [i_0] [i_0] [i_0]))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_2 = 2; i_2 < 18; i_2 += 3) 
                {
                    arr_11 [(unsigned short)12] [i_0] [(unsigned short)12] [i_2] |= ((/* implicit */unsigned char) arr_3 [i_2 + 3] [i_2 - 2] [i_2 + 3]);
                    arr_12 [i_0] [11LL] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((((/* implicit */_Bool) 352662759)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_1 [9LL] [i_2])) ? (-1004848517) : (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        arr_15 [i_3] [i_3] [i_3] [i_0] |= ((/* implicit */long long int) arr_9 [i_0] [i_1]);
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            arr_19 [i_0] [i_0] [(unsigned short)6] [i_3] [i_4] = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned char)14] [i_3]))))));
                            var_12 = ((/* implicit */unsigned long long int) max((var_12), (((((/* implicit */_Bool) arr_13 [(short)10] [(short)10] [8ULL] [i_3] [i_4])) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_17 [i_3]) : (((/* implicit */int) var_3)))))))));
                        }
                        for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            arr_24 [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_2 - 1] [i_1] [i_2] [i_2] [(unsigned char)20] [i_1] [i_0])))))));
                            arr_25 [i_0] [i_1] [i_2] [i_3] [10LL] [i_1] [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_16 [i_0] [17ULL] [i_2 - 2] [i_3])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
                            var_13 = ((/* implicit */long long int) ((arr_20 [i_2] [i_2] [i_2] [i_2] [i_2 - 1] [i_2]) * (((/* implicit */unsigned long long int) ((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                        }
                    }
                    for (signed char i_6 = 3; i_6 < 20; i_6 += 3) 
                    {
                        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_3 [i_0] [i_1] [i_6])))) ? (var_0) : (((/* implicit */unsigned long long int) ((arr_22 [i_0] [i_0] [10LL] [i_0] [i_0] [i_0] [14]) - (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_0])))))))))));
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2 - 1] [i_6 - 3])) ? (arr_4 [i_2 + 3] [i_2 + 1] [i_6 - 3]) : (arr_4 [i_2 - 1] [i_2 + 3] [i_6 - 1])));
                        var_16 += ((/* implicit */signed char) (short)17365);
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            arr_32 [i_0] [i_1] = (unsigned short)65535;
                            arr_33 [i_0] [i_0] [i_2] [i_0] [i_7] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_29 [i_0] [i_0] [19LL] [i_0] [i_0] [i_0] [i_0])))) ? (4293918720U) : (((/* implicit */unsigned int) arr_13 [i_6 + 1] [i_2 - 2] [i_2 - 2] [i_6 + 1] [i_7]))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 728840268U)))) ? (((((/* implicit */_Bool) (short)-17389)) ? (((/* implicit */int) var_6)) : (arr_16 [(unsigned char)12] [i_2] [(unsigned char)12] [(unsigned char)12]))) : (arr_4 [i_0] [i_6] [i_6]))))));
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((long long int) var_9)))));
                            arr_38 [i_0] [15LL] [i_2] [i_6] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) arr_31 [i_0] [9U] [i_2] [i_6] [i_0])))));
                        }
                    }
                }
                for (signed char i_9 = 1; i_9 < 20; i_9 += 3) /* same iter space */
                {
                    arr_41 [i_1] [i_1] [i_0] = (!(((var_10) < (((/* implicit */long long int) ((/* implicit */int) var_3))))));
                    /* LoopNest 2 */
                    for (short i_10 = 4; i_10 < 19; i_10 += 4) 
                    {
                        for (unsigned int i_11 = 1; i_11 < 20; i_11 += 4) 
                        {
                            {
                                arr_47 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [(_Bool)1] [i_9] [i_10]))) / ((+(var_10)))));
                                arr_48 [i_0] [i_10] [i_0] = ((/* implicit */unsigned char) arr_23 [i_0] [i_0] [i_1] [(short)13] [i_1]);
                                var_19 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17368)) ? (((unsigned long long int) arr_46 [i_9] [i_9] [i_9] [i_10] [i_9])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56844))))))))) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1])) : (arr_5 [i_10] [i_10] [i_9])));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (signed char i_12 = 1; i_12 < 20; i_12 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_20 = ((((/* implicit */_Bool) arr_54 [19ULL] [i_0] [i_12 + 1] [i_12 + 1])) ? (((/* implicit */int) ((short) var_5))) : (((/* implicit */int) var_2)));
                        var_21 = ((/* implicit */signed char) ((arr_29 [i_12] [i_12] [i_12] [i_12] [i_12 + 1] [i_12 + 1] [i_13]) | (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                    }
                    arr_55 [i_0] [i_0] [i_12] = ((/* implicit */signed char) (~(arr_53 [i_0] [i_1] [i_1] [i_1] [i_12] [i_0])));
                    arr_56 [(unsigned short)6] [i_1] [(unsigned short)6] |= ((/* implicit */_Bool) (((-(((/* implicit */int) var_4)))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) arr_39 [i_0] [i_0] [(unsigned char)16] [i_12]))))));
                }
                /* vectorizable */
                for (long long int i_14 = 1; i_14 < 18; i_14 += 4) 
                {
                    arr_61 [i_0] [i_0] [i_1] [(short)12] = ((/* implicit */unsigned int) ((arr_50 [i_1] [i_14 + 3] [i_14]) - ((~(1602421171888360722LL)))));
                    var_22 = ((/* implicit */unsigned long long int) arr_27 [i_0] [i_1] [(unsigned char)19] [i_1]);
                }
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((unsigned long long int) arr_28 [(unsigned short)8] [i_1] [i_0] [(unsigned short)8])))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)17363)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_7)))) * (((var_0) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
    var_25 = ((/* implicit */short) var_4);
}
