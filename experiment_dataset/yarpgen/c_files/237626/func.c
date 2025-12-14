/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237626
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
    var_18 += ((/* implicit */int) ((unsigned int) max((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (var_13)))))));
    var_19 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) var_6)) | (((int) var_12))))) == (7832018394207946126LL)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 7832018394207946124LL)), (5134046905192693056ULL))))));
                                var_21 += var_3;
                                arr_13 [i_0] [i_0] [i_1] [i_3] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_5) | (arr_11 [i_3] [i_4]))))));
                            }
                        } 
                    } 
                    var_22 = (+(((long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_9 [i_0]))))));
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
                        {
                            arr_19 [i_1] [4ULL] [12U] [i_5] [13U] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((arr_4 [i_2] [i_6]), (((/* implicit */unsigned int) 1033922123)))) / (var_0)))) ? (arr_3 [i_0] [i_2]) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), ((-(var_5))))))));
                            arr_20 [i_0] [6ULL] [7U] [i_0] [i_1] = ((/* implicit */unsigned short) (~(max((-1), (((/* implicit */int) ((signed char) var_13)))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
                        {
                            var_23 += ((/* implicit */int) ((((arr_15 [i_1] [20LL] [i_2] [i_2]) <= (((/* implicit */unsigned int) var_13)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (arr_12 [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_12))))));
                            var_24 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_5])) ? (((((/* implicit */_Bool) 3103903087497607905LL)) ? (arr_21 [i_7] [i_5] [i_1] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)15))))) : (arr_14 [i_1] [i_5])));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (~(((((/* implicit */_Bool) 7832018394207946129LL)) ? (5134046905192693056ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_2] [i_2] [i_0] [i_5] [i_7] [i_5] [10]))))))))));
                            var_26 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_7] [i_5] [i_0])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) /* same iter space */
                        {
                            var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -3145893572988055552LL)), (((unsigned long long int) (short)14836))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((arr_9 [i_0]) | (-8)))))) : (((long long int) ((((/* implicit */long long int) arr_0 [i_0])) & (arr_3 [i_2] [i_0]))))));
                            var_28 = max((min((8), (((/* implicit */int) ((short) 4079389017887367147LL))))), (max(((-(((/* implicit */int) (short)8191)))), (((-9) + (((/* implicit */int) arr_22 [i_1] [i_1] [i_2] [i_2] [i_8] [14ULL] [14ULL])))))));
                            var_29 -= ((/* implicit */long long int) ((short) max((arr_3 [i_1] [i_2]), (((/* implicit */long long int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                        var_30 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned int) var_13))))) && (((/* implicit */_Bool) var_5))));
                    }
                    for (unsigned char i_9 = 2; i_9 < 20; i_9 += 4) 
                    {
                        arr_27 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_12);
                        var_31 -= ((/* implicit */unsigned int) ((-1225819351520743558LL) == (((/* implicit */long long int) max((((((/* implicit */_Bool) var_17)) ? (1098161375U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_9 + 1] [i_9] [i_2] [i_1] [i_0]))))), ((+(0U))))))));
                        arr_28 [i_1] [i_1] = ((/* implicit */short) arr_15 [i_9] [i_9] [i_9 - 2] [19ULL]);
                        arr_29 [i_0] [i_0] [2U] [i_2] &= ((/* implicit */unsigned char) ((unsigned short) min((((long long int) var_5)), (((/* implicit */long long int) max((((/* implicit */short) var_7)), (arr_6 [i_9] [i_2] [(unsigned char)16])))))));
                    }
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_8 [5ULL] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) max((((/* implicit */long long int) arr_7 [(short)14] [i_0] [i_0])), (arr_14 [i_0] [3ULL])))))));
    }
    for (short i_10 = 0; i_10 < 21; i_10 += 1) 
    {
        arr_33 [i_10] = ((/* implicit */short) max((((((/* implicit */long long int) ((/* implicit */int) (short)-14837))) - (max((((/* implicit */long long int) var_14)), (-1225819351520743561LL))))), (((/* implicit */long long int) var_0))));
        /* LoopSeq 1 */
        for (unsigned int i_11 = 2; i_11 < 20; i_11 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_12 = 0; i_12 < 21; i_12 += 3) 
            {
                for (int i_13 = 0; i_13 < 21; i_13 += 1) 
                {
                    for (short i_14 = 0; i_14 < 21; i_14 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) (-(max((((/* implicit */unsigned int) ((var_14) ^ (((/* implicit */int) (short)-4627))))), (var_0))))))));
                            var_34 += ((/* implicit */int) min((((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) (short)-22089)))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (var_9)))) ? (((/* implicit */long long int) max((3851842390U), (443124906U)))) : (((long long int) var_8))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_15 = 1; i_15 < 19; i_15 += 3) 
            {
                for (short i_16 = 1; i_16 < 19; i_16 += 4) 
                {
                    {
                        var_35 = ((/* implicit */int) 1414190584U);
                        arr_49 [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) arr_2 [i_10]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 1) 
            {
                for (unsigned int i_18 = 0; i_18 < 21; i_18 += 3) 
                {
                    {
                        var_36 = ((/* implicit */long long int) min((var_36), (((long long int) (short)7683))));
                        /* LoopSeq 2 */
                        for (unsigned int i_19 = 0; i_19 < 21; i_19 += 3) 
                        {
                            arr_59 [i_10] [i_18] [i_17] [i_11] [i_10] = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) arr_45 [i_11 - 1] [i_10] [i_11 - 1] [i_11 - 1])), (arr_36 [18LL] [i_11 - 2] [i_11]))) ^ (((/* implicit */long long int) ((/* implicit */int) ((short) arr_26 [12] [i_11 + 1] [i_11 + 1] [12] [i_11 + 1]))))));
                            var_37 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)32754)), (18446744073709551615ULL)))) ? (min((((/* implicit */unsigned long long int) 660796049)), (((((/* implicit */unsigned long long int) arr_18 [i_10] [i_11 - 2] [i_17] [i_18] [i_19])) / (arr_44 [i_11] [i_11] [i_11]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((unsigned int) arr_52 [i_10] [i_11] [i_18] [i_19])) : (((((/* implicit */_Bool) arr_54 [i_10] [i_11] [i_17] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_8 [12ULL] [i_11] [i_17] [i_18] [i_19]))))))));
                            var_38 ^= ((/* implicit */unsigned int) (+(max((((/* implicit */long long int) ((arr_24 [0LL] [4LL] [i_17] [0LL] [i_18] [i_19]) >= (262143U)))), (max((((/* implicit */long long int) var_13)), (arr_31 [i_10] [i_11])))))));
                            var_39 = ((/* implicit */long long int) (short)4616);
                        }
                        for (unsigned char i_20 = 1; i_20 < 19; i_20 += 4) 
                        {
                            var_40 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) <= (arr_15 [i_20 + 1] [i_11] [i_11] [i_10])))), (min((arr_17 [i_10]), (((/* implicit */unsigned long long int) var_8)))))), (((/* implicit */unsigned long long int) var_5))));
                            var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) max((max((-7002518604580226275LL), (((/* implicit */long long int) (short)-7686)))), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) -2854161811778892252LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)125))) : (1494998927U))))))))));
                            arr_62 [i_10] [i_10] [(unsigned short)5] [i_17] [i_17] [i_18] [i_20] = ((/* implicit */short) ((((/* implicit */long long int) max(((~(1866651887U))), (((/* implicit */unsigned int) arr_2 [i_10]))))) ^ ((((~(-10LL))) | (((/* implicit */long long int) ((/* implicit */int) max((arr_6 [i_10] [i_10] [i_10]), ((short)-25045)))))))));
                            arr_63 [i_10] [i_11] [i_10] [i_17] [1U] [i_20] = max((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) == (8967517537573675970LL))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_14)) ^ (var_0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_10] [i_18] [i_18])) ? (723070602U) : (4294967293U)))) : (var_9))));
                        }
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_21 = 1; i_21 < 20; i_21 += 3) 
            {
                arr_66 [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_10] [i_10] [i_21] [i_21] [i_21])) ? (max((arr_31 [i_11 + 1] [i_11 + 1]), (7LL))) : (((/* implicit */long long int) arr_0 [i_10]))));
                /* LoopSeq 3 */
                for (unsigned int i_22 = 0; i_22 < 21; i_22 += 3) 
                {
                    var_42 &= ((/* implicit */int) max((((/* implicit */unsigned int) ((max((-705298717188210777LL), (((/* implicit */long long int) (unsigned char)136)))) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (var_3) : (arr_45 [i_10] [i_11] [i_11] [i_22]))))))), (((((/* implicit */_Bool) arr_53 [i_10] [i_10] [i_11] [4ULL] [i_22])) ? (3851842389U) : (((/* implicit */unsigned int) var_14))))));
                    var_43 -= var_7;
                }
                for (unsigned int i_23 = 0; i_23 < 21; i_23 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_24 = 0; i_24 < 21; i_24 += 4) 
                    {
                        arr_75 [i_10] [17] [12] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) ((long long int) (+(var_4))));
                        var_44 = ((/* implicit */short) ((((/* implicit */_Bool) max((1622447177U), ((+(0U)))))) ? (max((max((arr_36 [i_11] [i_11] [i_10]), (((/* implicit */long long int) 7U)))), (((/* implicit */long long int) arr_47 [i_10] [i_10])))) : (((/* implicit */long long int) ((/* implicit */int) (short)32765)))));
                        arr_76 [i_10] [i_10] [i_21 - 1] [i_23] [i_10] [i_24] [i_24] = ((/* implicit */signed char) 18446744073709551615ULL);
                    }
                    arr_77 [i_10] [i_10] [i_10] [i_23] = max((((((/* implicit */_Bool) arr_7 [i_10] [i_21 - 1] [i_21 + 1])) ? (arr_31 [i_11 - 1] [i_21 + 1]) : (((/* implicit */long long int) arr_7 [i_10] [i_21 - 1] [i_21 + 1])))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_12)), (arr_7 [i_10] [i_21 - 1] [i_21 - 1])))));
                    arr_78 [i_10] [i_21] [i_23] = ((/* implicit */long long int) var_7);
                }
                /* vectorizable */
                for (long long int i_25 = 3; i_25 < 20; i_25 += 1) 
                {
                    var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) (short)8191))));
                    var_46 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-3487))))) - (((unsigned long long int) arr_71 [i_10] [i_11]))));
                    var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) ((((/* implicit */_Bool) arr_39 [i_11 - 1] [i_25 - 3] [18U] [i_25])) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) arr_69 [i_25 - 1] [i_11] [i_25 + 1] [i_25 + 1])))))));
                    var_48 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 3851842389U)) ? (arr_67 [i_11]) : (2556496960U)))) < (arr_36 [i_25] [i_25 - 3] [15ULL])));
                }
            }
            for (long long int i_26 = 0; i_26 < 21; i_26 += 4) 
            {
                arr_84 [i_10] [i_26] [i_11] [i_10] = ((/* implicit */int) (~(((long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_79 [i_10] [i_10] [10U] [i_11 + 1] [i_26] [i_26]))))));
                var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((long long int) arr_57 [i_11 + 1])))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_5 [2U] [15U] [10U] [i_26]))) : (((((((/* implicit */unsigned long long int) var_14)) * (arr_41 [(signed char)10] [(signed char)10] [i_11] [i_11 + 1] [(signed char)0] [i_26] [i_26]))) - (((/* implicit */unsigned long long int) (+(var_17)))))))))));
                /* LoopSeq 1 */
                for (unsigned char i_27 = 0; i_27 < 21; i_27 += 2) 
                {
                    var_50 += ((/* implicit */short) arr_83 [i_26] [i_26]);
                    var_51 = ((/* implicit */int) min((var_51), (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_11 - 1] [i_11] [i_11 + 1])) ? (max((((/* implicit */long long int) arr_58 [i_10])), (var_9))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_45 [i_10] [i_11] [i_10] [i_27])) ? (var_10) : (((/* implicit */int) (unsigned char)131))))))))))));
                    /* LoopSeq 3 */
                    for (int i_28 = 1; i_28 < 20; i_28 += 3) 
                    {
                        var_52 = ((/* implicit */unsigned short) ((long long int) ((short) 12999773576467572833ULL)));
                        arr_89 [i_10] [i_11] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)97))))), (2854161811778892251LL))), (((/* implicit */long long int) var_6))));
                        var_53 = ((/* implicit */unsigned int) max((var_53), (((unsigned int) ((signed char) ((unsigned long long int) arr_30 [i_10]))))));
                        var_54 += ((/* implicit */unsigned long long int) ((((0U) % (var_3))) / (((((/* implicit */_Bool) arr_10 [8ULL] [8ULL] [(unsigned char)0] [8ULL] [i_28])) ? (1812429213U) : (((((/* implicit */_Bool) 4294967289U)) ? (528482304U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))))));
                    }
                    for (long long int i_29 = 0; i_29 < 21; i_29 += 3) 
                    {
                        arr_92 [i_10] [i_11] [i_26] [i_26] [i_10] [i_11] = arr_26 [2LL] [i_27] [i_11 - 1] [i_11 - 1] [i_10];
                        arr_93 [i_10] [i_11] [i_26] [8U] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_15)))))), (((((/* implicit */_Bool) arr_39 [i_10] [i_10] [i_10] [i_10])) ? (7172673036557211401ULL) : (((/* implicit */unsigned long long int) var_5))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_5) : (var_3)))) ? (((/* implicit */unsigned long long int) (~(4358540511559465979LL)))) : (586222138225313894ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))));
                        arr_94 [i_10] [i_10] [i_10] [i_10] [4LL] = ((/* implicit */int) ((unsigned long long int) arr_21 [i_10] [i_11] [i_29] [i_10]));
                        var_55 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)10)) ? (((var_0) << (((((/* implicit */int) var_8)) + (101))))) : (min((arr_67 [i_10]), (min((arr_0 [i_10]), (4294967273U)))))));
                    }
                    /* vectorizable */
                    for (short i_30 = 1; i_30 < 18; i_30 += 4) 
                    {
                        arr_97 [i_10] [6LL] [i_10] [11ULL] [i_10] [5ULL] [i_11] = 4294967291U;
                        arr_98 [6] [i_27] [i_10] [1ULL] [i_30 + 1] [8U] [(unsigned short)10] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)3)) ? (-2692134972853904365LL) : (arr_65 [i_10]))) < ((-(0LL)))));
                        arr_99 [i_10] [13LL] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_15)) ? (-1039002792) : (((/* implicit */int) (unsigned char)255)))));
                    }
                }
            }
        }
    }
}
