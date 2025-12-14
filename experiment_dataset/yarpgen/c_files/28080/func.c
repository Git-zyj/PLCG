/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28080
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_0] [i_2 + 1] [i_0] [i_3] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [22] [i_0])) ? (728735411U) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))) * (arr_8 [21LL] [i_1] [21LL] [21LL])));
                        var_20 |= ((/* implicit */unsigned int) ((int) (-(arr_7 [i_0] [i_0] [i_0]))));
                    }
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [(unsigned char)11] [i_1 + 3] [i_1 + 3])) ? (((/* implicit */long long int) var_16)) : (arr_2 [i_2] [i_2] [i_1 + 2])));
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) (!(((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) == (9223372036854775806LL)))));
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_17))))))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 23; i_4 += 3) 
        {
            for (signed char i_5 = 2; i_5 < 23; i_5 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_7 = 3; i_7 < 21; i_7 += 3) 
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(17310566152677538855ULL)))) ? (var_7) : (((/* implicit */unsigned long long int) arr_9 [i_6] [i_6] [(signed char)13] [i_6] [i_6 - 1]))));
                            var_25 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_5 - 1]))));
                            arr_20 [i_6] [i_6 - 1] [i_6] [i_4] [i_6] = ((/* implicit */long long int) ((arr_6 [i_4] [i_6]) > (((/* implicit */unsigned int) 2147483647))));
                            var_26 *= (!(((/* implicit */_Bool) arr_8 [i_5 + 1] [i_5 - 2] [i_5 - 1] [i_5 - 1])));
                        }
                        for (long long int i_8 = 2; i_8 < 23; i_8 += 4) 
                        {
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_5 [i_0] [i_4 - 1] [i_5 + 2]))));
                            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 17310566152677538855ULL)))) - (arr_4 [i_0] [i_0]))))));
                        }
                        for (unsigned char i_9 = 2; i_9 < 23; i_9 += 2) 
                        {
                            arr_26 [i_0] [i_6] [i_5 - 1] [i_6 - 1] [i_9 - 1] = ((/* implicit */unsigned char) arr_17 [i_9 - 2] [i_4] [i_6] [i_4 + 2] [i_6] [i_4] [i_4]);
                            var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_12)) <= (arr_4 [i_6] [i_6 - 1])));
                        }
                        for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_15 [i_6]))))));
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) var_5))));
                        }
                        var_32 |= 1136177921032012749ULL;
                        var_33 = ((/* implicit */long long int) var_16);
                        var_34 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_5] [i_5] [i_5 + 2] [i_5 + 2])) || (((/* implicit */_Bool) arr_13 [i_6] [i_6] [i_6] [i_5 + 2]))));
                    }
                    for (unsigned int i_11 = 1; i_11 < 23; i_11 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned int) ((var_11) ? (var_17) : (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                        var_36 = ((((/* implicit */_Bool) arr_23 [15LL] [i_11] [i_4] [i_11] [i_11] [4ULL])) ? (((/* implicit */int) arr_23 [i_11] [i_11] [i_5] [i_5 - 2] [i_11] [i_4])) : (((/* implicit */int) arr_23 [8U] [i_11] [9] [13ULL] [i_11] [(signed char)1])));
                    }
                    for (unsigned char i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned char) (~((+(var_16)))));
                        /* LoopSeq 3 */
                        for (signed char i_13 = 1; i_13 < 22; i_13 += 4) 
                        {
                            var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9)))))));
                            var_39 &= ((/* implicit */unsigned int) var_4);
                            var_40 &= ((/* implicit */long long int) 17310566152677538896ULL);
                            var_41 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1136177921032012761ULL))));
                            var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) (-(arr_25 [i_12] [i_4] [i_0] [i_12]))))));
                        }
                        for (signed char i_14 = 2; i_14 < 24; i_14 += 2) 
                        {
                            var_43 = ((/* implicit */signed char) (-(((/* implicit */int) arr_15 [i_14]))));
                            var_44 &= ((/* implicit */short) ((var_4) - (((/* implicit */int) arr_32 [i_14 + 1] [i_14 + 1] [i_14] [i_5 - 1] [i_0]))));
                            var_45 = ((/* implicit */int) (-(arr_38 [i_4 + 1] [i_5 - 1] [i_14 - 2])));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 3) 
                        {
                            var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(-3098424066809692037LL)))) ? (((((/* implicit */_Bool) arr_25 [i_12] [i_12] [(short)10] [(short)10])) ? (var_13) : (18U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5] [(signed char)9]))))))));
                            var_47 *= ((/* implicit */unsigned int) ((arr_30 [i_15] [(unsigned short)0] [i_5] [i_4] [i_4 + 1] [i_0]) ? (((((/* implicit */unsigned long long int) var_2)) + (1136177921032012755ULL))) : ((~(17310566152677538866ULL)))));
                            arr_44 [20] [i_4] [i_5] [i_12] [i_15] = ((/* implicit */short) arr_39 [i_12] [(signed char)0] [i_12] [i_12] [i_12] [i_12] [i_12]);
                        }
                    }
                    var_48 *= ((/* implicit */int) ((var_3) == (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_40 [13U] [i_4] [i_4] [i_4 - 1] [i_4] [0ULL] [i_0])))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_16 = 1; i_16 < 16; i_16 += 4) 
    {
        var_49 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1136177921032012774ULL)) ? (-1LL) : (((/* implicit */long long int) ((unsigned int) (+(((/* implicit */int) (unsigned char)66))))))));
        var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(arr_16 [18ULL] [18ULL])))), (((((/* implicit */_Bool) arr_38 [13LL] [i_16 + 1] [i_16])) ? (((/* implicit */unsigned long long int) 2147483645)) : (17310566152677538848ULL))))))));
    }
    var_51 = ((/* implicit */signed char) max((var_51), (((/* implicit */signed char) ((long long int) var_17)))));
    /* LoopSeq 2 */
    for (unsigned int i_17 = 1; i_17 < 22; i_17 += 4) /* same iter space */
    {
        var_52 &= ((/* implicit */signed char) var_7);
        arr_50 [i_17] [i_17] = ((/* implicit */_Bool) ((long long int) ((-2128193071941224415LL) != (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_17 + 1] [(_Bool)0] [16U] [i_17 + 1] [i_17 + 1] [i_17 + 1]))))));
    }
    for (unsigned int i_18 = 1; i_18 < 22; i_18 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 24; i_19 += 2) 
        {
            for (int i_20 = 1; i_20 < 23; i_20 += 2) 
            {
                {
                    var_53 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) arr_25 [i_18] [i_18 + 2] [i_18 + 1] [i_18]))))) - (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_18] [i_18]))) - (var_5)))) ? (((/* implicit */unsigned long long int) arr_3 [i_18 + 1] [i_20])) : (arr_8 [i_18 + 2] [i_18] [i_18] [i_18 - 1])))));
                    /* LoopNest 2 */
                    for (unsigned char i_21 = 0; i_21 < 24; i_21 += 1) 
                    {
                        for (unsigned int i_22 = 1; i_22 < 23; i_22 += 1) 
                        {
                            {
                                var_54 *= max((max((((/* implicit */unsigned long long int) ((var_9) & (((/* implicit */long long int) 2147483647))))), (((((/* implicit */unsigned long long int) arr_9 [i_18 + 1] [(_Bool)1] [i_20] [i_19] [i_22])) + (1136177921032012779ULL))))), (((/* implicit */unsigned long long int) 2147483642)));
                                var_55 = ((/* implicit */long long int) ((int) max((var_16), (((/* implicit */int) var_19)))));
                            }
                        } 
                    } 
                    var_56 &= var_9;
                    /* LoopSeq 1 */
                    for (long long int i_23 = 2; i_23 < 22; i_23 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_24 = 3; i_24 < 20; i_24 += 4) 
                        {
                            var_57 = ((/* implicit */int) ((max((((/* implicit */unsigned int) (signed char)-86)), (min((((/* implicit */unsigned int) var_6)), (arr_16 [i_19] [2LL]))))) >> (((((((/* implicit */_Bool) arr_7 [i_18 + 2] [i_18 + 1] [i_18])) ? (((/* implicit */unsigned long long int) 807628289568191478LL)) : ((-(arr_22 [i_24] [i_18] [i_18] [i_18] [i_18] [i_18]))))) - (807628289568191462ULL)))));
                            var_58 = ((/* implicit */unsigned long long int) min((var_58), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_19] [i_19])))))));
                            var_59 = ((/* implicit */signed char) min((var_59), (((/* implicit */signed char) ((((unsigned long long int) var_6)) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_23] [i_19] [i_19] [i_19] [i_24 + 2] [i_19] [i_23 + 2]))))))));
                            var_60 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((int) arr_7 [(signed char)9] [i_19] [(signed char)9]))) : (max((((/* implicit */unsigned long long int) ((7276521403418932290LL) & (((/* implicit */long long int) var_6))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18] [i_18] [i_18] [7ULL]))) | (arr_8 [i_18 - 1] [i_19] [i_19] [i_24])))))));
                            var_61 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_18))))) / (((((/* implicit */_Bool) arr_43 [i_18] [i_18] [i_20 + 1] [i_23 + 1] [i_24 + 1] [i_19] [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-61))) : (8656568638076090038LL)))))) ? (((unsigned long long int) arr_27 [i_18 + 1] [i_18])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(140737488355327ULL)))) ? (((/* implicit */int) (unsigned short)5033)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_61 [i_18] [i_19] [21LL] [i_18] [i_18]))))))))));
                        }
                        for (unsigned int i_25 = 1; i_25 < 20; i_25 += 1) 
                        {
                            var_62 = ((/* implicit */unsigned long long int) ((unsigned int) arr_36 [i_25] [i_20] [i_20] [i_19] [i_18 + 1]));
                            var_63 = ((/* implicit */unsigned int) min((var_63), (((/* implicit */unsigned int) ((arr_64 [i_19]) != (((long long int) (_Bool)1)))))));
                            arr_71 [i_18] [i_18] = ((/* implicit */unsigned long long int) arr_32 [i_18] [i_23 - 2] [i_20] [i_18] [i_18]);
                        }
                        for (unsigned long long int i_26 = 0; i_26 < 24; i_26 += 4) 
                        {
                            var_64 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_26] [i_23 - 1] [i_18 + 2] [18LL])) - (((/* implicit */int) arr_18 [21] [i_23 + 2] [i_18 - 1] [i_18]))))) ? (((/* implicit */unsigned long long int) 733918370420075993LL)) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-26))) * (11241313997527720332ULL))) * (((/* implicit */unsigned long long int) var_4))))));
                            var_65 = ((/* implicit */unsigned char) max((var_65), (((/* implicit */unsigned char) arr_52 [i_20] [i_26]))));
                        }
                        var_66 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_12))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)167)) ? (254497859U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)144)))))), (((((/* implicit */_Bool) 17592186044400LL)) ? (var_2) : (((/* implicit */long long int) 4184103090U)))))) : (((/* implicit */long long int) ((((/* implicit */int) ((short) arr_58 [i_19] [i_18]))) & (max((1), (((/* implicit */int) var_11)))))))));
                        var_67 = ((/* implicit */long long int) arr_14 [i_23] [i_20] [i_19]);
                        /* LoopSeq 4 */
                        for (short i_27 = 0; i_27 < 24; i_27 += 4) 
                        {
                            var_68 *= ((/* implicit */signed char) min(((~(((((/* implicit */_Bool) 3135144081008654204LL)) ? (9404741259163681525ULL) : (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) arr_60 [i_19] [i_18] [(unsigned char)8] [i_19]))));
                            var_69 = ((/* implicit */unsigned char) arr_51 [i_23]);
                            var_70 = ((/* implicit */signed char) arr_17 [i_18] [12ULL] [i_18] [i_20] [i_18] [i_19] [i_18]);
                        }
                        for (long long int i_28 = 3; i_28 < 23; i_28 += 2) /* same iter space */
                        {
                            arr_81 [i_18] [i_23 - 1] [i_23 - 1] [i_20] [i_19] [i_19] [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_76 [i_28] [i_18] [i_18] [i_18] [i_18])) ? (((/* implicit */int) (unsigned char)3)) : (var_16)))), (((unsigned int) -17592186044395LL))))) ? (((/* implicit */long long int) ((int) ((unsigned int) arr_38 [i_18] [i_19] [i_20])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_72 [i_18] [(signed char)7] [i_19] [i_18])) ? (((/* implicit */int) arr_68 [i_18])) : (((/* implicit */int) arr_68 [i_18]))))) ? (var_15) : (-1LL)))));
                            var_71 = ((((/* implicit */int) arr_23 [i_18] [i_18] [i_20] [i_18] [i_23 - 1] [i_28 + 1])) / (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_13 [6U] [i_19] [i_20] [i_28])))))));
                        }
                        /* vectorizable */
                        for (long long int i_29 = 3; i_29 < 23; i_29 += 2) /* same iter space */
                        {
                            var_72 = ((/* implicit */unsigned short) var_0);
                            var_73 = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
                            var_74 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */long long int) -2147483643)) : (5719078184756519636LL)));
                            arr_84 [i_18] [i_19] [i_20] [i_23] [i_19] = ((((/* implicit */_Bool) arr_77 [i_23 - 1] [i_19] [i_18] [i_18] [i_18 + 1] [i_18])) ? (((((/* implicit */int) (unsigned char)234)) & (((/* implicit */int) arr_32 [i_29] [i_23] [i_18] [i_19] [i_18])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) -1)) == (7205430076181831308ULL)))));
                        }
                        for (long long int i_30 = 3; i_30 < 23; i_30 += 2) /* same iter space */
                        {
                            var_75 *= ((max((var_9), (((/* implicit */long long int) (~(var_13)))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_30] [i_30 - 2] [i_30 - 1] [i_30] [i_30])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_17) : (((/* implicit */unsigned long long int) -3135144081008654180LL))))))))));
                            arr_88 [i_18 - 1] [i_18] [i_20] [i_23 - 2] [i_30] = ((/* implicit */unsigned int) (signed char)15);
                            var_76 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_19)) || (((_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_17))))));
                            var_77 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */unsigned long long int) (+(arr_6 [i_18] [i_18])))) & (var_7))));
                        }
                    }
                }
            } 
        } 
        var_78 = ((/* implicit */unsigned int) max((var_78), (((/* implicit */unsigned int) 3135144081008654204LL))));
        arr_89 [i_18] = ((/* implicit */signed char) ((((unsigned int) max((((/* implicit */unsigned short) arr_35 [i_18] [i_18 + 2] [14] [i_18] [i_18])), (var_1)))) - (((/* implicit */unsigned int) ((/* implicit */int) min(((!(((/* implicit */_Bool) var_7)))), (((var_17) <= (var_17)))))))));
        arr_90 [i_18] [i_18] = ((/* implicit */unsigned char) ((18446744073709551615ULL) >> (((18446744073709551610ULL) - (18446744073709551569ULL)))));
    }
    var_79 = ((/* implicit */long long int) max((var_79), ((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((var_13) >> (((18446744073709551608ULL) - (18446744073709551594ULL)))))) : (max((((/* implicit */long long int) (unsigned char)238)), (var_5)))))))));
}
