/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222075
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
    var_12 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((int) var_4)) : (((/* implicit */int) ((signed char) var_11)))));
    var_13 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((long long int) arr_1 [i_0 - 1] [i_1 - 1])))));
            /* LoopSeq 4 */
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                arr_7 [(unsigned char)10] [i_1 - 1] [i_2] &= ((/* implicit */signed char) arr_6 [(short)2]);
                var_15 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_0 [(short)14]) : (((/* implicit */int) ((unsigned short) arr_2 [i_2] [i_1]))))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                arr_10 [i_3] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_8 [i_0 + 2] [i_1 - 1] [i_3] [i_1])) : (((arr_8 [i_0 + 2] [i_1 + 1] [i_3] [i_1]) ? (((/* implicit */int) arr_8 [i_0 + 2] [i_1 + 1] [i_3] [i_1])) : (((/* implicit */int) arr_8 [i_0 - 1] [i_1 - 1] [i_3] [i_1]))))));
                var_16 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(_Bool)1] [i_1 + 1])) ? (((/* implicit */int) arr_3 [6U] [i_1 + 1])) : (((/* implicit */int) arr_3 [22U] [i_1 + 1]))))) ? (((((/* implicit */_Bool) arr_3 [16] [18U])) ? (((int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_1] [i_3])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [2LL])) ? (((/* implicit */int) arr_9 [i_0] [(short)13])) : (((/* implicit */int) arr_3 [22LL] [i_3]))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 2])) ? (((/* implicit */int) arr_6 [(_Bool)1])) : (((/* implicit */int) arr_9 [i_0] [i_1])))) : (((((/* implicit */_Bool) arr_3 [(short)12] [i_1])) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_3])) : (arr_0 [i_3])))))));
                var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_3])) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))))));
                var_18 = ((/* implicit */unsigned long long int) ((signed char) arr_3 [i_1] [i_1]));
                var_19 = arr_2 [i_3] [14];
            }
            for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                arr_14 [i_1] = ((/* implicit */signed char) ((unsigned long long int) ((long long int) ((arr_8 [i_0] [i_0] [i_1] [i_1]) ? (arr_13 [17ULL] [i_1]) : (((/* implicit */long long int) arr_12 [i_0] [i_1] [i_1] [5LL]))))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 1; i_5 < 22; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        {
                            arr_21 [i_1] [i_1] [i_1] [19] [i_1] = ((/* implicit */long long int) arr_9 [i_5 + 2] [i_1]);
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) : (arr_13 [i_0] [i_6])));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_32 [(unsigned short)16] [i_1] [6ULL] [i_8] [i_9] [i_1] &= ((/* implicit */unsigned int) ((_Bool) arr_5 [i_7] [i_8]));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_18 [13LL] [i_1] [i_7] [i_1] [i_8] [i_9] [3U]))) ? (((/* implicit */int) arr_15 [i_1] [i_1 - 1] [(short)20] [i_1])) : (((/* implicit */int) ((_Bool) arr_5 [5LL] [(_Bool)1])))));
                            arr_33 [(short)7] [i_1] [i_7] [(unsigned char)1] [(short)7] = ((short) ((((/* implicit */_Bool) arr_13 [i_0] [i_1 - 1])) ? (arr_13 [i_1] [i_1]) : (((/* implicit */long long int) arr_12 [i_0] [i_0] [(unsigned short)18] [i_0]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        {
                            arr_38 [15] [i_1 - 1] [i_1] [13ULL] [i_11] [i_11] = ((/* implicit */_Bool) arr_16 [i_0] [i_1] [(short)13]);
                            var_22 = ((int) ((short) (_Bool)1));
                            arr_39 [i_10] &= ((/* implicit */signed char) arr_22 [i_0 - 1] [i_7] [i_7]);
                            var_23 = ((/* implicit */unsigned short) ((int) arr_26 [i_0 + 2] [(_Bool)1] [(_Bool)1] [i_1 + 1]));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (signed char i_12 = 1; i_12 < 22; i_12 += 3) 
                {
                    /* LoopSeq 3 */
                    for (short i_13 = 0; i_13 < 24; i_13 += 2) 
                    {
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) arr_6 [i_13]))));
                        arr_44 [i_0 + 2] [i_1] [i_7] [(short)2] [i_13] [(_Bool)1] [i_13] |= ((/* implicit */short) ((signed char) (short)-1));
                        arr_45 [i_1] [(_Bool)1] = ((/* implicit */short) ((signed char) arr_13 [i_1 + 1] [i_7]));
                    }
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((short) ((unsigned short) arr_2 [i_0 + 1] [i_12]))))));
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((((/* implicit */_Bool) arr_6 [6ULL])) ? (arr_37 [i_14 - 1] [22]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(short)6])))))));
                    }
                    for (signed char i_15 = 1; i_15 < 20; i_15 += 3) 
                    {
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((unsigned long long int) arr_4 [22LL] [i_15 + 4] [i_12 + 2])))));
                        arr_50 [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_9 [16LL] [i_1 - 1])) : (((/* implicit */int) arr_26 [i_0 - 1] [i_1] [i_0 + 2] [i_12 + 1]))));
                        arr_51 [(short)18] [i_1] [i_1] [i_1 - 1] [i_0] = ((/* implicit */long long int) arr_28 [i_0] [i_1] [i_1] [i_12] [i_15] [i_1]);
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_0 - 1] [i_1 - 1] [i_7] [i_7] [i_15 - 1])) ? (((((/* implicit */_Bool) arr_27 [i_0])) ? (arr_24 [i_0] [i_1] [(signed char)15] [i_12 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(signed char)6] [i_1] [i_1] [20LL] [i_7] [20LL] [(short)5]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_12 - 1] [i_12 - 1])))));
                    }
                    var_29 = ((/* implicit */long long int) ((short) arr_11 [i_1] [i_7] [i_7]));
                    var_30 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 + 2] [12ULL])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)0))));
                }
                for (int i_16 = 0; i_16 < 24; i_16 += 2) /* same iter space */
                {
                    arr_54 [i_0 - 1] [i_0 - 1] [i_1] [i_0] [i_0] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [(unsigned short)8] [i_1] [i_16] [18LL] [i_16] [i_16] [(_Bool)1])) ? (((unsigned int) arr_34 [i_0] [10] [(_Bool)1] [i_16] [i_1])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [(unsigned short)12] [i_0] [i_1])) ? (((/* implicit */int) arr_49 [i_1] [i_1] [i_1] [i_16] [i_16])) : (arr_12 [i_0] [i_0 - 1] [i_0] [i_0]))))));
                    var_31 = ((/* implicit */unsigned long long int) ((short) ((unsigned long long int) arr_5 [i_0] [(_Bool)1])));
                }
                for (int i_17 = 0; i_17 < 24; i_17 += 2) /* same iter space */
                {
                    arr_57 [i_0] [i_1] [i_7] [i_7] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_0 - 1] [i_0 - 1] [i_1])) ? (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-10084)))) : (((/* implicit */int) arr_17 [i_0 + 2] [i_0] [i_1] [14LL] [i_7] [14LL] [i_17]))));
                    var_32 = ((/* implicit */unsigned long long int) ((long long int) 0U));
                }
                /* LoopSeq 4 */
                for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                {
                    arr_61 [(unsigned char)9] [i_18 - 1] [i_1] [i_1] [i_1 + 1] [i_0] = ((/* implicit */signed char) ((long long int) ((unsigned int) arr_26 [(_Bool)1] [i_18] [(signed char)10] [(_Bool)1])));
                    var_33 *= ((/* implicit */_Bool) ((unsigned long long int) arr_3 [(_Bool)1] [(_Bool)1]));
                }
                for (unsigned int i_19 = 2; i_19 < 20; i_19 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_20 = 2; i_20 < 20; i_20 += 2) 
                    {
                        var_34 = ((/* implicit */signed char) arr_27 [(_Bool)1]);
                        var_35 *= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15526))) : (8589934591ULL)));
                    }
                    var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((short) arr_27 [i_19 + 3])))));
                    var_37 = ((/* implicit */unsigned long long int) ((unsigned short) ((long long int) arr_25 [i_0])));
                }
                for (unsigned int i_21 = 2; i_21 < 20; i_21 += 2) /* same iter space */
                {
                    arr_71 [0U] [i_1] [3ULL] [i_1] = ((/* implicit */unsigned long long int) ((short) arr_43 [i_0] [i_0 + 1] [i_1]));
                    arr_72 [i_0] [i_7] [i_1] [i_1] [i_1 - 1] [i_0] = ((/* implicit */signed char) ((unsigned long long int) arr_0 [i_0 + 2]));
                    var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_21 + 1] [(short)7] [i_21 + 1] [i_21] [i_21])) ? (arr_46 [i_21 + 3] [i_21 + 3] [i_21] [i_21] [3]) : (arr_46 [i_21 + 2] [i_21] [i_21] [i_21 + 2] [i_21])));
                }
                for (unsigned long long int i_22 = 1; i_22 < 22; i_22 += 4) 
                {
                    arr_76 [i_1] = ((long long int) arr_15 [i_22 + 2] [i_22 + 2] [i_22 + 2] [i_22]);
                    arr_77 [i_1] [i_1] [(short)9] [0ULL] [i_0] [0ULL] = ((/* implicit */unsigned short) ((long long int) (_Bool)1));
                    var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [(_Bool)1] [i_1 + 1] [i_1 + 1] [i_1] [21U] [i_1] [(signed char)23])) ? (arr_18 [i_0 - 1] [i_0 - 1] [i_1] [i_7] [(unsigned char)11] [(signed char)14] [15ULL]) : (arr_18 [i_1] [i_1 + 1] [i_1] [i_22] [i_7] [i_0 - 1] [i_22])));
                }
            }
            arr_78 [i_1] [i_1 + 1] = ((/* implicit */short) arr_27 [i_1 - 1]);
            arr_79 [i_0 + 1] [i_1] [(signed char)10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_35 [i_0] [(signed char)22] [i_1] [i_1]))) ? (((/* implicit */int) ((_Bool) arr_22 [1LL] [1LL] [7LL]))) : (((/* implicit */int) arr_58 [i_0]))));
        }
        /* LoopNest 2 */
        for (unsigned short i_23 = 0; i_23 < 24; i_23 += 2) 
        {
            for (unsigned int i_24 = 0; i_24 < 24; i_24 += 3) 
            {
                {
                    var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_0 + 2] [i_23])) ? (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_0 + 2] [17LL] [i_0 + 2] [18LL] [i_0] [(signed char)9] [i_0 - 1]))) : (((((/* implicit */_Bool) arr_18 [i_0 - 1] [i_0] [(unsigned char)2] [i_0 - 1] [i_23] [i_24] [i_24])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_0 - 1] [i_24]))) : (arr_27 [i_0]))))))));
                    var_41 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_0] [i_0 - 1] [i_0 + 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0 + 2] [i_0 - 1] [i_0 + 2]))) : (arr_30 [i_0 + 1] [i_0 - 1] [(signed char)7] [i_0] [i_0]))));
                    arr_85 [i_0] [(short)20] [i_24] [i_23] = ((/* implicit */_Bool) arr_25 [i_24]);
                }
            } 
        } 
        arr_86 [(unsigned char)13] = ((/* implicit */_Bool) ((int) ((long long int) ((((/* implicit */_Bool) arr_60 [i_0] [3U] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_81 [i_0])) : (arr_46 [i_0] [i_0] [i_0] [i_0] [i_0])))));
        var_42 = ((/* implicit */short) ((((_Bool) arr_4 [i_0] [i_0] [(signed char)4])) ? (((((/* implicit */_Bool) arr_17 [i_0] [6ULL] [i_0 - 1] [(short)1] [i_0] [i_0 - 1] [i_0 + 1])) ? (arr_63 [i_0 - 1] [20] [i_0 - 1] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_83 [i_0 + 1] [i_0 - 1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_83 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_83 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_83 [i_0 - 1] [i_0 + 1])))))));
    }
}
