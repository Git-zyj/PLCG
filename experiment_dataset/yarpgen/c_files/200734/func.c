/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200734
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (+(3520941955U))))));
        arr_3 [i_0] = ((/* implicit */long long int) (unsigned short)56301);
        arr_4 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)1))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            var_14 *= ((/* implicit */signed char) max((((/* implicit */int) arr_6 [i_1])), ((~((~(((/* implicit */int) (unsigned short)43030))))))));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 1; i_3 < 9; i_3 += 1) 
            {
                var_15 = ((/* implicit */signed char) (unsigned char)24);
                var_16 ^= ((/* implicit */signed char) min((((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_2])))) ? (-5540864744260280704LL) : (((/* implicit */long long int) min((((/* implicit */int) (signed char)18)), (var_2)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_11 [i_3 + 2] [i_3 - 1] [i_3 - 1] [10LL])) : (((/* implicit */int) min((arr_7 [i_3] [i_2]), (arr_0 [i_1] [i_2])))))))));
            }
            /* vectorizable */
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_9 [i_1] [i_2]))));
                /* LoopSeq 2 */
                for (int i_5 = 1; i_5 < 7; i_5 += 4) /* same iter space */
                {
                    arr_20 [2U] [2U] [i_4] [i_2] [2U] [0LL] = ((/* implicit */int) var_12);
                    arr_21 [i_1] [0] [i_2] = ((/* implicit */unsigned int) arr_13 [i_2] [i_2] [i_4] [i_4]);
                    var_18 = ((/* implicit */signed char) 5843249419651552207LL);
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_2] [9LL] [9LL] [i_5])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                }
                for (int i_6 = 1; i_6 < 7; i_6 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) arr_22 [i_6 + 1] [i_2] [i_6 + 3] [i_6 + 1]);
                        arr_27 [i_7] [i_2] [i_1] [i_2] [i_1] = ((/* implicit */long long int) var_9);
                    }
                    for (int i_8 = 1; i_8 < 7; i_8 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_26 [9] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) * (arr_19 [1LL])))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_9 [i_1] [i_4])) : (arr_2 [i_6]))) : (((/* implicit */unsigned long long int) arr_8 [i_2] [5U]))));
                        arr_32 [i_2] [i_2] = ((/* implicit */long long int) var_0);
                        arr_33 [i_2] [i_6 + 4] [(unsigned char)1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (unsigned char)22);
                        var_22 ^= ((/* implicit */signed char) ((unsigned long long int) arr_11 [i_1] [i_1] [i_8 - 1] [i_6 - 1]));
                    }
                    var_23 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_29 [i_6] [i_6] [i_6 - 1] [10LL] [i_6] [i_6] [i_6]))))));
                    var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) var_3)))));
                }
            }
        }
        for (unsigned short i_9 = 3; i_9 < 10; i_9 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */short) (+(((/* implicit */int) var_1))));
            var_26 += ((/* implicit */unsigned short) var_6);
            arr_36 [i_1] [i_9] [i_9 + 1] = ((/* implicit */long long int) var_5);
        }
        for (unsigned short i_10 = 3; i_10 < 10; i_10 += 1) /* same iter space */
        {
            arr_39 [i_10] [i_10] = ((/* implicit */signed char) (+(((/* implicit */int) (((+(6824613228153243701LL))) <= (arr_9 [i_1] [i_10]))))));
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) var_8))));
            /* LoopSeq 3 */
            for (int i_11 = 0; i_11 < 11; i_11 += 1) /* same iter space */
            {
                var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_9 [i_10 - 2] [i_10 - 3])) ? (5843249419651552216LL) : (arr_9 [i_10 - 2] [i_10 - 1]))) - (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)56270)) + (((/* implicit */int) (signed char)27))))), (((((/* implicit */long long int) arr_17 [(short)2] [i_10 - 2] [i_10 + 1] [i_11])) - (arr_16 [4U] [i_1] [i_1] [i_1])))))));
                var_29 -= ((/* implicit */signed char) ((var_9) >= (((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-63)), (arr_28 [i_1] [i_1] [8] [i_1] [(unsigned short)6] [10] [i_11])))) ? (var_9) : (((/* implicit */int) var_10))))));
                arr_42 [i_1] [0] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-41))));
                arr_43 [i_1] [6LL] [i_11] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)23758))));
            }
            for (int i_12 = 0; i_12 < 11; i_12 += 1) /* same iter space */
            {
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((var_7) % (min((2639785415400193392LL), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_12 [i_1] [(signed char)10] [i_12])), (2165382339U)))))))))));
                var_31 = var_0;
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_13 = 0; i_13 < 11; i_13 += 1) 
                {
                    var_32 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)22))));
                    arr_50 [i_1] [i_12] [i_1] [(unsigned short)6] [(signed char)4] [(unsigned short)5] = ((/* implicit */int) (+(arr_5 [i_1])));
                    var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) arr_2 [i_10]))));
                }
                for (int i_14 = 3; i_14 < 10; i_14 += 3) 
                {
                    arr_53 [i_14] [i_12] [i_12] [(unsigned short)3] = ((/* implicit */unsigned short) (-(min((((((/* implicit */_Bool) 5917282979662073929ULL)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_12] [i_12]))))), (arr_51 [i_12])))));
                    var_34 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) arr_28 [i_14] [i_12] [i_10 - 3] [i_12] [i_1] [i_1] [(signed char)5])), (arr_9 [i_14] [i_10])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(signed char)8] [i_14 - 2] [i_14 - 3] [i_10 - 3]))) : (min((arr_2 [i_1]), (arr_23 [i_1] [(signed char)3] [4LL] [i_14 + 1])))))));
                }
                for (unsigned short i_15 = 1; i_15 < 9; i_15 += 4) 
                {
                    var_35 = ((/* implicit */unsigned int) arr_55 [(signed char)1]);
                    arr_56 [i_12] [i_12] [i_15] [i_15] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(arr_1 [i_15 + 1]))))));
                    var_36 = ((/* implicit */long long int) ((var_2) >= (((/* implicit */int) (unsigned short)9235))));
                    var_37 = ((/* implicit */unsigned long long int) min((var_5), (-774946161)));
                }
                for (int i_16 = 0; i_16 < 11; i_16 += 1) 
                {
                    arr_59 [i_12] [(unsigned short)9] [i_12] [(unsigned char)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_1), (arr_0 [i_10] [i_12])))) << (((6449222664236143193ULL) - (6449222664236143177ULL)))))) ? (((((/* implicit */_Bool) arr_18 [i_10 - 1] [i_16] [i_12] [i_10 - 1])) ? (max((arr_2 [i_1]), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) arr_48 [i_10 - 3] [i_10 - 2])))) : (((/* implicit */unsigned long long int) var_2))));
                    var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_46 [i_1] [i_10 - 2] [i_1] [i_16])) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)94)) || (((/* implicit */_Bool) arr_0 [i_1] [i_12]))))) : (((/* implicit */int) arr_0 [i_1] [19LL]))));
                    arr_60 [i_12] = ((/* implicit */int) max((6824613228153243676LL), (arr_51 [i_12])));
                }
                var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) (+(arr_30 [0LL] [i_12] [(signed char)2] [(signed char)10] [i_10] [(signed char)5]))))));
                /* LoopSeq 3 */
                for (signed char i_17 = 4; i_17 < 10; i_17 += 4) 
                {
                    arr_65 [i_12] = ((/* implicit */long long int) (+(((((var_5) + (2147483647))) >> (((/* implicit */int) ((arr_25 [i_1] [i_1] [i_1] [i_1] [i_1]) != (arr_8 [i_12] [(signed char)5]))))))));
                    var_40 = ((/* implicit */short) (-((+(((/* implicit */int) (signed char)-7))))));
                }
                for (signed char i_18 = 0; i_18 < 11; i_18 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_19 = 1; i_19 < 7; i_19 += 1) 
                    {
                        var_41 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) -2639785415400193390LL))));
                        var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((6824613228153243701LL), (((/* implicit */long long int) arr_6 [i_10]))))))) ? (((/* implicit */int) ((short) (-(((/* implicit */int) (unsigned short)56301)))))) : ((-(var_6)))));
                    }
                    for (long long int i_20 = 0; i_20 < 11; i_20 += 3) 
                    {
                        var_43 = ((/* implicit */long long int) min((var_8), (((/* implicit */unsigned short) min((arr_15 [i_10 - 1] [i_10 - 2] [i_10 - 2]), (arr_15 [i_10 - 2] [i_10 - 3] [i_10 - 3]))))));
                        var_44 = ((/* implicit */unsigned short) arr_41 [i_1]);
                        arr_74 [i_1] [i_12] [i_12] [8U] [i_20] [i_20] = ((/* implicit */int) ((signed char) arr_19 [i_1]));
                        arr_75 [i_1] [i_10 - 1] [8] [0ULL] [i_20] [i_20] [i_12] = ((int) (signed char)11);
                    }
                    for (long long int i_21 = 0; i_21 < 11; i_21 += 4) 
                    {
                        arr_78 [i_1] [i_12] [i_12] [i_18] = ((/* implicit */short) (unsigned char)170);
                        arr_79 [(signed char)6] [(signed char)6] [(signed char)6] [i_18] [(unsigned char)9] [i_12] [(signed char)6] = ((/* implicit */unsigned char) min((var_7), (((/* implicit */long long int) arr_12 [i_12] [i_10] [i_10 + 1]))));
                        var_45 *= ((/* implicit */unsigned int) arr_9 [(unsigned char)4] [i_18]);
                        arr_80 [i_10] [i_12] = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) arr_62 [(short)6] [(signed char)0] [(signed char)0] [i_18] [i_21])), (arr_47 [(signed char)0] [i_10] [i_12] [i_18]))), (((/* implicit */long long int) (+(arr_62 [i_1] [i_10 - 3] [i_1] [i_18] [(short)5]))))));
                        var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_8 [i_12] [i_12])) ? (((/* implicit */unsigned long long int) var_2)) : (arr_35 [i_12] [i_12] [i_12]))))) ? (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_71 [i_1] [i_1] [i_1] [i_12]))))))) : ((~(3185037953U)))));
                    }
                    var_47 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [(unsigned short)2] [i_12]))) : (arr_1 [i_10 - 1]))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) 16374810232344690173ULL)) ? (var_6) : (((/* implicit */int) var_0))))))))) > (((min((((/* implicit */long long int) arr_63 [i_12] [i_12] [(signed char)9] [i_12] [i_12] [i_12])), (var_12))) - (((/* implicit */long long int) ((((/* implicit */unsigned int) var_2)) + (1109929320U))))))));
                    arr_81 [(signed char)7] [i_10] [(signed char)7] [i_10 - 1] [5U] [i_12] = ((/* implicit */int) arr_40 [i_10 + 1] [i_10 - 2]);
                    var_48 ^= ((/* implicit */signed char) -443743619);
                }
                for (signed char i_22 = 2; i_22 < 8; i_22 += 4) 
                {
                    var_49 = ((/* implicit */unsigned short) arr_67 [6] [i_12] [8] [i_12] [i_1]);
                    arr_86 [i_12] [i_12] = ((/* implicit */short) ((int) 1117503853U));
                    arr_87 [i_1] [i_12] [(signed char)10] [i_1] = ((/* implicit */signed char) 2639785415400193384LL);
                    arr_88 [i_12] [i_10] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) + (min((-989132104), ((-(((/* implicit */int) var_11))))))));
                    arr_89 [i_12] [(unsigned short)1] = ((/* implicit */unsigned char) arr_23 [i_1] [(unsigned char)4] [i_1] [(signed char)2]);
                }
            }
            /* vectorizable */
            for (int i_23 = 0; i_23 < 11; i_23 += 1) /* same iter space */
            {
                var_50 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-22148)) || (((/* implicit */_Bool) arr_61 [1ULL] [2U] [i_10 - 2] [i_23] [i_23]))));
                arr_94 [(signed char)6] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)26)) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)108)))))) || (((arr_76 [i_23] [i_10] [i_10] [i_1] [i_1] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-108)))))));
                var_51 ^= ((/* implicit */long long int) var_9);
                var_52 = ((/* implicit */long long int) (short)22147);
            }
            /* LoopSeq 2 */
            for (unsigned short i_24 = 0; i_24 < 11; i_24 += 1) 
            {
                var_53 = ((/* implicit */signed char) arr_93 [(unsigned short)0]);
                var_54 = ((/* implicit */int) min((var_54), (max(((+(((/* implicit */int) arr_91 [6U] [i_10])))), (((/* implicit */int) var_4))))));
            }
            /* vectorizable */
            for (long long int i_25 = 0; i_25 < 11; i_25 += 3) 
            {
                arr_102 [i_10 + 1] [8U] [i_10 + 1] [8U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1] [i_1])) ? (arr_44 [i_1] [i_10] [1LL] [i_25]) : ((+(((/* implicit */int) var_8))))));
                /* LoopNest 2 */
                for (signed char i_26 = 3; i_26 < 9; i_26 += 4) 
                {
                    for (long long int i_27 = 4; i_27 < 9; i_27 += 1) 
                    {
                        {
                            arr_108 [i_26] = ((/* implicit */int) ((unsigned char) arr_84 [i_27] [i_27 - 3] [i_27 - 2] [i_27 - 2]));
                            var_55 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 1516411530)) : (arr_77 [i_26] [i_26 - 2] [8] [i_26] [i_26])))) ? (((/* implicit */int) (signed char)-33)) : (((/* implicit */int) arr_18 [i_1] [i_1] [i_26] [i_1]))));
                            var_56 = ((/* implicit */long long int) var_0);
                            arr_109 [i_10] [i_10] [i_10 - 3] [i_26] [i_10 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_98 [i_10] [i_26] [i_26]))) / (arr_14 [i_1] [i_26] [i_1]))) : (((/* implicit */unsigned int) (-(var_5))))));
                            var_57 = ((/* implicit */unsigned char) arr_51 [i_26]);
                        }
                    } 
                } 
            }
        }
        var_58 = ((/* implicit */unsigned int) min((var_58), (((/* implicit */unsigned int) var_6))));
    }
    /* vectorizable */
    for (unsigned char i_28 = 0; i_28 < 22; i_28 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_29 = 3; i_29 < 18; i_29 += 3) 
        {
            for (unsigned long long int i_30 = 0; i_30 < 22; i_30 += 3) 
            {
                {
                    var_59 = ((/* implicit */signed char) ((((/* implicit */int) arr_114 [i_28] [i_28] [i_30])) * (((/* implicit */int) arr_114 [i_28] [i_28] [21LL]))));
                    var_60 = ((/* implicit */signed char) max((var_60), (((signed char) ((long long int) var_0)))));
                    var_61 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((int) var_12)) : (var_2)));
                }
            } 
        } 
        arr_120 [i_28] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_118 [i_28] [i_28] [i_28] [i_28])) ? (((long long int) arr_115 [i_28] [i_28])) : (arr_110 [i_28] [i_28])));
        var_62 = ((/* implicit */int) ((arr_110 [i_28] [i_28]) / (((((/* implicit */_Bool) arr_118 [i_28] [16U] [i_28] [15])) ? (((/* implicit */long long int) ((/* implicit */int) arr_113 [i_28]))) : (-8385148518895886280LL)))));
    }
    var_63 = ((/* implicit */int) var_11);
}
