/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51566
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
    var_10 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22))) : (2366869182U)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = min((((/* implicit */unsigned int) arr_1 [i_0])), (((((/* implicit */_Bool) 750995185U)) ? (3234263198U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [6ULL]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [2U])))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) var_0))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_9 [i_0] = var_9;
            var_11 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_8 [i_1]));
        }
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 1) 
                    {
                        {
                            arr_22 [i_0] [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (arr_2 [i_0])));
                            arr_23 [i_0] [i_2] [i_3] [i_0] [i_5] [i_2] = ((/* implicit */unsigned int) ((_Bool) var_8));
                            arr_24 [i_0] [i_0] [11U] [i_5] = var_1;
                            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned short) var_0))), (var_5)))) ? (min((((((/* implicit */_Bool) var_4)) ? (var_6) : (var_3))), (var_6))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5 - 1] [i_5 + 1] [i_0]))) : (arr_12 [i_3] [11U])))));
                            arr_25 [i_5] [i_5] [i_5] [10LL] [i_5 + 3] |= ((/* implicit */unsigned short) min((((long long int) arr_8 [i_5 + 1])), (((/* implicit */long long int) ((arr_17 [i_5 + 1] [i_5] [i_5 + 3] [i_5 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(unsigned short)6] [i_5 + 2]))) : (var_6))))));
                        }
                    } 
                } 
            } 
            var_13 = ((/* implicit */unsigned long long int) var_6);
        }
        for (unsigned int i_6 = 1; i_6 < 11; i_6 += 1) 
        {
            var_14 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned long long int) var_2)))));
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_8 = 2; i_8 < 9; i_8 += 1) 
                {
                    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        {
                            arr_35 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_0] [i_6 + 1])) ? (var_4) : (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_7]))))) ? (var_6) : (((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_8])) ? (var_6) : (var_5)))))));
                            var_15 = ((/* implicit */unsigned int) var_8);
                            var_16 *= ((/* implicit */unsigned int) min((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_2 [i_9]) : (((/* implicit */long long int) var_6))))) ? (((long long int) var_8)) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_9] [i_0] [i_9])))))));
                            arr_36 [i_9] [i_8] [i_7] [(_Bool)1] [i_6] [i_0] [i_9] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_6 - 1] [i_6] [i_8 + 3])) ? (((((/* implicit */_Bool) arr_33 [i_6 + 1] [4U] [i_8 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_6] [i_9] [i_6 + 1] [i_8 - 1]))) : (arr_33 [i_6 - 1] [i_6 - 1] [i_8 + 2]))) : (min((arr_33 [i_6 - 1] [5U] [i_8 + 2]), (((/* implicit */unsigned long long int) var_3))))));
                            var_17 = ((/* implicit */_Bool) var_7);
                        }
                    } 
                } 
                arr_37 [i_0] [i_0] = ((unsigned int) min((arr_16 [i_0] [i_6 - 1] [i_0]), (var_3)));
            }
            /* LoopNest 3 */
            for (unsigned short i_10 = 1; i_10 < 11; i_10 += 3) 
            {
                for (unsigned int i_11 = 1; i_11 < 10; i_11 += 1) 
                {
                    for (unsigned int i_12 = 2; i_12 < 9; i_12 += 4) 
                    {
                        {
                            var_18 += ((/* implicit */_Bool) var_9);
                            var_19 = ((/* implicit */unsigned int) min((((long long int) var_2)), (((/* implicit */long long int) var_3))));
                            var_20 ^= var_8;
                            arr_46 [2ULL] [2ULL] [i_10] [i_11] [i_0] = ((((/* implicit */_Bool) min((arr_13 [i_10 - 1] [i_6 + 1]), (arr_5 [i_0] [i_0])))) ? (((((/* implicit */_Bool) ((unsigned int) var_4))) ? (arr_13 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)49)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_11] [i_11 - 1] [i_11] [i_11])) ? (((/* implicit */int) arr_45 [i_11] [i_11 + 2] [i_11] [i_11 + 1] [i_11])) : (((/* implicit */int) arr_45 [8U] [i_11 + 2] [(unsigned short)11] [(unsigned short)11] [i_11]))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_13 = 1; i_13 < 10; i_13 += 1) 
        {
            arr_50 [i_0] = ((/* implicit */unsigned short) arr_31 [i_0] [i_0] [i_13] [5LL]);
            /* LoopSeq 1 */
            for (long long int i_14 = 0; i_14 < 12; i_14 += 3) 
            {
                arr_53 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_48 [i_0] [9ULL] [i_0]);
                /* LoopNest 2 */
                for (unsigned int i_15 = 1; i_15 < 10; i_15 += 1) 
                {
                    for (long long int i_16 = 0; i_16 < 12; i_16 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) min((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_8) : (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_0] [i_13] [i_0] [(unsigned short)8] [i_15] [i_16]))) : (arr_38 [i_0] [3U] [3U] [i_15]))))));
                            arr_58 [i_0] = min((var_9), (min((min((var_0), (var_1))), (((/* implicit */unsigned int) arr_7 [i_0] [i_15 + 1])))));
                        }
                    } 
                } 
                arr_59 [i_0] [i_13 + 1] [i_0] = ((/* implicit */unsigned int) arr_56 [i_0] [i_13] [(_Bool)1] [i_13] [i_13] [i_13]);
                /* LoopSeq 3 */
                for (unsigned int i_17 = 3; i_17 < 9; i_17 += 4) 
                {
                    var_22 = var_5;
                    arr_62 [i_0] [i_13 + 1] [i_13] [i_13] = min((var_7), (((/* implicit */unsigned long long int) min((var_2), (arr_5 [i_0] [i_0])))));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) min((var_5), (var_9))))) ? (((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_9)) : (arr_11 [i_0] [i_13] [i_14])))) : (var_4)));
                    var_24 = ((/* implicit */unsigned int) arr_43 [i_0] [i_14] [i_0] [i_17] [i_17] [i_0]);
                }
                /* vectorizable */
                for (unsigned int i_18 = 0; i_18 < 12; i_18 += 4) 
                {
                    arr_65 [i_0] [(_Bool)1] [i_14] [0U] [7U] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_61 [(unsigned short)0] [i_13 + 2] [i_13] [i_0])) ? (((/* implicit */int) arr_45 [i_13 - 1] [i_13 + 1] [i_13 + 2] [i_13 - 1] [i_13])) : (((/* implicit */int) arr_54 [i_0] [i_0]))));
                    arr_66 [i_0] = ((/* implicit */unsigned short) ((unsigned int) var_3));
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((((/* implicit */_Bool) arr_11 [i_0] [i_13 + 1] [i_14])) ? (arr_38 [i_0] [4U] [4U] [i_18]) : (var_3)))));
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((unsigned int) ((((/* implicit */_Bool) var_3)) ? (arr_52 [i_0] [i_0] [(unsigned short)9] [(_Bool)1]) : (((/* implicit */long long int) var_3)))))));
                }
                for (unsigned int i_19 = 3; i_19 < 10; i_19 += 2) 
                {
                    var_27 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16)) ? (-3691218026655906982LL) : (576456354256912384LL)))) ? (min((((/* implicit */unsigned long long int) var_9)), (arr_27 [i_0] [i_19]))) : (((((/* implicit */_Bool) arr_2 [(unsigned short)10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_19 - 3] [i_14] [i_0] [i_14] [(_Bool)1] [i_0]))) : (arr_57 [i_13] [i_13 + 2] [(unsigned short)1] [i_19] [i_19]))))), (((/* implicit */unsigned long long int) arr_61 [i_0] [i_0] [i_0] [(_Bool)1]))));
                    arr_69 [i_0] = arr_61 [i_0] [i_0] [i_14] [i_0];
                    arr_70 [i_0] [i_14] [i_14] [i_13] [i_0] = ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)41)), (-1709852290080329777LL)))) ? (2648110812U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 1032409392U)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_45 [11ULL] [i_13] [i_13 + 1] [i_13] [i_19 - 3])) : (((/* implicit */int) arr_45 [0ULL] [i_14] [i_13 - 1] [i_14] [i_19 + 1]))))));
                    var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_31 [i_0] [i_0] [i_0] [i_19]))) ? (min((-3017728722955604302LL), (((/* implicit */long long int) 2381083247U)))) : (((/* implicit */long long int) var_6))))) ? (((/* implicit */unsigned long long int) arr_63 [i_13 - 1] [i_19 - 2] [i_0])) : (((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (3587568788U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_19 - 3] [i_19] [i_14] [i_13] [i_0])))))));
                }
            }
            arr_71 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((_Bool) arr_54 [i_13 + 2] [i_13 + 1]))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_0)) : (var_8)))));
            arr_72 [i_0] [i_13] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) arr_40 [i_13 - 1] [i_13 - 1] [i_0] [(_Bool)1])), (var_7))), (((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_13 + 2] [i_13 + 1] [i_0] [i_13])))))));
            var_29 = ((/* implicit */unsigned int) max((var_29), (min((((/* implicit */unsigned int) arr_54 [i_13] [i_0])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_29 [i_0] [(_Bool)1])) : (((/* implicit */int) arr_31 [i_0] [2ULL] [i_0] [i_13]))))) ? (((((/* implicit */_Bool) arr_26 [i_13] [6U])) ? (var_4) : (var_3))) : (((((/* implicit */_Bool) arr_10 [i_13] [i_13] [i_13])) ? (var_6) : (var_6)))))))));
        }
        arr_73 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((arr_54 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) var_2)) : (arr_51 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0])) ? (var_4) : (var_1))))))) ? (((unsigned int) var_2)) : (arr_15 [i_0] [i_0] [i_0] [i_0])));
        arr_74 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_0] [0U] [i_0] [i_0]))))) : (min((4294967289U), (4294967289U)))));
    }
}
