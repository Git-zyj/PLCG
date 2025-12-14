/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191094
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
    var_18 = var_11;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = arr_1 [i_0] [i_0];
        var_19 = (+(4294967295U));
    }
    for (long long int i_1 = 3; i_1 < 10; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = arr_0 [15U] [i_1 + 1];
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_3 [i_1 - 2]), (max((((/* implicit */long long int) 4294967295U)), (9223372036854775799LL)))))) ? (var_15) : (((/* implicit */long long int) 1531773593U))));
        arr_8 [i_1 + 1] = arr_1 [i_1 - 2] [i_1];
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 11; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 10; i_3 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_4 = 2; i_4 < 10; i_4 += 4) 
                    {
                        var_20 ^= ((/* implicit */unsigned int) ((((9223372036854775792LL) == (arr_15 [i_1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_2 - 1]))) ? ((~(arr_3 [i_2 - 1]))) : (max((((/* implicit */long long int) 1009417113U)), (9223372036854775789LL)))));
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            arr_21 [3LL] [11U] [3LL] [i_4 - 1] [i_5] = ((((/* implicit */_Bool) ((arr_14 [i_2 + 1] [i_2]) >> (((((var_12) + (var_4))) - (920471998U)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((3285550177U) < (563586576U))))))) : (var_0));
                            var_21 = min((min(((-(-9223372036854775803LL))), (((/* implicit */long long int) ((unsigned int) 3207297098980278710LL))))), (var_15));
                            var_22 = ((/* implicit */long long int) ((unsigned int) -508257624380325687LL));
                            arr_22 [i_5] [i_4] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) max((((long long int) 508257624380325656LL)), (max((((var_9) & (9223372036854775796LL))), (((((/* implicit */_Bool) -809420353516718897LL)) ? (arr_16 [i_1] [i_1] [i_1] [i_5]) : (arr_18 [i_1] [5U] [i_4 - 1] [i_4] [i_2] [i_5])))))));
                        }
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_4] [i_3] [i_2 + 1] [i_2])) || (((/* implicit */_Bool) arr_19 [i_6] [11U] [6U]))));
                            var_24 = (~((~(8388480U))));
                            var_25 ^= ((((/* implicit */_Bool) ((long long int) arr_24 [i_3 + 2] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3]))) ? (max((arr_24 [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3 + 1] [i_3]), (arr_24 [i_3 + 2] [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_3]))) : (arr_24 [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]));
                        }
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            arr_29 [i_1] [i_1] [i_1] [7LL] = ((/* implicit */long long int) ((508257624380325713LL) != (-508257624380325681LL)));
                            var_26 = ((/* implicit */long long int) max((((((/* implicit */long long int) 3682088671U)) < (-9223372036854775803LL))), (((508257624380325687LL) == (((/* implicit */long long int) 3285550169U))))));
                            var_27 = min((4294967295U), (arr_9 [i_1]));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) 
                        {
                            var_28 = (+(arr_16 [i_1 + 1] [i_4 - 2] [i_3 + 2] [i_2 + 1]));
                            arr_33 [i_8] &= ((((((/* implicit */_Bool) 2774777754660018857LL)) || (((/* implicit */_Bool) arr_27 [i_1] [i_1] [i_3] [i_3] [i_3] [i_4] [11U])))) ? (((((/* implicit */long long int) 3869853018U)) / (9223372036854775792LL))) : (arr_20 [i_3] [i_3 + 2] [i_3 + 2] [i_3] [i_3 + 1] [i_3] [i_3 - 1]));
                        }
                    }
                    for (long long int i_9 = 1; i_9 < 10; i_9 += 4) 
                    {
                        arr_36 [i_1 - 2] [i_1 - 2] [i_3] [11LL] = arr_15 [8LL] [i_2] [8LL] [i_2] [i_2 + 1];
                        arr_37 [11LL] [i_3] [0U] [0U] [i_3] [i_3] = var_17;
                        /* LoopSeq 4 */
                        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            arr_42 [i_10] [i_10] [i_10] [i_10] [4U] [i_10] = ((/* implicit */long long int) max((((unsigned int) (~(-1005783990182740882LL)))), (4294836224U)));
                            arr_43 [i_1] [i_1] [i_3 + 2] [i_1] [i_9] [i_9] [i_3 + 2] = var_3;
                            var_29 = 7392746567604481966LL;
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((((/* implicit */_Bool) var_0)) ? (82369984U) : (arr_30 [i_1] [11LL] [5U] [i_9] [i_10])))))) < (max((235216398584526043LL), (((/* implicit */long long int) ((arr_12 [1LL] [i_2 - 1] [i_2 - 1] [i_2 - 1]) < (((/* implicit */long long int) arr_35 [i_1] [i_2 + 1] [i_2 + 1] [i_9]))))))))))));
                            var_31 = (+(((((/* implicit */_Bool) min((((/* implicit */long long int) var_16)), (var_14)))) ? (arr_11 [i_9 - 1] [i_2 + 1] [i_1] [i_1 + 1]) : (((((/* implicit */_Bool) 2636814905U)) ? (var_14) : (-508257624380325714LL))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 4) 
                        {
                            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((long long int) 5867024532656000383LL)))));
                            var_33 = ((/* implicit */unsigned int) arr_18 [i_1] [i_1] [i_2] [i_3] [1U] [i_11]);
                        }
                        for (long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            var_34 |= ((/* implicit */long long int) ((10LL) == (((/* implicit */long long int) arr_26 [i_2] [i_3] [i_9] [i_2]))));
                            var_35 = ((/* implicit */long long int) arr_49 [i_12] [i_12]);
                            var_36 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_9 - 1] [i_3 + 1] [i_2 - 1] [i_1 - 1] [i_1])))))));
                            arr_50 [i_1] [i_1] [i_3 + 1] [i_9] [i_12] [i_9] = var_14;
                        }
                        /* vectorizable */
                        for (long long int i_13 = 2; i_13 < 10; i_13 += 4) 
                        {
                            var_37 = arr_10 [i_1 + 2];
                            arr_53 [i_1] [i_2] [i_3 + 1] = ((unsigned int) arr_46 [i_3 + 1] [i_3] [i_3] [i_3 - 1] [i_3] [i_3 - 1]);
                        }
                        arr_54 [i_1] [i_1] [i_3] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) (-(var_7)));
                    }
                    for (long long int i_14 = 3; i_14 < 11; i_14 += 4) 
                    {
                        arr_58 [i_14 - 2] [i_2] [i_3] [i_3] = max((min((0LL), (((/* implicit */long long int) 2243743580U)))), (((/* implicit */long long int) 1985530192U)));
                        var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) arr_30 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                    }
                    for (unsigned int i_15 = 0; i_15 < 12; i_15 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_16 = 0; i_16 < 12; i_16 += 1) 
                        {
                            var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((((/* implicit */_Bool) 2315104656007840016LL)) ? (1009417101U) : (1017678148U))))));
                            var_40 = ((((/* implicit */long long int) (~(1658152399U)))) / (var_11));
                        }
                        arr_65 [i_2 + 1] [i_2] [i_2] [i_2] [i_2 + 1] [i_2 + 1] = ((/* implicit */long long int) (+(arr_49 [i_1 + 1] [i_2])));
                        arr_66 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((1009417092U), (1258298940U)))), ((+(var_17)))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 3; i_17 < 10; i_17 += 4) 
                    {
                        var_41 -= (+(arr_62 [5U] [5U] [i_2]));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_18 = 2; i_18 < 11; i_18 += 4) 
                        {
                            var_42 *= ((/* implicit */unsigned int) arr_18 [i_3 + 1] [3U] [i_3] [i_3] [i_3 + 2] [i_3]);
                            arr_73 [i_17] [i_17] [10LL] [i_17] [i_17 + 2] = ((/* implicit */unsigned int) (+(arr_55 [i_1 + 2] [i_3] [i_3] [i_1 + 2] [i_17 + 1] [i_18])));
                            var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) ((7843367269172614372LL) <= (-1LL))))));
                        }
                        for (long long int i_19 = 0; i_19 < 12; i_19 += 1) 
                        {
                            var_44 = ((/* implicit */unsigned int) min((var_44), ((-((-(3934081508U)))))));
                            var_45 = ((/* implicit */unsigned int) (((-9223372036854775807LL - 1LL)) == (-6LL)));
                            arr_77 [i_2] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 531958917U)))))) <= (max((var_1), (arr_40 [i_17] [i_17]))))));
                        }
                        var_46 *= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -272173231955997169LL)))))));
                        arr_78 [10LL] [i_2 - 1] [i_3] = ((/* implicit */unsigned int) (+(-11LL)));
                        arr_79 [i_1] [i_17] [i_1] [i_17] = arr_62 [i_1] [i_2] [i_3];
                    }
                }
            } 
        } 
    }
    for (unsigned int i_20 = 0; i_20 < 21; i_20 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_21 = 0; i_21 < 21; i_21 += 4) 
        {
            for (long long int i_22 = 2; i_22 < 19; i_22 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_23 = 0; i_23 < 21; i_23 += 4) 
                    {
                        arr_91 [i_20] [i_21] [i_22 + 1] [i_23] [i_23] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775805LL)) ? (((/* implicit */long long int) 1009417113U)) : (3956510907512827556LL)));
                        var_47 = ((3173152820U) ^ (222816387U));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_24 = 0; i_24 < 21; i_24 += 4) 
                    {
                        for (long long int i_25 = 3; i_25 < 19; i_25 += 4) 
                        {
                            {
                                arr_98 [i_25] = arr_80 [i_20];
                                arr_99 [i_22] [i_22] [i_25] = max((4072150885U), (4072150885U));
                                var_48 = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) (~(-5961151015273823905LL)))))));
                            }
                        } 
                    } 
                    var_49 = max((((long long int) min((((/* implicit */long long int) 1783315025U)), (9223372036854775807LL)))), (((/* implicit */long long int) ((((((/* implicit */_Bool) 536866816LL)) ? (3385656916989689947LL) : (9223372036854775784LL))) <= (max((var_17), (((/* implicit */long long int) arr_85 [i_22 + 2]))))))));
                    var_50 = arr_87 [i_20] [i_21] [i_22] [i_22 - 2];
                }
            } 
        } 
        arr_100 [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2041656340878564921LL)) ? (var_9) : (((/* implicit */long long int) arr_87 [i_20] [i_20] [i_20] [i_20]))));
        arr_101 [i_20] = (~(1658152399U));
        var_51 = ((/* implicit */long long int) max((var_51), (arr_86 [i_20] [i_20])));
    }
    var_52 &= (+(-7046439917608464651LL));
    var_53 = (+(var_17));
}
