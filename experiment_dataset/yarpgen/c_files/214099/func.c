/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214099
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((2698570371U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (2698570371U) : (645278739U))))));
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned short) ((var_1) ? (min((((((/* implicit */_Bool) var_9)) ? (17548586173462888686ULL) : (var_12))), (((/* implicit */unsigned long long int) max((33554431U), (1596396924U)))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))))), (((/* implicit */long long int) (~(((/* implicit */int) var_1))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                var_21 = ((/* implicit */unsigned long long int) arr_0 [i_2 + 1]);
                /* LoopSeq 4 */
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    var_22 = ((/* implicit */short) ((arr_4 [i_0] [i_2 + 1] [i_0]) == (((/* implicit */unsigned long long int) -1LL))));
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [i_2 + 1] [i_2 - 1])))))));
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_18))))))));
                }
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
                {
                    var_25 = ((/* implicit */short) arr_3 [i_4]);
                    var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52236)) ? (127LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? ((-(((/* implicit */int) (unsigned short)31404)))) : (((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) var_17))))));
                }
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                {
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) ? ((~(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))));
                    var_28 = ((/* implicit */long long int) var_9);
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_5] [i_2 + 1])) ? (((/* implicit */int) arr_5 [i_0] [i_2] [i_2 - 1] [i_5])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_1] [i_2 - 1]))));
                }
                for (unsigned short i_6 = 4; i_6 < 8; i_6 += 3) 
                {
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_6 + 4] [i_6 + 4] [i_6] [i_6 - 3])) ? (arr_12 [(unsigned short)7] [i_0] [i_1] [i_6 + 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_6 - 1])))));
                    var_31 |= ((/* implicit */unsigned short) (((~(var_5))) << ((((((-(((/* implicit */int) (unsigned short)65535)))) + (65581))) - (46)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 1; i_7 < 10; i_7 += 3) /* same iter space */
                    {
                        var_32 = ((/* implicit */_Bool) ((unsigned short) ((var_14) < (((/* implicit */unsigned long long int) 4261412865U)))));
                        var_33 |= ((/* implicit */unsigned short) ((((unsigned long long int) var_6)) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63))))))));
                        arr_19 [i_1] [i_6] [i_6] |= ((/* implicit */unsigned short) ((short) 404840373U));
                        arr_20 [i_7] [i_1] [i_2] [i_6] [i_7] = ((/* implicit */unsigned short) 0U);
                    }
                    for (unsigned short i_8 = 1; i_8 < 10; i_8 += 3) /* same iter space */
                    {
                        var_34 |= ((/* implicit */unsigned short) (+(arr_16 [i_8 + 2] [i_1] [i_2] [i_6 - 1] [i_8])));
                        arr_24 [i_0] [i_1] [i_2] [i_8] [i_8] [i_0] = arr_9 [i_2];
                        var_35 *= ((/* implicit */_Bool) ((arr_15 [i_1] [i_6 - 4] [i_6] [i_6 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2 + 1]))) : (7789581726476926774LL)));
                        var_36 = ((/* implicit */short) arr_3 [i_8 - 1]);
                    }
                    var_37 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_6 + 4] [i_0] [i_0] [i_0]))));
                }
            }
            /* LoopSeq 3 */
            for (unsigned long long int i_9 = 1; i_9 < 10; i_9 += 4) 
            {
                arr_27 [i_9] = arr_8 [i_0] [i_1] [i_9] [i_1];
                var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_9 - 1] [i_0] [i_9 - 1] [i_0] [i_9 - 1]))) & (14434358466236684967ULL)))))));
            }
            for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
            {
                var_39 = ((/* implicit */_Bool) min((-1823443439900654938LL), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_7)))))))));
                var_40 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 33554431U)) ? (arr_29 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_10] [i_10] [i_10])))))))))) < (((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_1] [i_10] [(unsigned short)6] [i_1]))) >= (404840373U))))));
                var_41 |= var_3;
                arr_31 [i_0] [i_0] [i_10] [i_1] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((4215930859U) << (((max((-1LL), (((/* implicit */long long int) 4294967295U)))) - (4294967283LL))))))));
            }
            /* vectorizable */
            for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((long long int) arr_10 [i_11] [i_1] [i_0] [i_0])))));
                var_43 = ((/* implicit */long long int) (unsigned short)29549);
            }
        }
        for (long long int i_12 = 0; i_12 < 12; i_12 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_13 = 0; i_13 < 12; i_13 += 2) 
            {
                for (unsigned short i_14 = 0; i_14 < 12; i_14 += 1) 
                {
                    {
                        var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) var_6))));
                        arr_42 [i_0] [i_14] [i_0] [i_12] [i_12] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)37829))))) ? (((/* implicit */int) ((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) 7789581726476926774LL))))) : (((/* implicit */int) (unsigned short)0)))), (((((/* implicit */_Bool) arr_23 [i_0] [i_12] [i_12] [i_12] [i_13] [i_14] [i_12])) ? ((~(((/* implicit */int) (short)-31374)))) : (((/* implicit */int) (unsigned short)4088))))));
                    }
                } 
            } 
            var_45 = ((/* implicit */_Bool) arr_32 [i_0] [i_12]);
            var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) min(((((+(4263029813U))) << ((((+(var_14))) - (3102179177640413120ULL))))), (((/* implicit */unsigned int) ((((arr_35 [i_0] [i_0] [0ULL]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (arr_9 [i_0]))) != (((((/* implicit */_Bool) (unsigned short)20261)) ? (arr_41 [i_0]) : (((/* implicit */unsigned long long int) 4261412864U))))))))))));
        }
        /* vectorizable */
        for (long long int i_15 = 0; i_15 < 12; i_15 += 4) /* same iter space */
        {
            var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 14362341399752835764ULL)) ? (((/* implicit */unsigned long long int) 13U)) : (8010675759378089160ULL)));
            arr_45 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) ((16405167740212491567ULL) <= (((/* implicit */unsigned long long int) 4294967295U))));
            arr_46 [7ULL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26119))) != (arr_1 [i_0] [i_15])));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_17 = 0; i_17 < 12; i_17 += 2) 
            {
                for (unsigned long long int i_18 = 4; i_18 < 11; i_18 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_19 = 0; i_19 < 12; i_19 += 2) 
                        {
                            var_48 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((3077032259U) >> (((9548580704800836492ULL) - (9548580704800836461ULL)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_0] [i_16] [i_17] [i_18 - 2] [i_18 - 3]))))) ? (((((/* implicit */_Bool) arr_44 [i_0])) ? (((/* implicit */unsigned long long int) var_15)) : (arr_48 [i_17] [i_17] [i_0]))) : (((/* implicit */unsigned long long int) ((-6165951906061462982LL) / (((/* implicit */long long int) 4294967275U)))))))));
                            arr_57 [i_18] [i_16] [6U] = min((((((/* implicit */_Bool) 4294967295U)) ? (((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0U))))));
                        }
                        /* vectorizable */
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            arr_62 [i_0] [i_16] [i_17] [i_18 - 4] [i_18 - 4] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_20] [i_20] [i_18 - 4] [i_17] [i_16] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65522))));
                            var_49 -= ((unsigned short) ((((/* implicit */int) (unsigned short)27277)) | (((/* implicit */int) (short)-4956))));
                            var_50 = ((/* implicit */unsigned short) ((arr_38 [(unsigned short)2] [i_16] [i_16]) != (((/* implicit */unsigned int) ((/* implicit */int) ((6130253888042233511ULL) < (var_9)))))));
                            var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_49 [i_18 - 4])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-4411531029610557209LL)));
                        }
                        for (unsigned int i_21 = 2; i_21 < 9; i_21 += 2) 
                        {
                            var_52 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_61 [10LL] [i_16] [i_16])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64512)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) -4411531029610557209LL))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65508)) ? (1ULL) : (25ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7420)))))))));
                            arr_66 [i_18] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_30 [i_18 - 1] [i_17] [i_16] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_18] [i_18] [i_18] [i_18]))) : (var_9)))))));
                            var_53 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_21] [i_21] [i_21 + 1] [i_18 + 1]))) ? (min((228831520232584950LL), (((/* implicit */long long int) arr_5 [i_18 - 1] [i_21 - 1] [i_21 - 1] [i_18 - 1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_18 - 2] [i_21 - 1] [i_21 - 1] [i_18 - 2])) ? (((/* implicit */int) arr_5 [i_21] [i_21] [i_21 + 1] [i_18 - 3])) : (((/* implicit */int) arr_5 [i_21] [i_21] [i_21 - 1] [i_18 - 3])))))));
                            var_54 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)6608)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_16] [i_17] [i_18]))) : (min((min((0U), (((/* implicit */unsigned int) (unsigned short)39725)))), (((/* implicit */unsigned int) arr_44 [i_0]))))));
                        }
                        var_55 = ((/* implicit */long long int) arr_28 [i_18]);
                        arr_67 [i_18] [i_18] [i_16] [i_18] [i_0] = ((unsigned short) (-(-1LL)));
                        arr_68 [i_18] = ((/* implicit */unsigned long long int) arr_25 [i_0]);
                    }
                } 
            } 
            var_56 |= arr_33 [i_0] [i_16] [i_0] [i_16];
            var_57 ^= ((/* implicit */unsigned short) 5U);
            var_58 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((17235626125588099059ULL) * (1377541286216351638ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))))), (min((var_13), (arr_60 [i_16] [9U] [i_16] [i_16] [i_16] [i_16]))))))) : (min((max((4294967295U), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) max((arr_25 [i_0]), (arr_54 [i_0]))))))));
        }
        arr_69 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) (short)-1)) < (((/* implicit */int) (unsigned short)1)))) ? (((((/* implicit */_Bool) 268435448U)) ? (arr_59 [6LL] [6LL] [i_0]) : (8912821995797418559ULL))) : (var_16)));
        var_59 = ((((/* implicit */_Bool) min(((unsigned short)33957), (((/* implicit */unsigned short) (short)-1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : ((-(((var_18) ? (((/* implicit */unsigned long long int) 4261412867U)) : (9873106510467481684ULL))))));
    }
    var_60 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2120369509775726683ULL)) ? (((/* implicit */int) (unsigned short)6144)) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) (unsigned short)45180)))))) : (16956844320190661518ULL)))) ? ((+(max((((/* implicit */unsigned long long int) var_1)), (var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) 4294967295U)), (-3456787689644843708LL))))))));
    var_61 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) 9524688092783262932ULL)) ? (((/* implicit */long long int) 2920801205U)) : (3456787689644843689LL))))) == (((485966729495863238LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30)))))));
    /* LoopNest 3 */
    for (unsigned short i_22 = 0; i_22 < 18; i_22 += 3) 
    {
        for (unsigned short i_23 = 2; i_23 < 17; i_23 += 4) 
        {
            for (short i_24 = 0; i_24 < 18; i_24 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_25 = 0; i_25 < 18; i_25 += 1) 
                    {
                        for (unsigned int i_26 = 0; i_26 < 18; i_26 += 1) 
                        {
                            {
                                var_62 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_73 [i_23 - 2] [i_23 - 1])) < (((/* implicit */int) arr_78 [i_22] [i_22] [i_23 - 1] [i_25]))));
                                arr_85 [i_22] [i_22] [i_22] [i_26] = ((((/* implicit */_Bool) 14ULL)) ? (8368672204731098878ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11904))));
                                arr_86 [i_26] [i_26] [i_26] [i_26] [i_26] = ((arr_84 [i_22] [i_26] [i_26] [i_24] [i_22] [i_22]) * (((/* implicit */unsigned long long int) ((long long int) (unsigned short)30922))));
                            }
                        } 
                    } 
                    var_63 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_82 [(short)1] [6LL] [6LL] [1U]), (arr_82 [i_24] [i_23 - 2] [i_22] [i_22])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_77 [i_22] [i_23 - 1] [5LL])) ? (((/* implicit */int) arr_77 [i_24] [i_23 - 2] [i_22])) : (((/* implicit */int) arr_77 [i_23 - 2] [i_23 - 2] [i_22]))))) : (((((/* implicit */_Bool) 4294967295U)) ? (arr_75 [i_23 - 1] [i_23 - 2]) : (arr_70 [i_23 - 2])))));
                }
            } 
        } 
    } 
}
