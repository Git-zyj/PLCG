/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4743
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
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        arr_2 [12LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16128))) : (66584576ULL)))) ? (((((/* implicit */_Bool) (unsigned short)43984)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_13))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-17327)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))))));
        arr_3 [i_0] [i_0] = var_3;
    }
    for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        var_16 ^= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)26466)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (((((/* implicit */_Bool) var_15)) ? ((-9223372036854775807LL - 1LL)) : (9223372036854775807LL)))))));
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_10)) ? (5994250923658198369ULL) : (((/* implicit */unsigned long long int) -1322182985)))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                for (long long int i_5 = 4; i_5 < 9; i_5 += 3) 
                {
                    for (long long int i_6 = 1; i_6 < 8; i_6 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)30720)) : (((/* implicit */int) (signed char)-1))))));
                            arr_18 [i_2] [i_3] [(short)0] [i_5] [i_4] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4294967295U))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 7; i_7 += 3) 
            {
                for (unsigned short i_8 = 1; i_8 < 7; i_8 += 3) 
                {
                    {
                        arr_23 [i_2] [i_3] [i_7] [3U] = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
                        var_20 = ((((/* implicit */_Bool) (-(2147483647)))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) 0U)) ? (var_5) : (var_5))));
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 1; i_9 < 9; i_9 += 3) 
                        {
                            var_21 = ((((/* implicit */_Bool) (short)3584)) ? (((/* implicit */unsigned long long int) -1778212526)) : (6318790208719066562ULL));
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((var_1) ? (((/* implicit */unsigned long long int) 2147483647)) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) -1248479071)))))));
                            var_23 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) -1322182985)) ? (((/* implicit */int) (short)7196)) : (var_12)))));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (2147483647)));
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) 18446744073709551615ULL))));
                        }
                        for (signed char i_10 = 2; i_10 < 8; i_10 += 3) 
                        {
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) -1337467999200454480LL)) ? (((/* implicit */long long int) -1322182985)) : (var_0))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1322182985)) ? (((/* implicit */int) (signed char)-96)) : (2147483647))))));
                            var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_3))));
                        }
                        var_28 += ((/* implicit */int) var_15);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_12 = 2; i_12 < 8; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1049980234563271023LL)) ? (-528279117) : (var_12)));
                            arr_39 [7ULL] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0U)) ? (16499733054452393552ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
                            arr_40 [i_2] [i_11] [i_2] [i_13] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) 1322182985)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)28170))));
                            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) (-(((((/* implicit */_Bool) var_9)) ? (8743423299289961978ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))))))));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) 4319238042081244426LL)) : (1253848230250272587ULL)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_15 = 4; i_15 < 9; i_15 += 4) 
                {
                    for (unsigned short i_16 = 2; i_16 < 6; i_16 += 3) 
                    {
                        {
                            arr_47 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) -1322182985)) ? (((/* implicit */int) var_4)) : (var_5)));
                            var_32 = ((/* implicit */unsigned long long int) max((var_32), ((((!(((/* implicit */_Bool) 6318790208719066562ULL)))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (6318790208719066562ULL) : (((/* implicit */unsigned long long int) -680130014)))) : (((/* implicit */unsigned long long int) (-(var_12))))))));
                        }
                    } 
                } 
                var_33 += ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (562949953421184ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))));
            }
            var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) var_15))));
            var_35 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))));
            /* LoopSeq 2 */
            for (unsigned int i_17 = 0; i_17 < 10; i_17 += 3) /* same iter space */
            {
                arr_50 [i_2] [i_11] [i_17] = ((/* implicit */_Bool) (~(35184372086784ULL)));
                /* LoopSeq 4 */
                for (unsigned int i_18 = 0; i_18 < 10; i_18 += 3) 
                {
                    arr_54 [i_2] [i_2] [i_2] = ((/* implicit */int) var_4);
                    /* LoopSeq 1 */
                    for (unsigned short i_19 = 0; i_19 < 10; i_19 += 3) 
                    {
                        arr_57 [i_11] [i_2] = (~((+(((/* implicit */int) var_2)))));
                        var_36 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) (-(var_12)))) : (1947011019257158063ULL)));
                        arr_58 [i_2] [i_11] [i_2] [i_18] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : ((~(-3155408121327918256LL)))));
                        arr_59 [i_2] [i_2] [i_17] [i_18] [4] = ((/* implicit */int) var_7);
                    }
                    arr_60 [i_2] [i_2] [i_17] [i_18] = ((((/* implicit */_Bool) var_2)) ? (12127953864990485053ULL) : (((/* implicit */unsigned long long int) var_7)));
                    arr_61 [i_2] [i_2] [i_2] [i_17] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_8)) : (var_5)));
                }
                for (unsigned short i_20 = 1; i_20 < 8; i_20 += 4) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_21 = 0; i_21 < 10; i_21 += 3) 
                    {
                        arr_66 [i_2 + 1] [8] [i_2 + 1] [i_2] [i_2] [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (-1825600510)));
                        var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) (-2147483647 - 1)))));
                        var_38 = 1952728240;
                    }
                    for (unsigned long long int i_22 = 2; i_22 < 7; i_22 += 4) /* same iter space */
                    {
                        arr_69 [6LL] [i_2] [i_17] [i_17] [i_17] = ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))));
                        var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) (~(-8189633952926125703LL))))));
                    }
                    for (unsigned long long int i_23 = 2; i_23 < 7; i_23 += 4) /* same iter space */
                    {
                        var_40 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 2194649489U)) : (var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : ((~((-2147483647 - 1)))));
                        var_41 &= ((/* implicit */signed char) (~(((/* implicit */int) var_8))));
                    }
                    var_42 = (+(((/* implicit */int) var_4)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_24 = 0; i_24 < 10; i_24 += 3) 
                    {
                        arr_76 [i_2] [i_2] [i_17] [i_20 + 1] [i_24] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-768773384) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) -1625432055268244626LL)) ? (5478959401592646508ULL) : (561850441793536ULL))) : (((/* implicit */unsigned long long int) -1300770573515489625LL)));
                        arr_77 [i_2] [i_20] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : ((-(var_7)))));
                        var_43 = ((/* implicit */unsigned short) var_5);
                    }
                    var_44 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483647)) ? (-265725468) : (((/* implicit */int) (_Bool)0))));
                }
                for (unsigned short i_25 = 0; i_25 < 10; i_25 += 3) 
                {
                    var_45 += ((/* implicit */int) (-9223372036854775807LL - 1LL));
                    var_46 = ((/* implicit */int) (~(var_0)));
                    var_47 = ((/* implicit */int) (!(((/* implicit */_Bool) 8435497323040515978LL))));
                }
                for (long long int i_26 = 0; i_26 < 10; i_26 += 3) 
                {
                    var_48 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 260046848U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (-484155939) : (((/* implicit */int) var_11))))) : (var_13)));
                    arr_82 [i_2] = ((/* implicit */int) var_10);
                    /* LoopSeq 1 */
                    for (unsigned int i_27 = 0; i_27 < 10; i_27 += 3) 
                    {
                        arr_85 [i_2] [i_2] [i_17] [i_2] [i_2] = 2698928800U;
                        var_49 ^= var_15;
                    }
                    arr_86 [i_2] [i_2] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)20973)) : (((/* implicit */int) var_11))));
                }
                arr_87 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
                arr_88 [i_2] [i_11] [i_2] [i_17] = ((/* implicit */signed char) var_0);
                var_50 |= ((/* implicit */signed char) (-((+(var_0)))));
            }
            for (unsigned int i_28 = 0; i_28 < 10; i_28 += 3) /* same iter space */
            {
                var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1322182985)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))))));
                /* LoopSeq 2 */
                for (unsigned short i_29 = 0; i_29 < 10; i_29 += 3) /* same iter space */
                {
                    arr_94 [i_2] [i_11] [8U] [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_3)) ? (6318790208719066562ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
                    arr_95 [i_2] [(short)7] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_8))));
                    var_52 = ((/* implicit */int) max((var_52), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_5)) : (7652323071114004254ULL))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_30 = 0; i_30 < 10; i_30 += 3) 
                    {
                        var_53 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (16499733054452393552ULL) : (((/* implicit */unsigned long long int) 1744757498))));
                        arr_98 [i_2] [i_11] [i_28] [i_2] [i_30] [i_29] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2145386496U)) ? (((/* implicit */unsigned long long int) var_12)) : (284806458538394427ULL)));
                        var_54 = ((/* implicit */long long int) (+(((/* implicit */int) var_11))));
                        var_55 ^= ((/* implicit */int) var_8);
                        arr_99 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_0)));
                    }
                }
                for (unsigned short i_31 = 0; i_31 < 10; i_31 += 3) /* same iter space */
                {
                    var_56 = ((/* implicit */unsigned short) var_9);
                    var_57 = ((/* implicit */unsigned int) var_10);
                    arr_103 [9ULL] [i_2] [i_11] [i_28] [i_31] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))));
                    arr_104 [i_31] [i_11] [i_28] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)44563)) ? (1325615767U) : (((/* implicit */unsigned int) 536167327))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_32 = 1; i_32 < 8; i_32 += 3) /* same iter space */
                {
                    arr_107 [i_2] [i_2] [i_2] [8ULL] = ((/* implicit */signed char) (~(2147483647)));
                    /* LoopSeq 1 */
                    for (int i_33 = 0; i_33 < 10; i_33 += 3) 
                    {
                        var_58 *= ((/* implicit */short) ((((/* implicit */_Bool) 5478959401592646508ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)44563)))))) : (((((/* implicit */_Bool) (short)18953)) ? (1111398028010341022ULL) : (((/* implicit */unsigned long long int) var_0))))));
                        arr_112 [i_2] = ((/* implicit */int) var_8);
                        arr_113 [i_2] [i_11] [i_11] = ((/* implicit */int) (~(4033345782U)));
                        var_59 ^= ((/* implicit */unsigned short) var_2);
                    }
                }
                for (unsigned int i_34 = 1; i_34 < 8; i_34 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_35 = 0; i_35 < 10; i_35 += 3) 
                    {
                        arr_120 [i_2] [(unsigned short)2] [4] [i_34] [i_35] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-102)) ? (261621514U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                        arr_121 [i_2] = ((/* implicit */unsigned short) 2147483647);
                    }
                    for (signed char i_36 = 1; i_36 < 8; i_36 += 3) 
                    {
                        arr_125 [i_28] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (536167327)));
                        var_60 = ((/* implicit */unsigned short) min((var_60), (((/* implicit */unsigned short) (~(var_0))))));
                        var_61 ^= ((((/* implicit */_Bool) var_10)) ? (var_9) : (var_9));
                        var_62 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)20973))));
                    }
                    var_63 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 133169152)) : (var_14))) : (((/* implicit */long long int) var_5))));
                }
            }
            var_64 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) 536167327)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (0LL)))));
        }
        for (short i_37 = 1; i_37 < 9; i_37 += 4) 
        {
            arr_129 [i_2] = var_5;
            arr_130 [i_2] [i_2] = ((/* implicit */int) (!((!((!(var_1)))))));
            arr_131 [i_2] [i_37 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_0)) ? (var_7) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (0U))))))) ? ((~(((((/* implicit */_Bool) (unsigned short)35625)) ? (3464222143081597329ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))))))));
        }
        arr_132 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (32767LL))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    }
    for (long long int i_38 = 0; i_38 < 24; i_38 += 4) 
    {
        var_65 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44563)) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) var_6))))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
        var_66 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 536870911ULL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? ((~(-1322182985))) : (((/* implicit */int) var_8))))));
        var_67 = ((/* implicit */int) min((var_67), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)-20371))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_14)))) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) (short)-25415))))))) : (((((/* implicit */_Bool) (~(4033345782U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_6))))) : (var_14))))))));
    }
    var_68 = (signed char)6;
}
