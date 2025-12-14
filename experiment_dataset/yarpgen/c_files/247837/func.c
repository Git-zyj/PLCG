/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247837
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
                            {
                                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_11 [i_3] [i_2]))));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_2] [i_0]))));
                                var_22 = ((/* implicit */int) arr_14 [i_0] [i_2]);
                            }
                            var_23 += ((/* implicit */signed char) ((arr_8 [i_3]) ? (((/* implicit */int) arr_8 [i_2])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 1] [i_3])) ? (arr_6 [i_0] [i_2] [i_2] [(unsigned short)20]) : (arr_6 [i_0] [i_2] [(signed char)4] [i_3 + 1])))) ? (((/* implicit */int) arr_4 [i_0])) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_9 [i_0] [i_1] [i_2] [i_3]) : (((/* implicit */int) arr_4 [(signed char)12]))))))));
                            var_24 += ((/* implicit */unsigned long long int) arr_1 [i_0]);
                            var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1 + 4])) ? (((((/* implicit */_Bool) ((arr_10 [i_0] [i_0] [i_2] [i_2]) ? (((/* implicit */int) arr_11 [i_2] [i_2])) : (((/* implicit */int) arr_8 [i_3]))))) ? (((arr_8 [i_3]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_8 [i_2])))) : (((/* implicit */int) arr_15 [i_2] [i_0])))) : (arr_7 [i_2] [i_1] [10LL] [i_3])));
                        }
                    } 
                } 
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_0 [i_0] [i_1 + 3])))) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])) : (((((/* implicit */_Bool) arr_9 [i_1] [i_0] [i_0] [10U])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_11 [(unsigned short)11] [i_0]))))))) ? (((/* implicit */int) arr_10 [i_0] [i_1] [(signed char)13] [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
                var_27 = ((/* implicit */int) min((var_27), (arr_9 [i_0] [i_0] [i_0] [i_1 - 2])));
                /* LoopSeq 3 */
                for (short i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    var_28 = ((/* implicit */_Bool) arr_1 [i_0]);
                    arr_18 [i_0] [i_1] [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_5])) ? (((/* implicit */int) arr_12 [i_0] [17] [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_16 [i_1 - 2] [i_0] [i_1 - 2])) ? (((/* implicit */int) arr_15 [i_1] [i_0])) : (((/* implicit */int) arr_8 [i_0]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [(short)15] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [(_Bool)1] [(_Bool)1] [i_0]))) : (arr_16 [i_0] [i_0] [i_5])))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [i_1 + 2] [i_1 + 2] [i_5])) ? (((/* implicit */int) arr_17 [i_0] [(short)8] [i_5] [i_5])) : (((/* implicit */int) arr_5 [i_0] [i_1] [(unsigned short)0])))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_12 [i_5] [i_1] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_14 [i_1] [13U])))))) : (((arr_8 [i_0]) ? (((/* implicit */int) arr_5 [i_5] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [(unsigned short)10] [i_5])) ? (arr_7 [i_0] [i_0] [(unsigned short)10] [i_5]) : (arr_7 [(signed char)13] [i_0] [i_0] [i_0]))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        arr_25 [(unsigned short)3] [i_0] [i_7] = ((/* implicit */signed char) arr_5 [i_0] [(signed char)16] [i_0]);
                        var_29 = ((/* implicit */long long int) arr_11 [i_0] [i_0]);
                        var_30 = ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_6] [i_7]);
                    }
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_31 = arr_28 [i_9] [3LL] [i_9] [i_8] [i_9] [i_0] [(signed char)3];
                                arr_30 [i_0] [i_1] [i_0] [i_6] [i_8] [i_9] = ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_32 += ((/* implicit */_Bool) ((arr_8 [(signed char)16]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_6] [i_0]))));
                                var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) arr_3 [i_1] [i_6]))));
                            }
                        } 
                    } 
                    arr_31 [i_6] [i_0] [i_6] = arr_20 [i_0] [20] [i_1 - 1] [i_6];
                    arr_32 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_0] [i_0]);
                }
                for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 3) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [(unsigned short)18] [9] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1]))) : (arr_34 [i_0] [i_0] [11ULL] [i_10])))) ? (((((/* implicit */_Bool) arr_5 [i_0] [10ULL] [i_10])) ? (((/* implicit */int) arr_21 [i_0] [i_1 - 2] [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (arr_20 [i_0] [i_1] [i_10] [i_1])))) ? (((arr_8 [i_0]) ? (((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_10] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [15]))) : (arr_22 [15ULL] [15ULL] [i_10] [i_10] [i_10]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_10]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0])))));
                    var_35 *= ((/* implicit */unsigned int) arr_9 [i_10] [i_1] [i_1] [i_0]);
                    var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_10])) ? (((/* implicit */unsigned long long int) arr_23 [i_0] [i_0] [i_1 + 4] [i_0])) : (((((/* implicit */_Bool) arr_4 [17LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_1] [i_10]))) : (arr_34 [i_10] [i_0] [i_10] [i_10])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_34 [i_10] [i_0] [i_0] [1])));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_11 = 3; i_11 < 21; i_11 += 4) 
                    {
                        arr_37 [i_0] [i_0] [19] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [(signed char)10] [(signed char)10] [i_10] [i_10] [(signed char)8])) ? (arr_19 [i_11] [(unsigned short)13] [(unsigned short)13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0])))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_24 [i_0] [12ULL] [i_1 + 1] [i_10] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((arr_28 [i_0] [19LL] [i_10] [i_11 - 1] [i_10] [i_10] [i_10]) ? (arr_6 [i_0] [i_0] [(signed char)12] [i_11 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(signed char)20] [i_0]))))))));
                        var_37 = ((/* implicit */signed char) arr_10 [i_0] [i_10] [i_1] [i_0]);
                        arr_38 [(signed char)6] [i_0] [i_10] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_22 [i_10] [i_1] [i_10] [i_11 + 1] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [(signed char)5])))))) ? (arr_29 [i_0] [i_0] [(signed char)21] [i_10] [i_10] [i_11 - 3] [i_11]) : (((/* implicit */unsigned int) arr_23 [i_0] [(_Bool)1] [i_10] [i_0]))));
                    }
                    for (int i_12 = 0; i_12 < 22; i_12 += 1) /* same iter space */
                    {
                        var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [10LL] [10LL] [10LL] [i_0])) ? (((/* implicit */int) arr_8 [(signed char)18])) : (((arr_28 [i_0] [i_0] [i_1 - 1] [i_1] [8ULL] [i_12] [i_12]) ? (((/* implicit */int) arr_2 [(unsigned short)0])) : (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) arr_15 [2ULL] [i_0])) ? (((/* implicit */unsigned long long int) arr_29 [(unsigned short)6] [i_1] [(signed char)6] [i_10] [i_12] [i_12] [i_12])) : (((((/* implicit */_Bool) arr_21 [(unsigned short)12] [i_1 + 3] [(signed char)6])) ? (arr_34 [i_12] [8] [8] [i_0]) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_10] [i_12])))))) : (((((/* implicit */_Bool) arr_34 [i_0] [(short)14] [i_10] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [(signed char)4]))) : (arr_34 [i_0] [(unsigned short)12] [i_10] [i_12]))))))));
                        var_39 = ((/* implicit */int) arr_5 [i_0] [i_1 - 2] [i_10]);
                        arr_41 [i_0] [i_0] = ((/* implicit */signed char) arr_7 [(_Bool)1] [i_1 + 2] [i_10] [i_1 + 2]);
                    }
                    for (int i_13 = 0; i_13 < 22; i_13 += 1) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) arr_23 [i_0] [i_0] [i_10] [(unsigned char)14]))));
                        var_41 = arr_19 [i_13] [i_10] [i_1];
                        arr_44 [i_0] [i_1] [i_0] [i_13] [10ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_5 [9U] [i_10] [i_1 + 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_13] [(signed char)4] [i_1 + 4] [i_0]))) : (arr_24 [i_10] [i_1] [i_1] [i_13] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_13] [i_13] [i_10] [i_0] [i_0])) ? (((/* implicit */int) arr_28 [i_13] [19ULL] [(signed char)6] [(signed char)6] [19ULL] [19ULL] [17ULL])) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_10] [i_13] [i_10])))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_43 [(short)11] [i_0]))))) ? (((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_13] [i_13])) ? (((/* implicit */int) arr_33 [i_0])) : (((/* implicit */int) arr_28 [i_10] [i_10] [i_10] [i_13] [i_10] [i_0] [i_10])))) : (((/* implicit */int) arr_13 [i_0] [i_0] [(signed char)8] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_3 [7] [i_10])) ? (arr_29 [i_0] [i_0] [i_1] [i_1 - 2] [i_1] [i_1] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0])))))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 1) 
                    {
                        var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_40 [i_0] [i_1 - 2] [i_10] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [20])))))) ? (arr_42 [i_1 - 1] [(signed char)1] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(_Bool)1] [i_0])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [4U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_10]))) : (arr_19 [i_14] [i_10] [i_1 + 3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_0] [(signed char)12]))) : (arr_27 [(short)16] [i_1] [i_10] [i_14])))) : (arr_24 [i_14] [i_1] [i_10] [3] [i_1 + 4]))) : (((/* implicit */unsigned long long int) arr_16 [i_1 + 1] [(unsigned char)12] [i_14])))))));
                        arr_47 [i_0] [i_1 + 4] [i_10] [i_14] = ((/* implicit */long long int) arr_2 [i_0]);
                    }
                }
            }
        } 
    } 
    var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) var_4)) : (var_9))) : (((/* implicit */int) var_19))));
    /* LoopNest 3 */
    for (signed char i_15 = 0; i_15 < 24; i_15 += 1) 
    {
        for (signed char i_16 = 1; i_16 < 21; i_16 += 4) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 2; i_18 < 22; i_18 += 4) 
                    {
                        for (int i_19 = 2; i_19 < 23; i_19 += 3) 
                        {
                            {
                                var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_59 [i_15] [i_16 + 2] [i_19] [i_18] [i_19])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_15] [i_16] [i_16] [i_17] [(_Bool)1] [i_19])) ? (((/* implicit */int) arr_48 [i_15] [i_15])) : (((/* implicit */int) arr_49 [i_19]))))) ? (((/* implicit */int) arr_57 [(signed char)8] [i_15] [(signed char)8] [i_15] [i_15] [i_15])) : (((/* implicit */int) arr_57 [i_15] [i_16] [i_15] [i_17] [i_18] [i_19])))) : (((((/* implicit */_Bool) arr_53 [i_16 + 3] [i_17] [i_18])) ? (((((/* implicit */_Bool) arr_59 [i_15] [i_16] [i_19] [i_18 - 2] [i_19])) ? (((/* implicit */int) arr_51 [i_16 + 1])) : (((/* implicit */int) arr_50 [i_17] [(_Bool)1] [i_15])))) : (((((/* implicit */_Bool) arr_59 [i_15] [22LL] [i_19] [i_15] [i_15])) ? (((/* implicit */int) arr_50 [i_15] [i_15] [15U])) : (((/* implicit */int) arr_59 [i_19] [i_18] [i_19] [i_16] [i_15]))))))));
                                arr_60 [i_15] [i_16 - 1] [i_17] [13LL] [i_19 + 1] [i_19] = ((((/* implicit */_Bool) arr_58 [i_19] [i_16])) ? (((/* implicit */int) arr_48 [(_Bool)1] [i_16])) : (((((/* implicit */_Bool) arr_50 [i_15] [i_15] [i_19 - 2])) ? (((((/* implicit */_Bool) arr_58 [i_19] [i_19])) ? (((/* implicit */int) arr_53 [i_15] [i_16] [i_15])) : (((/* implicit */int) arr_54 [i_15] [i_18 + 1] [i_19])))) : (((/* implicit */int) arr_56 [(unsigned short)21] [(unsigned char)7] [i_17] [(unsigned short)23] [i_18] [i_19 - 1])))));
                                var_45 = ((/* implicit */unsigned int) arr_56 [i_15] [i_16 + 3] [i_16 + 1] [14LL] [i_18] [i_19 - 1]);
                                var_46 += ((/* implicit */int) arr_48 [i_17] [i_18]);
                            }
                        } 
                    } 
                    var_47 = ((/* implicit */unsigned short) arr_52 [i_15] [i_16] [i_17]);
                }
            } 
        } 
    } 
    var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)49)) ? (6016938U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))));
}
