/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2110
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
    var_19 = ((/* implicit */int) var_9);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_5 [10] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 162940436U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (var_9))) : (((((/* implicit */_Bool) -1878180033)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U)))))));
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned short)11))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)42979))))))) ? (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned char) ((_Bool) (unsigned short)3)))))) : (var_1))))));
            var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((_Bool) (unsigned short)16)) ? (((/* implicit */unsigned int) -90527845)) : (0U)))) ? (((((/* implicit */_Bool) (unsigned short)24)) ? (((/* implicit */int) (short)-24029)) : (((/* implicit */int) (short)9851)))) : (((((/* implicit */_Bool) -2147483638)) ? (((/* implicit */int) (short)-18886)) : (((/* implicit */int) (short)9851))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_22 -= ((/* implicit */short) min(((unsigned short)65535), ((unsigned short)24)));
                        var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)24)) ? (3893111388U) : (0U))) % (((/* implicit */unsigned int) (((_Bool)1) ? (var_1) : (((/* implicit */int) (unsigned short)17)))))));
                    }
                } 
            } 
        }
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                arr_15 [i_0] [i_4] [i_0] [i_0] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)17561))));
                var_24 = ((/* implicit */unsigned long long int) ((int) (short)-32766));
            }
            /* vectorizable */
            for (unsigned int i_6 = 2; i_6 < 10; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_24 [i_6] [i_4] [i_6] = ((/* implicit */int) var_14);
                            var_25 = ((/* implicit */signed char) (+(6U)));
                        }
                    } 
                } 
                arr_25 [i_0] [i_0] [i_4] [(_Bool)1] |= ((((/* implicit */_Bool) (short)-9851)) ? (10914274014479887294ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_4] [i_6] [i_6 - 1] [i_4]))));
            }
            for (unsigned int i_9 = 2; i_9 < 9; i_9 += 1) 
            {
                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) 7702787428068717664LL))));
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) 347762313U)) ? (10914274014479887294ULL) : (((/* implicit */unsigned long long int) 1048575LL)))))));
                            var_28 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 7290701853850482706LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2803732464622779232LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) (unsigned short)65535)))))) : (min((7912204329790817869ULL), (((/* implicit */unsigned long long int) (short)-27749)))))), (((/* implicit */unsigned long long int) (signed char)-64))));
                        }
                    } 
                } 
            }
            /* LoopSeq 4 */
            for (int i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_13 = 1; i_13 < 9; i_13 += 3) 
                {
                    arr_41 [i_0] [i_13] [i_12] [i_13] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 356401770)) ? (4294967294U) : (3944376185U)))) ? (max((((/* implicit */int) (_Bool)0)), (2084238953))) : (max((356401782), (((/* implicit */int) (short)9507))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        arr_45 [2ULL] [i_13] [i_13 - 1] [i_12] [i_4] [i_13] [i_0] = ((/* implicit */int) (unsigned short)65535);
                        var_29 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2693176410U)) || (((/* implicit */_Bool) (signed char)80))));
                        arr_46 [i_13] [i_13 - 1] [i_4] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) 249002655U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)33))) : (7ULL)));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_50 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)121)), (7056688839131796019LL)))) ? (arr_31 [i_13] [i_15] [i_15] [i_13 + 2] [i_13]) : (arr_31 [i_13] [3U] [6U] [i_13 + 2] [i_13])));
                        var_30 = ((unsigned int) var_3);
                    }
                    /* vectorizable */
                    for (signed char i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        var_31 = ((/* implicit */_Bool) arr_48 [i_13]);
                        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) -2575262174596093518LL)) ? (((/* implicit */int) arr_49 [i_13 - 1] [i_4] [i_13 - 1] [i_0] [i_16])) : (((/* implicit */int) (_Bool)1))));
                        var_33 += ((/* implicit */signed char) ((unsigned int) var_15));
                    }
                }
                for (signed char i_17 = 0; i_17 < 11; i_17 += 4) 
                {
                    var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((-5223249515801405444LL) % (((/* implicit */long long int) ((/* implicit */int) (short)-4635))))))));
                    var_35 += ((/* implicit */unsigned int) arr_9 [i_0] [i_4]);
                    var_36 -= ((((/* implicit */_Bool) (-(-1491087925)))) ? (((/* implicit */unsigned int) var_10)) : (((unsigned int) arr_4 [i_0] [i_4])));
                    arr_57 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -5223249515801405442LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-5223249515801405419LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-113)))))) : (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned long long int) 481202818175619773LL)) : (arr_11 [i_17] [i_12] [i_0])))));
                }
                /* LoopNest 2 */
                for (unsigned char i_18 = 0; i_18 < 11; i_18 += 2) 
                {
                    for (unsigned long long int i_19 = 1; i_19 < 10; i_19 += 2) 
                    {
                        {
                            var_37 = ((/* implicit */_Bool) arr_38 [i_0]);
                            var_38 += max(((+((+(arr_54 [i_0] [i_4] [i_0] [i_18] [(short)8] [(short)8]))))), (((/* implicit */int) ((_Bool) 4294967295U))));
                        }
                    } 
                } 
            }
            for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
            {
                arr_69 [(unsigned short)1] [i_4] [i_20] [i_4] = ((/* implicit */unsigned short) 4294967294U);
                var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18LL)) ? (max((((/* implicit */long long int) -1458390783)), (-5223249515801405442LL))) : (((/* implicit */long long int) 2U))))), (min((((/* implicit */unsigned long long int) 0U)), (arr_11 [i_0] [(_Bool)1] [i_20 + 1]))))))));
                var_40 = (+(((((/* implicit */int) arr_40 [i_20 + 1] [i_20] [i_20] [i_0])) % (((/* implicit */int) arr_40 [i_20 + 1] [i_20] [i_20] [i_4])))));
            }
            for (unsigned int i_21 = 0; i_21 < 11; i_21 += 3) 
            {
                /* LoopSeq 1 */
                for (short i_22 = 0; i_22 < 11; i_22 += 3) 
                {
                    var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */unsigned int) 8191)) : (2090496302U)));
                    arr_76 [i_0] [i_4] [i_21] [(_Bool)1] [i_21] [i_22] = ((/* implicit */unsigned short) ((signed char) (-(var_1))));
                }
                var_42 = ((/* implicit */short) max((7454372425005309666ULL), (((/* implicit */unsigned long long int) (unsigned short)38293))));
            }
            for (signed char i_23 = 0; i_23 < 11; i_23 += 2) 
            {
                var_43 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (var_7) : (((/* implicit */long long int) arr_59 [i_0] [i_4] [i_4] [i_0])))));
                arr_81 [i_23] [0ULL] [i_0] = ((/* implicit */int) var_0);
            }
        }
        for (unsigned char i_24 = 0; i_24 < 11; i_24 += 4) /* same iter space */
        {
            arr_84 [i_24] [i_0] [i_0] = ((/* implicit */_Bool) arr_58 [(_Bool)1]);
            var_44 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (signed char)117))));
            /* LoopSeq 3 */
            for (long long int i_25 = 0; i_25 < 11; i_25 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_26 = 0; i_26 < 11; i_26 += 2) 
                {
                    for (signed char i_27 = 0; i_27 < 11; i_27 += 2) 
                    {
                        {
                            var_45 += ((/* implicit */int) (+(558446353793941504ULL)));
                            var_46 += ((/* implicit */_Bool) ((((1065291877) >> (((((/* implicit */int) (signed char)-16)) + (45))))) & (((/* implicit */int) arr_35 [i_27] [i_26] [i_26] [i_25] [i_24] [i_0]))));
                            var_47 = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */unsigned int) arr_86 [i_0])), (arr_79 [(unsigned short)7] [i_25] [i_25] [i_26]))));
                        }
                    } 
                } 
                var_48 = ((/* implicit */short) arr_33 [i_24]);
                var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) arr_77 [i_25] [2]))));
            }
            /* vectorizable */
            for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_29 = 0; i_29 < 11; i_29 += 3) 
                {
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        {
                            arr_100 [i_0] [3ULL] [7] [7] [i_28] [i_30] [i_28] = ((/* implicit */_Bool) (+((+(((/* implicit */int) var_6))))));
                            var_50 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_14 [i_29] [i_29] [i_28 + 1]))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (int i_31 = 2; i_31 < 9; i_31 += 3) 
                {
                    var_51 = arr_12 [i_31 - 2];
                    arr_105 [i_28] [i_28] [i_24] [i_28] = ((/* implicit */unsigned long long int) (short)-13294);
                    var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_28] [i_31 + 2] [i_28] [i_28 + 1] [6U] [i_0])) ? (((/* implicit */int) arr_64 [i_31] [i_31 + 1] [i_31] [i_31 - 1] [i_31] [i_28] [i_28 + 1])) : (((/* implicit */int) arr_64 [i_31] [i_31 - 1] [i_31] [i_31 - 1] [i_31] [i_28 + 1] [i_28 + 1]))));
                }
                for (signed char i_32 = 0; i_32 < 11; i_32 += 4) 
                {
                    arr_108 [i_32] [i_28] [i_28] [i_0] = ((/* implicit */unsigned long long int) (short)29894);
                    var_53 = ((/* implicit */_Bool) (signed char)2);
                    var_54 = ((/* implicit */int) max((var_54), (((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) ? (4294967295U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-5))))))))));
                }
                for (unsigned int i_33 = 1; i_33 < 8; i_33 += 1) 
                {
                    var_55 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_43 [i_33] [i_28] [i_0] [10] [(short)10])) ? (arr_43 [6LL] [8] [i_24] [(_Bool)0] [i_0]) : (((/* implicit */int) var_0))));
                    arr_111 [i_28] [i_24] [i_0] &= ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) arr_85 [i_33 + 1] [i_33] [i_28 + 1] [i_0])) : (((/* implicit */int) arr_85 [i_33] [i_28] [i_28 + 1] [(unsigned char)9]))));
                    arr_112 [i_24] [i_28 + 1] [i_28] = (-(18446744073709551615ULL));
                }
                var_56 = ((/* implicit */signed char) min((var_56), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (3799906820U) : (arr_18 [8] [i_28 + 1] [i_0]))))));
                /* LoopSeq 1 */
                for (int i_34 = 0; i_34 < 11; i_34 += 4) 
                {
                    var_57 = ((((/* implicit */_Bool) 1680480282U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)100))) : (3532614839U));
                    var_58 *= ((/* implicit */signed char) ((((/* implicit */int) arr_99 [i_24] [i_34] [i_34] [i_28 + 1] [i_24] [i_24])) <= (((/* implicit */int) (signed char)-127))));
                    arr_116 [i_28] [i_28] [i_28 + 1] [(unsigned char)5] [i_24] [i_28] = ((/* implicit */unsigned long long int) (_Bool)1);
                }
            }
            for (int i_35 = 0; i_35 < 11; i_35 += 2) 
            {
                var_59 = ((((/* implicit */_Bool) arr_59 [(unsigned char)8] [i_24] [i_35] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_75 [i_0] [i_24] [9ULL] [i_35] [i_24] [i_35])))))) : (((((/* implicit */_Bool) arr_59 [i_0] [i_0] [i_35] [i_24])) ? (((/* implicit */unsigned long long int) 1275841786)) : (17888297719915610112ULL))));
                var_60 = ((/* implicit */_Bool) arr_33 [i_0]);
                var_61 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (short)8765)) ? (15ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_89 [i_24] [i_24] [i_24] [i_24] [i_0] [i_0] [i_0])))))));
            }
            var_62 = ((/* implicit */signed char) max((var_62), (((/* implicit */signed char) ((unsigned short) (+(((unsigned long long int) (_Bool)1))))))));
        }
        var_63 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((unsigned short) 2402459677870334092LL))) : (((/* implicit */int) arr_107 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)63952)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1))))) : (((((/* implicit */_Bool) 1807103376U)) ? (5844455750130306179ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-112))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    }
    var_64 ^= ((/* implicit */short) ((signed char) -1715158366));
}
