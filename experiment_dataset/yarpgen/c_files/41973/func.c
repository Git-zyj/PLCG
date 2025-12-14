/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41973
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [6U] [i_1 - 1] &= arr_1 [5ULL];
                /* LoopSeq 4 */
                for (unsigned short i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    arr_11 [i_2 + 3] [(unsigned short)6] &= ((/* implicit */unsigned short) var_7);
                    /* LoopSeq 1 */
                    for (signed char i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        var_10 = ((/* implicit */signed char) (~(((arr_4 [i_3] [i_0] [i_0]) & (arr_4 [(unsigned short)0] [i_0] [i_2 + 1])))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 2; i_4 < 12; i_4 += 3) 
                        {
                            var_11 = ((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [(unsigned short)2] [i_3] [i_3]);
                            var_12 = ((/* implicit */unsigned long long int) var_3);
                            arr_17 [6U] [(_Bool)1] [i_2 + 2] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0])) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) arr_14 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_14 [i_0]))))) : ((+(11151936051603930274ULL)))));
                        }
                    }
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) max(((signed char)-127), ((signed char)110))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 10; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 12; i_6 += 1) 
                        {
                            {
                                arr_23 [i_0] [3ULL] [i_2] [i_2] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_19 [i_0] [(_Bool)1])), (((((/* implicit */_Bool) var_5)) ? (arr_15 [i_6] [i_5 - 1] [i_2] [i_1] [6U]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1 + 2] [i_1 - 1])))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) : (min((arr_20 [i_6] [i_6] [i_6 + 1] [i_6 - 1] [i_6] [i_0]), (((/* implicit */unsigned int) arr_21 [i_6 + 1] [i_6 + 1] [i_0] [i_6 - 2] [i_6]))))));
                                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_0]))))) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_0])))) : (((/* implicit */int) min((arr_5 [i_0]), (arr_5 [i_0]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_7 = 3; i_7 < 11; i_7 += 1) 
                    {
                        var_15 = ((/* implicit */long long int) (~(((/* implicit */int) var_0))));
                        arr_28 [i_0] [i_1] [i_1] [6LL] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))));
                        arr_29 [i_0] [i_1] [i_2] [(short)8] [(short)8] [i_2] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_2 [i_0])), (max((var_9), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_26 [i_1 + 1] [2ULL] [(_Bool)1] [i_7 - 3])))))));
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((unsigned short) (~(((unsigned int) (_Bool)0)))));
                            var_17 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_7] [i_0] [i_0]);
                        }
                        for (unsigned char i_9 = 2; i_9 < 9; i_9 += 1) 
                        {
                            arr_35 [i_0] [i_0] [i_2] [i_7 - 1] [i_9] = ((/* implicit */unsigned short) (_Bool)0);
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_22 [i_1 - 1] [(_Bool)1] [i_9 - 2])))))))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_18 [i_0] [(unsigned short)6] [(unsigned short)6] [i_10]))));
                        arr_38 [i_10] [i_10 + 1] [i_10] [i_10 + 1] [i_10] [i_0] = ((/* implicit */unsigned int) ((_Bool) var_1));
                        var_20 ^= ((/* implicit */unsigned short) 0ULL);
                        var_21 &= ((_Bool) ((var_8) ? (((/* implicit */int) arr_30 [i_0] [i_1])) : (((/* implicit */int) arr_14 [(unsigned char)8]))));
                    }
                }
                /* vectorizable */
                for (unsigned short i_11 = 3; i_11 < 11; i_11 += 4) 
                {
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_41 [i_11 - 2] [1U] [(short)7])) ? (((/* implicit */int) arr_12 [i_11] [i_1] [i_1] [(unsigned short)10])) : (((/* implicit */int) var_7)))) > (((/* implicit */int) ((_Bool) arr_21 [i_0] [i_0] [(_Bool)1] [i_0] [i_0]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 1; i_12 < 12; i_12 += 1) 
                    {
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_49 [i_0] [i_1] [i_11 + 1] [i_1] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                                arr_50 [i_0] [i_0] [i_0] [i_12 - 1] [i_13 - 1] [i_0] [i_12] = ((/* implicit */_Bool) arr_45 [i_12] [i_12] [i_1]);
                            }
                        } 
                    } 
                    arr_51 [i_11] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_40 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)152))));
                }
                for (unsigned short i_14 = 3; i_14 < 10; i_14 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_15 = 1; i_15 < 10; i_15 += 2) 
                    {
                        for (unsigned short i_16 = 1; i_16 < 12; i_16 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) var_7);
                                var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)141))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) /* same iter space */
                    {
                        var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [6U] [(_Bool)1] [6U])) ? (((((/* implicit */_Bool) arr_26 [i_1 + 2] [i_14 - 3] [10ULL] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_26 [i_1 + 1] [i_14 - 3] [i_17] [i_17]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) min(((short)-17366), (((/* implicit */short) (_Bool)1))))))))));
                        var_26 = ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_32 [i_1 - 1] [i_0])) == (((/* implicit */int) arr_32 [i_1 - 1] [i_0]))))));
                    }
                    for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) /* same iter space */
                    {
                        arr_66 [i_0] [(signed char)1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((arr_43 [i_0] [i_0] [i_18]) ? (((arr_4 [i_0] [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_37 [i_0] [i_1] [i_14] [(unsigned short)0] [i_18 + 1]))))))) : (arr_45 [i_0] [i_1] [i_14 - 2])));
                        arr_67 [i_0] [i_1] [i_1 + 1] [i_0] [i_18 + 1] [i_18 + 1] = ((/* implicit */signed char) (!(min((arr_63 [i_1 + 2]), (arr_63 [i_1 + 3])))));
                    }
                    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) max((8836434026878164023ULL), (((/* implicit */unsigned long long int) (unsigned short)36590))));
                        var_28 = ((/* implicit */unsigned char) var_0);
                        var_29 = arr_42 [i_1] [i_14] [i_0];
                        var_30 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_42 [(unsigned short)10] [i_1] [(unsigned short)10])), (arr_14 [(signed char)2])));
                        var_31 ^= ((/* implicit */unsigned char) arr_39 [(signed char)9] [i_0] [i_0]);
                    }
                }
                for (unsigned short i_20 = 4; i_20 < 11; i_20 += 2) 
                {
                    var_32 -= ((/* implicit */unsigned char) (_Bool)1);
                    var_33 *= ((/* implicit */unsigned long long int) var_2);
                    /* LoopNest 2 */
                    for (unsigned long long int i_21 = 4; i_21 < 10; i_21 += 4) 
                    {
                        for (unsigned short i_22 = 1; i_22 < 9; i_22 += 2) 
                        {
                            {
                                var_34 += ((/* implicit */signed char) 2256217860094968229ULL);
                                var_35 = ((/* implicit */unsigned short) arr_32 [i_1 + 3] [i_0]);
                                var_36 *= (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_23 = 4; i_23 < 10; i_23 += 3) 
                    {
                        for (unsigned short i_24 = 2; i_24 < 10; i_24 += 4) 
                        {
                            {
                                var_37 = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_44 [i_0] [(_Bool)0] [i_20] [(signed char)4] [i_0]))))));
                                var_38 = ((/* implicit */_Bool) min((var_38), (((((((/* implicit */int) arr_59 [i_24] [i_24 - 1] [i_23] [i_23 + 1] [i_23] [i_23] [(unsigned char)9])) % (((/* implicit */int) arr_59 [(_Bool)1] [i_24 - 1] [2ULL] [i_23 + 1] [i_23] [(_Bool)1] [(_Bool)1])))) == (((/* implicit */int) arr_59 [i_24] [i_24 - 1] [i_23 - 1] [i_23 + 1] [i_23 + 1] [i_23 - 1] [i_20]))))));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) 6080398958792378115ULL))))))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_25 = 1; i_25 < 12; i_25 += 3) 
                {
                    var_40 -= ((/* implicit */unsigned long long int) arr_86 [(signed char)6] [8U] [i_1] [i_25 - 1]);
                    /* LoopNest 2 */
                    for (unsigned short i_26 = 2; i_26 < 12; i_26 += 1) 
                    {
                        for (_Bool i_27 = 0; i_27 < 0; i_27 += 1) 
                        {
                            {
                                var_41 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((arr_20 [i_0] [(signed char)6] [i_1] [i_25] [i_26] [i_0]) | ((~(732406845U)))))), (min((min((var_1), (((/* implicit */unsigned long long int) var_0)))), (4471158888832914227ULL)))));
                                var_42 += ((/* implicit */long long int) (signed char)-67);
                                var_43 = ((/* implicit */_Bool) (-(var_5)));
                            }
                        } 
                    } 
                    var_44 *= ((/* implicit */unsigned int) min((var_1), (((/* implicit */unsigned long long int) arr_79 [(unsigned short)6] [(unsigned short)6] [(unsigned short)6] [(unsigned short)6] [i_0]))));
                    var_45 = ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0]))) ^ (((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                }
                /* LoopNest 3 */
                for (unsigned int i_28 = 2; i_28 < 11; i_28 += 4) 
                {
                    for (unsigned long long int i_29 = 1; i_29 < 9; i_29 += 2) 
                    {
                        for (_Bool i_30 = 1; i_30 < 1; i_30 += 1) 
                        {
                            {
                                arr_103 [i_0] [i_0] [i_28] [i_29] [i_28] [i_0] [i_28] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_30] [i_28] [i_28])) ? (((/* implicit */int) arr_101 [i_28] [i_28] [i_28 - 2] [i_28] [i_0])) : ((+(((/* implicit */int) ((_Bool) arr_31 [i_0] [i_0] [i_0] [i_0] [i_28] [i_0])))))));
                                var_46 &= ((/* implicit */unsigned char) var_0);
                                var_47 = ((/* implicit */long long int) max((((/* implicit */signed char) arr_24 [i_0] [i_0] [i_0])), (arr_100 [i_30] [i_29 + 4] [(signed char)12] [i_1] [i_1] [i_0] [i_0])));
                                var_48 = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned int) arr_19 [i_0] [i_1])));
                            }
                        } 
                    } 
                } 
                var_49 -= ((/* implicit */signed char) (!(((((/* implicit */int) arr_42 [i_1] [i_1 + 3] [(unsigned short)10])) == (((/* implicit */int) arr_42 [i_1] [i_1 + 2] [(signed char)12]))))));
            }
        } 
    } 
    var_50 = ((/* implicit */_Bool) min((var_50), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (var_9))))));
}
