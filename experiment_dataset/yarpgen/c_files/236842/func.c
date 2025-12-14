/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236842
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_5))))))) ? ((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) -1306222787)) : (511U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                    arr_8 [i_1] = (-9223372036854775807LL - 1LL);
                    arr_9 [i_1] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((max((6012612909765377904LL), (-6796978127297269907LL))) == (((/* implicit */long long int) ((int) var_1))))))) > (((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_2])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                    arr_10 [i_0] [9U] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294967295U)));
                    var_12 = ((/* implicit */short) arr_4 [i_0] [i_1]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 1; i_3 < 9; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) var_7);
                var_14 = ((/* implicit */int) ((((((((/* implicit */_Bool) -9223372036854775797LL)) ? (var_3) : (var_4))) + (9223372036854775807LL))) << (((509383955) - (509383955)))));
                /* LoopNest 3 */
                for (long long int i_5 = 1; i_5 < 9; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        for (short i_7 = 1; i_7 < 6; i_7 += 2) 
                        {
                            {
                                arr_23 [0U] [0U] [3LL] [(short)9] [i_5] [i_5] = ((/* implicit */int) min((-9223372036854775785LL), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)42922)) >> (((-1210563622) + (1210563642))))))));
                                var_15 = ((/* implicit */unsigned int) (((((_Bool)1) ? (arr_22 [i_3] [i_3 + 1] [i_3 - 1] [i_3 - 1] [4LL]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) + (((((/* implicit */_Bool) arr_22 [i_3] [i_3 + 1] [(unsigned short)2] [(unsigned short)2] [(unsigned short)2])) ? (arr_22 [i_3] [i_4] [i_5] [7] [4]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                                arr_24 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) min((var_2), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_20 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 + 1] [1U] [i_3 + 1] [i_3 + 1])))))));
                                var_16 = (((((~(((/* implicit */int) (unsigned short)37817)))) + (2147483647))) >> ((((~(var_2))) - (1746899818U))));
                                var_17 = min((((((/* implicit */_Bool) 1572622865U)) ? (509383955) : ((+(((/* implicit */int) (unsigned short)62684)))))), (((/* implicit */int) (short)-15914)));
                            }
                        } 
                    } 
                } 
                arr_25 [(short)1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (~((+(((/* implicit */int) var_1))))))) == (4294967295U)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
    {
        for (long long int i_9 = 4; i_9 < 19; i_9 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_26 [i_9 + 2] [i_8])) ? (var_4) : (var_10))), (((/* implicit */long long int) ((arr_26 [i_8] [i_8]) & (((/* implicit */int) var_8)))))));
                var_19 = ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (((((/* implicit */int) arr_28 [i_9])) ^ (((/* implicit */int) arr_28 [i_8]))))))) : (min((((/* implicit */unsigned int) -509383956)), (max((((/* implicit */unsigned int) var_0)), (arr_30 [i_8] [i_9 + 2] [i_9]))))));
                /* LoopSeq 3 */
                for (short i_10 = 0; i_10 < 23; i_10 += 4) 
                {
                    var_20 = (((!(((/* implicit */_Bool) arr_30 [i_8] [i_8] [i_8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((arr_30 [i_9] [i_9 - 3] [i_10]) | (((/* implicit */unsigned int) 1626434495)))));
                    arr_34 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) 4294967295U)), (var_3))) < (((/* implicit */long long int) max((arr_30 [i_9 - 4] [i_9 - 4] [(unsigned short)11]), (arr_30 [i_9 - 4] [9] [2LL]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        for (unsigned int i_12 = 1; i_12 < 21; i_12 += 2) 
                        {
                            {
                                var_21 = (~(-9223372036854775774LL));
                                var_22 = ((/* implicit */_Bool) -6012612909765377904LL);
                                var_23 = ((/* implicit */int) arr_36 [i_9 - 1] [i_12 + 2] [i_9]);
                            }
                        } 
                    } 
                }
                for (int i_13 = 1; i_13 < 22; i_13 += 3) 
                {
                    arr_44 [i_8] [i_8] [i_9] = ((/* implicit */_Bool) ((((arr_28 [i_9 + 2]) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_28 [(short)20]))))))) ? (var_6) : (max((arr_30 [i_9 - 4] [i_9 + 1] [i_9 + 1]), (arr_39 [i_9] [i_13 + 1] [3U])))));
                    /* LoopSeq 1 */
                    for (long long int i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        arr_49 [17U] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_47 [i_8] [i_8] [i_13 - 1] [i_14])))) / (((/* implicit */int) max((arr_40 [i_9] [i_9] [i_9 - 3] [2] [i_13] [i_14] [0]), ((short)14572))))));
                        var_24 = ((/* implicit */_Bool) (+(max((((/* implicit */int) var_7)), ((~(arr_26 [21U] [(short)1])))))));
                    }
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 65535U)), (6142585044463947498LL)))) ? (((((/* implicit */int) arr_43 [i_9] [i_9 + 3] [i_9])) << ((((((-2147483647 - 1)) - (-2147483628))) + (37))))) : (((((/* implicit */int) var_9)) % (((/* implicit */int) arr_43 [i_9 - 3] [i_9 - 1] [i_9])))))))));
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(19)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (arr_46 [1LL] [i_9] [i_9 - 1] [i_9])));
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 0; i_15 < 23; i_15 += 3) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                arr_55 [i_16] [i_9] [i_9] [i_9 - 3] = ((/* implicit */unsigned int) arr_40 [i_9 - 4] [i_9 + 3] [i_9 - 4] [(short)15] [i_9 + 1] [(_Bool)1] [i_13]);
                                arr_56 [i_8] [i_9] [i_13 - 1] [i_15] [i_15] [18LL] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_32 [i_13 - 1] [i_9] [i_9] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_33 [i_8] [i_9 - 1])))));
                            }
                        } 
                    } 
                }
                for (long long int i_17 = 2; i_17 < 21; i_17 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_18 = 0; i_18 < 23; i_18 += 4) 
                    {
                        var_27 *= ((/* implicit */unsigned short) (_Bool)1);
                        arr_63 [i_9] [i_18] [i_17 + 1] [i_18] = ((((((/* implicit */long long int) 3740134098U)) < (min((-9223372036854775789LL), (((/* implicit */long long int) 509383955)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-2446))) : (439949874U));
                        arr_64 [i_8] [i_9] [13] [i_18] = ((/* implicit */int) var_2);
                        /* LoopSeq 4 */
                        for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned int) -1373484739);
                            arr_67 [i_8] [i_9] = ((/* implicit */unsigned int) (_Bool)1);
                            arr_68 [i_8] [i_8] [(short)7] [i_8] [(short)7] [i_9] [i_8] = ((/* implicit */long long int) arr_66 [i_9 + 4] [i_17 - 1] [i_19 + 1] [i_9] [i_19 + 1]);
                            var_29 = ((/* implicit */unsigned int) -9223372036854775800LL);
                            var_30 &= ((unsigned int) var_4);
                        }
                        for (int i_20 = 2; i_20 < 21; i_20 += 3) /* same iter space */
                        {
                            var_31 = ((((/* implicit */_Bool) -5786782472436426849LL)) || (((/* implicit */_Bool) arr_43 [i_8] [i_9 - 3] [i_17 - 1])));
                            var_32 = max((((/* implicit */long long int) (short)13753)), (-1LL));
                        }
                        for (int i_21 = 2; i_21 < 21; i_21 += 3) /* same iter space */
                        {
                            var_33 = ((/* implicit */int) ((4850389151468698876LL) & (((/* implicit */long long int) ((/* implicit */int) min((arr_43 [i_17 + 2] [i_9 + 2] [i_9 + 1]), ((unsigned short)42957)))))));
                            var_34 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), (var_9))))));
                            arr_73 [i_8] [i_8] [3LL] [i_8] [i_9] = ((/* implicit */_Bool) (+(var_10)));
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 640808232)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1LL)))))) : ((+(max((((/* implicit */long long int) 31U)), (-9223372036854775803LL)))))));
                        }
                        for (int i_22 = 2; i_22 < 21; i_22 += 3) /* same iter space */
                        {
                            var_36 = (+(((unsigned int) var_1)));
                            var_37 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_47 [i_17 - 2] [i_9 - 4] [i_18] [i_9 + 4])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)0)), (max((var_6), (arr_27 [i_8] [i_9]))))))));
                        }
                        var_38 = ((/* implicit */long long int) var_8);
                    }
                    /* LoopSeq 2 */
                    for (int i_23 = 4; i_23 < 22; i_23 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_24 = 1; i_24 < 22; i_24 += 2) 
                        {
                            var_39 &= 1999452131U;
                            var_40 += ((/* implicit */unsigned short) arr_38 [1LL] [i_9 - 4] [i_9 - 1] [19U] [19U] [i_9 - 2]);
                            var_41 = ((/* implicit */int) ((((/* implicit */unsigned int) -2085941730)) / (((((/* implicit */_Bool) arr_70 [i_24 - 1] [i_24 - 1] [i_24 - 1] [15] [i_24 + 1] [i_24 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_70 [i_24] [i_24 + 1] [11] [11] [i_24 + 1] [11])))));
                        }
                        for (unsigned int i_25 = 3; i_25 < 20; i_25 += 3) 
                        {
                            arr_82 [i_8] [12U] [i_17] [i_8] [i_8] &= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_50 [i_8] [i_17 - 2] [i_8]), (arr_27 [i_9 + 1] [i_9 + 1])))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((arr_75 [i_8] [20LL] [i_17] [4] [i_8]) << (((((-1421133938653331038LL) + (1421133938653331056LL))) - (18LL)))))) : (arr_71 [i_23 - 4] [i_23 - 1] [i_23 + 1] [i_23 - 2] [i_23] [i_23 - 4]))) : (((/* implicit */long long int) ((/* implicit */int) (short)25753)))));
                            var_42 += ((/* implicit */short) ((((/* implicit */_Bool) (+((+((-9223372036854775807LL - 1LL))))))) ? (((((/* implicit */_Bool) -6380163849918647961LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_2) == (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) : (min((-3171695260248779899LL), (14LL))))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)2442)))))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                        {
                            var_43 -= ((/* implicit */int) var_5);
                            arr_86 [i_26 - 1] [i_23] [i_9] [i_17] [i_9] [i_8] [0U] = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_80 [i_8] [i_9 - 3] [19LL] [i_17 - 1] [i_23] [i_9 - 3] [i_9])), (((((/* implicit */_Bool) min((((/* implicit */long long int) 3757738771U)), (-4311306664067490692LL)))) ? (((/* implicit */long long int) 2147483636)) : (max((((/* implicit */long long int) arr_58 [i_9])), (var_10)))))));
                            arr_87 [i_8] [i_9 - 2] [19LL] [i_9] [i_23] [18] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((arr_27 [i_17 + 1] [12]) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-32755)))))), (min((458243156U), (((/* implicit */unsigned int) (_Bool)1))))))) ? ((~(arr_52 [i_8] [i_9] [i_23 - 1] [i_23 + 1] [i_26 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3171695260248779899LL)))))));
                            var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) ((((var_6) < (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) ? (1918928418U) : (2266399707U))))));
                        }
                    }
                    for (unsigned int i_27 = 0; i_27 < 23; i_27 += 2) 
                    {
                        arr_91 [18U] [i_9] [i_17 - 1] = ((/* implicit */int) (short)-13760);
                        var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) (unsigned short)21062))));
                    }
                }
                var_46 = (-(min((-4933313797454504242LL), (((/* implicit */long long int) arr_75 [i_9 - 1] [i_9 + 2] [11U] [i_9] [i_9])))));
                /* LoopNest 2 */
                for (int i_28 = 1; i_28 < 21; i_28 += 1) 
                {
                    for (long long int i_29 = 2; i_29 < 21; i_29 += 2) 
                    {
                        {
                            var_47 += ((/* implicit */long long int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_9))))))) ? (((/* implicit */int) arr_29 [i_9 + 1])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (max((-3171695260248779896LL), (var_3))))))));
                            var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)6072)) || (((/* implicit */_Bool) -2))))) & ((((_Bool)0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))))) && (var_8)));
                            var_49 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44450))) % (4294967289U)));
                            /* LoopSeq 1 */
                            for (long long int i_30 = 0; i_30 < 23; i_30 += 1) 
                            {
                                var_50 = max((-7665958790686666583LL), (((/* implicit */long long int) 12U)));
                                var_51 = ((/* implicit */unsigned int) arr_83 [i_9 + 3] [i_28 + 2] [17] [i_29 + 1] [i_30]);
                                var_52 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_62 [i_29 - 2] [i_29 + 1] [10] [i_29] [i_29 - 2]))))) ? (((((/* implicit */_Bool) arr_62 [i_29 + 2] [i_29 + 2] [7U] [10] [(_Bool)1])) ? (3709074010U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
                            }
                            var_53 = ((/* implicit */unsigned int) var_9);
                        }
                    } 
                } 
            }
        } 
    } 
}
