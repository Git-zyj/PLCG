/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237297
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
    var_17 = ((/* implicit */unsigned int) max((var_0), (var_0)));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_5)) : (var_6)))), (var_3)))) ? (var_10) : (var_9)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_10);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_19 |= ((/* implicit */_Bool) var_8);
                                arr_12 [i_0] [i_1] [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_10);
                                var_20 = ((/* implicit */long long int) var_11);
                                var_21 = ((/* implicit */signed char) ((unsigned int) (unsigned char)78));
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) 4204596740340242090ULL)) ? (4204596740340242090ULL) : (10542649772931927758ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */long long int) arr_10 [i_0 + 2]);
    }
    for (int i_5 = 2; i_5 < 15; i_5 += 4) 
    {
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_5)))) ? (((/* implicit */int) arr_5 [i_5])) : (((((/* implicit */_Bool) var_4)) ? (var_4) : (var_15)))))) ? (max((arr_11 [i_5] [i_5] [i_5 + 2] [i_5] [i_5]), (((/* implicit */unsigned long long int) arr_16 [i_5 + 3])))) : (((/* implicit */unsigned long long int) arr_16 [15LL])))))));
        /* LoopNest 2 */
        for (unsigned int i_6 = 3; i_6 < 16; i_6 += 3) 
        {
            for (int i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                {
                    arr_22 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) arr_1 [i_5] [i_6]);
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        arr_27 [i_6] [i_6] [i_6] [i_8] = min((((arr_3 [i_5 + 3]) ? (((/* implicit */int) arr_3 [i_5 + 2])) : (((/* implicit */int) arr_3 [i_5 - 2])))), (((/* implicit */int) ((unsigned char) arr_14 [i_5 - 1]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 3; i_9 < 17; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_6])) ? (arr_6 [i_5] [i_5] [i_7] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_9]))) : (arr_24 [i_6] [i_9] [i_6 + 1] [i_6])))), (((((/* implicit */_Bool) arr_28 [i_6])) ? (arr_19 [i_5 + 3] [i_6] [i_6] [i_8]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) var_15)) : (arr_24 [i_5] [i_5] [i_9] [i_6]))))))));
                            arr_31 [i_9] [i_5] [i_6] [i_8] [i_9 - 3] [i_5] [i_8] = ((/* implicit */_Bool) var_8);
                        }
                        var_25 = ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_4 [i_6])) ? (arr_4 [i_6]) : (arr_4 [i_6]))) : (((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */int) var_2)) : (arr_4 [i_6]))));
                        arr_32 [i_6] [i_6] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6]))) : (var_6)))) ? (((((/* implicit */_Bool) arr_5 [i_6])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6]))));
                        var_26 = max((max((arr_6 [i_5] [i_5 + 2] [i_6 + 2] [i_6 + 2]), (arr_6 [i_5] [i_5 + 3] [i_6 + 2] [i_6 + 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_5] [i_6] [i_6] [i_5 + 2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_25 [i_5] [i_5] [i_6 - 2] [i_5] [i_7] [i_8])) : (((/* implicit */int) arr_3 [i_5]))))) : (arr_9 [i_5 + 2] [i_5] [i_5 + 3] [i_6 + 1])))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 1; i_11 < 16; i_11 += 3) 
                        {
                            {
                                arr_39 [i_6] = min((min((arr_0 [i_6]), (arr_0 [i_6]))), (((/* implicit */unsigned int) ((int) arr_16 [i_5 - 2]))));
                                arr_40 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */long long int) arr_28 [i_6])) : (arr_6 [i_5] [i_6 - 2] [i_6 - 2] [i_11 - 1])))) ? (((/* implicit */long long int) arr_4 [i_6])) : (((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */long long int) arr_28 [i_6])) : (arr_6 [i_5 - 2] [i_6 + 1] [i_6 + 1] [i_6 + 1])))));
                                var_27 &= ((int) ((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)66))) : (min((124723631U), (((/* implicit */unsigned int) -228613072))))));
                            }
                        } 
                    } 
                    arr_41 [i_5] [i_6] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_25 [8U] [i_5] [i_5 - 2] [i_5 + 1] [i_6 - 2] [i_6 - 1]) ? (((/* implicit */int) arr_25 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 + 1] [i_6 - 2] [i_6 - 1])) : (((/* implicit */int) arr_36 [i_5]))))) ? (((/* implicit */unsigned long long int) max((((unsigned int) var_1)), (((unsigned int) var_16))))) : (arr_1 [(unsigned short)0] [i_6])));
                    var_28 = ((/* implicit */unsigned int) arr_15 [i_5]);
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 18; i_12 += 1) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 1) 
            {
                for (long long int i_14 = 0; i_14 < 18; i_14 += 3) 
                {
                    {
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_11)), (arr_34 [i_5] [i_5] [i_5 - 1] [i_5])))) ? (max((((((/* implicit */_Bool) arr_48 [i_5])) ? (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) ((signed char) arr_15 [i_12]))))) : (((((/* implicit */_Bool) var_1)) ? (var_14) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (var_15))))))));
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) min((min((arr_23 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5 + 3]), (arr_23 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5 + 3]))), (min((arr_23 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5 - 1]), (arr_23 [0] [i_5] [0] [i_5] [i_5] [i_5 - 1]))))))));
                        arr_52 [i_5] [i_5] [i_5] [(signed char)6] &= ((/* implicit */short) min((((/* implicit */unsigned short) ((unsigned char) var_10))), (((unsigned short) var_12))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 2) 
                        {
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_25 [i_5] [i_15] [i_15] [i_5 + 3] [i_15] [i_5])), (arr_9 [i_5 + 1] [i_12] [12] [i_5 + 1])))) ? (((unsigned long long int) arr_25 [i_5] [i_15] [i_13] [i_5 - 1] [i_13] [i_13])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_5 + 1] [i_5 + 1] [i_15] [i_5 - 1])) ? (arr_9 [i_12] [i_12] [i_13] [i_5 + 2]) : (arr_9 [i_5 + 3] [i_15] [i_13] [i_5 + 1]))))));
                            arr_55 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = arr_54 [i_12] [i_5] [i_12] [i_12] [i_12] [i_12] [i_5];
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            arr_60 [i_16] [i_12] [i_13] [i_13] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((_Bool) arr_29 [i_16])) ? (arr_24 [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */long long int) arr_8 [i_5 + 2] [12U] [i_5 + 3] [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_16), (max((((/* implicit */signed char) var_11)), (var_8))))))) : (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_24 [i_5] [i_13] [i_14] [i_5])) : (arr_11 [i_5 + 2] [(_Bool)1] [i_5] [i_5 + 2] [(_Bool)1]))), (((/* implicit */unsigned long long int) ((_Bool) arr_0 [i_5])))))));
                            var_32 = ((/* implicit */_Bool) arr_51 [i_5] [17U] [17U]);
                            arr_61 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_57 [i_5] [i_12] [4U] [i_14] [i_16] [i_5 - 1] [i_12])) ? (arr_57 [i_16] [i_14] [i_13] [i_13] [i_12] [(unsigned short)10] [i_5 + 3]) : (arr_57 [i_5] [i_12] [i_12] [i_12] [i_16] [i_5 + 2] [i_14]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_5])) ? (arr_16 [i_12]) : (((/* implicit */long long int) var_1))))) ? (((((/* implicit */_Bool) arr_50 [i_13] [i_13] [i_13] [i_13])) ? (arr_37 [i_14] [1U] [1U] [1U] [15U]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_36 [i_13])) : (var_1)))))))));
                            arr_62 [i_16] [8ULL] [(short)5] [i_14] [i_14] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_56 [i_5] [i_5 - 2] [i_5] [(unsigned char)10] [i_5 - 1] [i_5 - 2] [i_5 - 2])) ? (((/* implicit */int) arr_34 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_34 [i_5] [i_5] [i_5 + 3] [i_5])))), (min((-1898894006), (((/* implicit */int) (_Bool)1))))));
                        }
                        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) arr_49 [i_5] [i_5] [i_5] [i_5 + 1]))))) ? (max((14242147333369309540ULL), (((/* implicit */unsigned long long int) 2082041712)))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_5 [i_5])), (arr_18 [i_5])))))) : (((/* implicit */unsigned long long int) arr_56 [i_5] [i_13] [i_5 + 3] [i_5] [6U] [i_5 + 1] [i_5]))));
                    }
                } 
            } 
        } 
        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) max((min((var_3), (arr_30 [i_5] [i_5] [i_5 + 3] [i_5 + 3] [i_5 + 3] [i_5] [i_5 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_5])) ? (max((((/* implicit */unsigned int) arr_51 [i_5] [i_5 - 1] [i_5 + 1])), (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))))));
    }
    for (unsigned char i_17 = 1; i_17 < 9; i_17 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_18 = 1; i_18 < 9; i_18 += 4) 
        {
            for (unsigned long long int i_19 = 1; i_19 < 7; i_19 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 1) 
                    {
                        for (long long int i_21 = 1; i_21 < 8; i_21 += 3) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */long long int) arr_9 [i_17] [i_21 + 1] [(unsigned char)4] [i_19 - 1])), (arr_72 [i_18] [i_21 + 1] [(unsigned char)6] [i_19 - 1] [i_19 - 1] [i_18]))));
                                arr_77 [0LL] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1092280820)) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) ((signed char) 4204596740340242090ULL)))));
                                var_36 |= arr_26 [(unsigned char)0];
                                var_37 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 228613071)) ? (14242147333369309526ULL) : (((/* implicit */unsigned long long int) -9113127760365264778LL))))) ? (4170243661U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)13)))));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((arr_76 [i_18] [i_18] [i_18] [i_18 + 2] [8U]), (arr_76 [i_18] [i_18] [i_18] [i_18 - 1] [(_Bool)0])))), (var_14))))));
                }
            } 
        } 
        arr_78 [i_17 + 1] = ((/* implicit */unsigned int) arr_21 [(_Bool)1]);
    }
}
