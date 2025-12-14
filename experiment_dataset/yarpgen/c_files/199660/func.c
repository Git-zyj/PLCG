/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199660
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
    var_16 ^= (+((((~(var_5))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (var_15))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) var_3);
                        var_18 *= ((/* implicit */int) ((min((((/* implicit */unsigned long long int) 2147483623)), (arr_0 [i_0 + 1]))) >= (((/* implicit */unsigned long long int) max((((2147483623) - (((/* implicit */int) arr_1 [14ULL] [i_2])))), (((/* implicit */int) var_15)))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
                    {
                        var_19 |= ((/* implicit */unsigned long long int) ((arr_0 [i_0]) != (((/* implicit */unsigned long long int) ((int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2] [i_1]))) >= (arr_7 [i_0 + 1] [i_1] [i_0 + 1] [i_4])))))));
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((max((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), (-2147483644))) << (((((((/* implicit */_Bool) (~(var_5)))) ? (2147483645) : (((((-2147483630) + (2147483647))) << (((((/* implicit */int) (unsigned char)157)) - (157))))))) - (2147483631))))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
                    {
                        arr_15 [9ULL] [i_2] [(unsigned char)2] [i_0] = (-(((/* implicit */int) arr_9 [(unsigned short)7] [i_1] [12] [7] [i_5] [i_5])));
                        var_21 = ((/* implicit */unsigned long long int) ((long long int) min((1830482787708241529ULL), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_4)) < (15118115581702388761ULL)))))));
                    }
                    var_22 += ((/* implicit */long long int) 2147483641);
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) max((var_1), (arr_1 [(unsigned char)12] [(unsigned char)0]))))))) ? (max((((((/* implicit */int) var_1)) << (((12871522406289929848ULL) - (12871522406289929831ULL))))), (max((((/* implicit */int) arr_9 [(unsigned short)1] [(unsigned short)1] [(unsigned short)15] [i_0] [(unsigned short)15] [i_2])), (arr_14 [i_2] [i_1] [i_2]))))) : ((~(var_3)))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_6 = 0; i_6 < 14; i_6 += 4) 
    {
        var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_6 [i_6] [i_6] [i_6])))));
        /* LoopSeq 3 */
        for (unsigned char i_7 = 3; i_7 < 12; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                var_25 += ((/* implicit */unsigned short) arr_16 [i_7 + 1] [i_8]);
                var_26 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2147483636))));
            }
            var_27 = arr_5 [(unsigned char)14] [i_6];
            /* LoopNest 2 */
            for (long long int i_9 = 3; i_9 < 13; i_9 += 4) 
            {
                for (long long int i_10 = 1; i_10 < 13; i_10 += 2) 
                {
                    {
                        var_28 = ((/* implicit */int) max((var_28), (((((/* implicit */_Bool) (+((~(var_11)))))) ? ((-((+(arr_11 [i_6] [i_6]))))) : (-2147483636)))));
                        var_29 = ((/* implicit */long long int) 2147483644);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_11 = 4; i_11 < 13; i_11 += 4) 
        {
            var_30 ^= ((/* implicit */unsigned char) arr_11 [i_6] [13LL]);
            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_27 [i_6] [i_6] [i_6] [i_6] [i_6])) >= (((/* implicit */int) arr_13 [i_6] [i_11] [i_11] [i_6]))))) >= ((~(2147483630)))));
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 3) 
            {
                for (unsigned char i_13 = 2; i_13 < 13; i_13 += 3) 
                {
                    {
                        var_32 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_6])) ? (-2147483644) : (((/* implicit */int) arr_34 [i_6] [i_11]))))) ? (((((arr_14 [i_11] [i_12] [i_13]) + (2147483647))) << (((((/* implicit */int) (unsigned short)8013)) - (8013))))) : ((~(((/* implicit */int) arr_10 [i_6] [i_11] [1LL] [i_11] [i_13]))))));
                        var_33 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_11 - 2] [i_11 - 2] [0ULL] [i_11] [i_11]))) != (((((/* implicit */_Bool) arr_18 [i_6] [i_11] [i_6])) ? (-11371415255950556LL) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
                        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) arr_19 [i_6]))));
                        var_35 = ((/* implicit */int) ((((/* implicit */long long int) arr_30 [i_11 - 1] [i_13 - 1])) - (var_10)));
                    }
                } 
            } 
            arr_36 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_11 - 1])) ? (arr_20 [i_11 + 1]) : (arr_20 [i_11 - 2])));
        }
        for (long long int i_14 = 0; i_14 < 14; i_14 += 3) 
        {
            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((arr_25 [i_14] [i_14] [(unsigned char)5] [i_6]) != (((/* implicit */long long int) var_4)))))))) ? (max((5LL), (((long long int) (unsigned short)65535)))) : (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) -2147483618)) || (((/* implicit */_Bool) var_10))))) << (((((/* implicit */int) (unsigned short)30543)) - (30529))))))));
            arr_39 [i_6] [i_14] = (-(((/* implicit */int) (unsigned short)0)));
            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((1696620957597406106ULL), (((/* implicit */unsigned long long int) -2147483631)))) << (((((/* implicit */int) arr_4 [i_6])) - (153)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 281474976710655ULL)) ? ((+(-2147483637))) : (((/* implicit */int) (unsigned char)1))))) : (((((/* implicit */_Bool) -6095960559445165916LL)) ? (-7549394928657784406LL) : (70368744177663LL)))));
            /* LoopNest 3 */
            for (int i_15 = 1; i_15 < 11; i_15 += 2) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 4) 
                {
                    for (unsigned char i_17 = 0; i_17 < 14; i_17 += 1) 
                    {
                        {
                            var_38 += ((/* implicit */unsigned long long int) ((unsigned char) arr_14 [i_6] [i_14] [14LL]));
                            arr_48 [i_17] [i_17] [i_14] [i_17] [10] = ((/* implicit */int) min((7525567756998973939LL), (((((/* implicit */_Bool) max((arr_42 [i_15] [i_6]), (((/* implicit */long long int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_15 - 1] [10ULL] [i_14] [(unsigned short)8] [i_6]))) : (((((arr_7 [i_14] [(unsigned short)7] [13ULL] [i_17]) + (9223372036854775807LL))) << (((((arr_33 [i_6] [i_6] [i_6]) + (334762233))) - (30)))))))));
                            var_39 = ((/* implicit */int) min((var_39), (2147483630)));
                            arr_49 [i_14] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)47919)) ? (((/* implicit */int) (unsigned short)8013)) : (((/* implicit */int) (unsigned char)110)))) >= (min((arr_11 [(unsigned short)4] [15LL]), (((/* implicit */int) arr_10 [i_17] [i_16] [i_6] [i_6] [i_6])))))))) < (((long long int) -2147483631))));
                        }
                    } 
                } 
            } 
        }
    }
    /* LoopNest 3 */
    for (unsigned char i_18 = 0; i_18 < 10; i_18 += 2) 
    {
        for (long long int i_19 = 0; i_19 < 10; i_19 += 4) 
        {
            for (unsigned char i_20 = 0; i_20 < 10; i_20 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_21 = 2; i_21 < 7; i_21 += 3) 
                    {
                        for (long long int i_22 = 0; i_22 < 10; i_22 += 1) 
                        {
                            {
                                var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((var_10) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_18] [15ULL] [i_18] [i_18] [i_18] [4]))))) : (((/* implicit */long long int) 1315318010))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_21 + 1] [i_21 + 3] [i_21 + 3] [i_21 + 3])) ? (((/* implicit */int) arr_43 [i_21 - 2] [i_21] [i_21 + 2] [i_21 + 1])) : (((/* implicit */int) arr_43 [i_21 - 1] [i_21] [i_21] [i_21 + 2]))))) : (min((((arr_38 [i_19] [i_20]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)141))))), (((/* implicit */unsigned long long int) min((-1LL), (-7394701381512367682LL))))))));
                                var_41 = ((/* implicit */unsigned short) -2796708555578873987LL);
                            }
                        } 
                    } 
                    var_42 = ((/* implicit */unsigned short) 1589209930);
                    /* LoopSeq 3 */
                    for (unsigned short i_23 = 0; i_23 < 10; i_23 += 3) 
                    {
                        var_43 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_50 [i_18])) ? (((/* implicit */unsigned long long int) arr_5 [i_20] [i_23])) : (min((((/* implicit */unsigned long long int) arr_32 [i_19])), (arr_55 [i_19]))))) != (((/* implicit */unsigned long long int) ((long long int) 10483333937152449940ULL)))));
                        var_44 = ((/* implicit */unsigned long long int) max((((max((arr_37 [i_18] [i_20] [(unsigned char)10]), (var_14))) << (((max((var_0), (((/* implicit */unsigned long long int) (unsigned short)65535)))) - (8027873635630962508ULL))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_18] [(unsigned char)13] [(unsigned char)13] [i_23] [i_18]))) >= (7963410136557101674ULL))))));
                    }
                    for (unsigned char i_24 = 0; i_24 < 10; i_24 += 3) /* same iter space */
                    {
                        var_45 |= ((/* implicit */unsigned long long int) (unsigned short)6);
                        var_46 -= ((/* implicit */unsigned long long int) arr_17 [i_18] [i_19]);
                        var_47 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) (unsigned char)255)), ((+(var_14))))), (var_10)));
                        var_48 |= ((/* implicit */unsigned char) max((((long long int) -4588291568095095863LL)), (((((/* implicit */long long int) arr_14 [i_24] [i_24] [i_24])) & (arr_7 [(unsigned short)6] [i_19] [i_20] [i_24])))));
                    }
                    for (unsigned char i_25 = 0; i_25 < 10; i_25 += 3) /* same iter space */
                    {
                        arr_70 [i_18] [(unsigned short)3] [i_20] [i_25] |= ((/* implicit */unsigned char) var_10);
                        var_49 = ((/* implicit */int) min((var_49), (((int) ((arr_58 [i_18] [i_18] [i_18] [i_18]) < (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_18] [i_19] [i_20] [12]))))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_26 = 0; i_26 < 10; i_26 += 3) 
                    {
                        var_50 = min(((~(min((((/* implicit */int) var_7)), (arr_60 [i_18] [(unsigned char)3] [(unsigned char)8] [i_26] [(unsigned char)3]))))), (arr_33 [i_18] [i_18] [i_18]));
                        var_51 = min((((/* implicit */unsigned short) ((((long long int) arr_61 [i_19] [2] [2] [i_19] [i_18] [i_18] [2LL])) != (-4622162413684663092LL)))), (var_13));
                    }
                    /* vectorizable */
                    for (long long int i_27 = 0; i_27 < 10; i_27 += 2) 
                    {
                        arr_75 [i_18] [3] [i_20] [i_27] [i_27] [(unsigned char)9] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)8013)) << (((2147483630) - (2147483623)))));
                        var_52 = ((/* implicit */unsigned short) 130359771);
                        var_53 |= ((/* implicit */long long int) var_0);
                    }
                    /* vectorizable */
                    for (unsigned short i_28 = 0; i_28 < 10; i_28 += 4) 
                    {
                        arr_80 [(unsigned char)0] [9ULL] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_18 [i_18] [i_19] [i_28]))) >= (((/* implicit */int) arr_4 [i_28]))));
                        arr_81 [i_19] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */unsigned short) ((arr_64 [i_18] [i_19] [i_20] [i_28]) / (arr_64 [i_18] [6LL] [i_20] [i_28])));
                        /* LoopSeq 2 */
                        for (long long int i_29 = 0; i_29 < 10; i_29 += 2) 
                        {
                            var_54 ^= ((/* implicit */unsigned long long int) (unsigned char)59);
                            var_55 = ((/* implicit */long long int) min((var_55), (((/* implicit */long long int) arr_78 [i_18] [i_19] [i_20] [i_18]))));
                            var_56 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_54 [i_19] [(unsigned char)4] [i_28])) ? (((((/* implicit */_Bool) 440621174139738530ULL)) ? (((/* implicit */int) arr_13 [i_18] [i_19] [i_18] [i_28])) : (((/* implicit */int) arr_27 [i_18] [i_19] [4LL] [(unsigned short)11] [i_29])))) : (((/* implicit */int) ((unsigned short) 7400800490587948654LL)))));
                            var_57 = var_0;
                            var_58 = ((var_11) << (((2287828610704211968ULL) - (2287828610704211967ULL))));
                        }
                        for (unsigned short i_30 = 0; i_30 < 10; i_30 += 3) 
                        {
                            arr_89 [i_18] [(unsigned short)8] [(unsigned char)5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_5)))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_19])))));
                            var_59 ^= (~(2287828610704211968ULL));
                        }
                        var_60 += ((/* implicit */long long int) arr_72 [(unsigned short)5] [i_20] [(unsigned short)5] [(unsigned char)7] [i_20]);
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_31 = 0; i_31 < 11; i_31 += 3) 
    {
        for (long long int i_32 = 0; i_32 < 11; i_32 += 3) 
        {
            for (unsigned long long int i_33 = 0; i_33 < 11; i_33 += 3) 
            {
                {
                    var_61 *= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) < ((+(min((((/* implicit */long long int) arr_4 [(unsigned short)2])), (arr_91 [(unsigned short)4])))))));
                    var_62 = ((((/* implicit */int) ((((/* implicit */long long int) arr_45 [i_31] [i_31] [i_32] [i_32] [i_32])) >= (5347828839694815795LL)))) << (((min((((/* implicit */long long int) arr_13 [i_31] [i_31] [i_32] [i_33])), (4588291568095095865LL))) - (158LL))));
                    var_63 -= ((/* implicit */unsigned char) (-(min((974203388), (((((/* implicit */int) (unsigned short)16383)) << (((arr_41 [i_32]) - (12220222214673777154ULL)))))))));
                }
            } 
        } 
    } 
}
