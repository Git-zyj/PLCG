/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235599
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                var_17 += ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned char)225)))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_18 ^= ((/* implicit */unsigned short) max((arr_5 [i_2] [i_1 - 2] [i_2]), (((((/* implicit */_Bool) min((11925928438956183211ULL), (((/* implicit */unsigned long long int) arr_5 [i_2] [(_Bool)1] [i_2]))))) ? (((/* implicit */int) ((unsigned short) arr_3 [i_1]))) : (((/* implicit */int) (unsigned char)229))))));
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1]))));
                    arr_6 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_4 [i_0 + 1] [i_1] [i_2] [i_2])), (max((arr_1 [i_0 + 1]), (((/* implicit */int) var_1))))))) ? ((((~(arr_1 [i_0]))) ^ (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) (unsigned short)61267))))) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) (unsigned char)54))))));
                }
                arr_7 [i_0] [i_1 - 3] [i_0] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 1] [i_1 + 1])) ? (arr_2 [i_0 - 1] [i_0] [i_0]) : (arr_2 [i_0 + 1] [(signed char)9] [i_0]))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_20 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((17479892960514521014ULL), (((/* implicit */unsigned long long int) var_6))))))))));
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            arr_15 [i_3] [i_4] [(_Bool)1] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_14 [i_3] [i_3] [i_3])))), (((/* implicit */int) max(((_Bool)1), (((((/* implicit */int) (unsigned char)218)) < (((/* implicit */int) arr_9 [i_3])))))))));
            arr_16 [i_4] [i_3] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_11 [i_3] [i_4] [i_3])))) / (((/* implicit */int) arr_8 [i_3]))));
        }
        for (unsigned long long int i_5 = 4; i_5 < 21; i_5 += 3) 
        {
            arr_19 [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) min((arr_18 [i_5]), (((/* implicit */unsigned long long int) -2537134197520245229LL))))))));
            var_21 ^= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)12288))));
            var_22 ^= ((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) (short)-14680)), (arr_12 [i_3] [i_5 - 1])))));
        }
    }
    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_7 = 3; i_7 < 9; i_7 += 3) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                {
                    var_23 ^= ((/* implicit */unsigned short) ((_Bool) max(((~(((/* implicit */int) arr_3 [i_6])))), (((var_14) ? (var_6) : (((/* implicit */int) arr_3 [i_6])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 2; i_9 < 9; i_9 += 1) 
                    {
                        for (signed char i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            {
                                var_24 ^= ((/* implicit */_Bool) min(((unsigned short)64667), (((/* implicit */unsigned short) var_2))));
                                var_25 ^= ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-13)), (arr_0 [i_6])))), (var_0))), (((/* implicit */unsigned long long int) min((min((var_13), (((/* implicit */long long int) (unsigned short)3791)))), (((/* implicit */long long int) ((unsigned short) arr_11 [i_6] [i_7 - 2] [i_10]))))))));
                                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_34 [i_6] [i_7 + 2] [i_8 - 1] [i_9 - 1]))))));
                            }
                        } 
                    } 
                    var_27 += var_2;
                    arr_35 [i_8] [i_7 - 2] [i_8] = ((/* implicit */long long int) ((arr_29 [i_8] [i_8]) ? (((((/* implicit */int) (unsigned char)50)) ^ (1561064572))) : ((((-(((/* implicit */int) arr_14 [i_6] [i_7 - 3] [i_8])))) - (max((((/* implicit */int) var_5)), (-325945184)))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_11 = 1; i_11 < 9; i_11 += 1) 
        {
            var_28 += ((((/* implicit */_Bool) arr_20 [i_11])) ? (((((/* implicit */_Bool) (unsigned char)89)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)45906)))) : (((/* implicit */int) ((unsigned char) (signed char)-16))));
            arr_38 [i_11] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 710031242)) ? (arr_5 [i_6] [i_11 + 2] [i_11 - 1]) : (arr_5 [i_6] [i_11 + 2] [i_11 + 1])))));
            /* LoopNest 3 */
            for (long long int i_12 = 1; i_12 < 10; i_12 += 3) 
            {
                for (long long int i_13 = 0; i_13 < 11; i_13 += 2) 
                {
                    for (unsigned int i_14 = 1; i_14 < 7; i_14 += 1) 
                    {
                        {
                            var_29 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_11 + 1]))) ? (((((/* implicit */int) arr_11 [i_6] [i_11 + 2] [i_12 + 1])) / (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_25 [i_11 + 2] [i_13] [i_14 + 3]))));
                            arr_45 [i_6] [i_14] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((long long int) var_0))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_5)))), (var_7)));
                            var_30 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) 3198081169U)) & (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)220))) & (5752738228689471483LL))))))));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_6] [i_11 - 1] [i_11])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_13))) : (((/* implicit */long long int) max((var_4), (((/* implicit */int) arr_10 [i_6])))))))) ? (((((/* implicit */_Bool) ((unsigned short) 4180285537055674627LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45926))) : (4746789089564335825ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_6] [i_11 - 1] [i_11 - 1] [i_11] [i_11])) ? (((/* implicit */int) arr_43 [i_6] [i_6] [i_11 - 1] [i_11 - 1] [i_6])) : (((/* implicit */int) (signed char)-58))))))))));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 11; i_15 += 3) /* same iter space */
        {
            arr_48 [i_15] [i_15] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1383082458))))) + (((/* implicit */int) (unsigned short)44585))));
            arr_49 [i_6] [i_15] [i_15] = ((/* implicit */unsigned long long int) (!(((0U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
            var_32 += ((((unsigned long long int) arr_5 [i_6] [(_Bool)1] [(unsigned char)4])) > (11139031339409656870ULL));
            var_33 += (unsigned short)49322;
        }
        for (int i_16 = 0; i_16 < 11; i_16 += 3) /* same iter space */
        {
            var_34 += ((/* implicit */long long int) min((arr_46 [i_6]), (((/* implicit */int) (_Bool)1))));
            arr_53 [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((unsigned long long int) arr_14 [i_6] [i_6] [(unsigned short)20]));
            /* LoopNest 3 */
            for (unsigned int i_17 = 0; i_17 < 11; i_17 += 4) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (unsigned short i_19 = 2; i_19 < 9; i_19 += 4) 
                    {
                        {
                            var_35 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */signed char) arr_61 [i_6] [i_6] [i_17] [i_18] [i_19])), (var_11)))), (((0ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_3)))))))));
                            arr_63 [7] [(signed char)10] [i_18] [i_18] [i_16] [i_6] = ((/* implicit */short) ((((var_12) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_6] [i_6] [i_17] [i_18] [i_19 + 2]))))) ? (6607576972502324937LL) : (var_13)));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned long long int i_20 = 0; i_20 < 21; i_20 += 2) 
    {
        var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_20] [i_20] [12U])))))));
        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 309776079)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)57610)))))));
        /* LoopSeq 1 */
        for (unsigned short i_21 = 1; i_21 < 20; i_21 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_22 = 1; i_22 < 18; i_22 += 2) 
            {
                for (long long int i_23 = 0; i_23 < 21; i_23 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                        {
                            var_38 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 287470346151995001ULL)) ? (((/* implicit */int) arr_67 [i_21 - 1])) : (((/* implicit */int) arr_67 [i_21 - 1])))), (((int) arr_67 [i_21 - 1]))));
                            var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) var_16))));
                        }
                        for (signed char i_25 = 0; i_25 < 21; i_25 += 2) 
                        {
                            var_40 = ((/* implicit */long long int) min((var_40), (var_13)));
                            var_41 = ((/* implicit */signed char) max((((/* implicit */long long int) (signed char)62)), (8557512937505612605LL)));
                            var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) max((max((((0U) >> (((287470346151995001ULL) - (287470346151994983ULL))))), (((/* implicit */unsigned int) arr_14 [i_22 + 2] [i_21] [i_21 + 1])))), (((/* implicit */unsigned int) (_Bool)1)))))));
                            var_43 = ((/* implicit */int) arr_70 [i_20] [i_22] [i_22]);
                        }
                        var_44 ^= ((/* implicit */signed char) (unsigned char)241);
                        var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) arr_8 [i_22]))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_26 = 0; i_26 < 21; i_26 += 4) 
            {
                var_46 ^= ((/* implicit */short) min((max((((/* implicit */int) ((arr_13 [(unsigned short)2] [i_21 - 1] [i_20]) <= (var_6)))), (var_7))), (var_4)));
                var_47 += ((/* implicit */unsigned int) arr_76 [i_21 + 1] [i_21] [i_21] [i_21 + 1] [(short)6] [5ULL] [i_20]);
                var_48 = ((/* implicit */unsigned long long int) arr_13 [i_20] [i_20] [i_20]);
                /* LoopNest 2 */
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    for (unsigned short i_28 = 0; i_28 < 21; i_28 += 2) 
                    {
                        {
                            var_49 = ((/* implicit */unsigned short) min((var_49), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 15725140572595054805ULL)) ? (((((/* implicit */_Bool) 670274369966133398LL)) ? (arr_12 [i_21 + 1] [i_20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_83 [i_20]))))))));
                            var_50 = ((/* implicit */long long int) max((((unsigned short) arr_77 [i_21 + 1] [i_21 + 1] [i_28])), (((/* implicit */unsigned short) arr_77 [i_21 + 1] [i_21 - 1] [i_21 + 1]))));
                            var_51 += ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_65 [i_20]))))), (min((((var_12) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))) : (var_13))))))));
                            var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-113))))) ? (((((/* implicit */long long int) min((1313160475), (((/* implicit */int) (unsigned short)57583))))) - (((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ (arr_65 [i_27]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 8371663770410517392LL)) ? ((-(((/* implicit */int) arr_88 [i_20] [(_Bool)1] [i_26] [(unsigned short)15] [i_27] [19LL])))) : (((/* implicit */int) var_1)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_29 = 1; i_29 < 17; i_29 += 3) 
                {
                    var_53 ^= ((/* implicit */_Bool) (short)-1);
                    arr_91 [i_29] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_85 [i_20] [i_26])) ? ((+(((/* implicit */int) arr_74 [(short)0] [i_29] [i_29 + 1] [i_29 + 3] [i_29] [i_29 - 1])))) : ((-((+(((/* implicit */int) arr_8 [i_20]))))))));
                }
            }
            for (short i_30 = 2; i_30 < 20; i_30 += 4) 
            {
                var_54 ^= ((/* implicit */unsigned short) (_Bool)1);
                var_55 = ((/* implicit */int) max((var_55), (((/* implicit */int) ((((((/* implicit */_Bool) arr_71 [i_20] [i_20] [i_20] [9ULL] [i_30] [i_30 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) (unsigned char)162)) : (var_6)))) : (((((/* implicit */_Bool) arr_11 [i_20] [i_21] [4ULL])) ? (9223372036854775807LL) : (6582381194437331405LL))))) > (((/* implicit */long long int) ((/* implicit */int) min((var_3), (max((arr_64 [i_20]), (arr_90 [(unsigned char)4]))))))))))));
            }
            var_56 = ((/* implicit */unsigned char) min((var_56), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_11)) ? (arr_82 [i_20] [i_21 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
        }
    }
    var_57 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) var_4)))));
    var_58 = ((/* implicit */_Bool) min((var_58), (((/* implicit */_Bool) var_13))));
    /* LoopSeq 1 */
    for (unsigned char i_31 = 0; i_31 < 25; i_31 += 2) 
    {
        var_59 = ((/* implicit */signed char) min((var_59), (((/* implicit */signed char) (!(((/* implicit */_Bool) 535013442U)))))));
        arr_98 [i_31] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_15)) & (12399482988565711744ULL)));
    }
}
