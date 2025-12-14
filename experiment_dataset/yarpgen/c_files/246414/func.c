/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246414
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
    var_20 -= (_Bool)0;
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_21 = ((_Bool) ((var_4) << (((/* implicit */int) (_Bool)1))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) ((((-148491617) + (2147483647))) << (((((var_12) + (8478413782711682194LL))) - (1LL)))));
                        var_23 = (-(((/* implicit */int) (_Bool)0)));
                        var_24 -= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_16))));
                        arr_10 [i_0] [(_Bool)1] [i_2] [i_0] &= ((/* implicit */int) (short)0);
                        arr_11 [i_0] [7LL] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)0))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) (_Bool)0))))) : (var_17))))));
        /* LoopNest 3 */
        for (signed char i_4 = 3; i_4 < 14; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_26 &= ((/* implicit */signed char) ((-8664950731523209470LL) >= (var_18)));
                            var_27 = ((/* implicit */long long int) (~(((/* implicit */int) var_11))));
                            var_28 = ((/* implicit */_Bool) max((var_28), ((!(((/* implicit */_Bool) arr_9 [i_4 - 1] [(signed char)12] [i_4] [i_4 - 1]))))));
                        }
                        for (signed char i_8 = 1; i_8 < 14; i_8 += 1) 
                        {
                            arr_29 [i_4] [i_0] &= ((/* implicit */long long int) (-(((/* implicit */int) var_8))));
                            arr_30 [i_4] = ((/* implicit */_Bool) ((int) var_1));
                            arr_31 [(_Bool)1] [i_4 - 1] [(_Bool)1] [i_4] [i_4 - 1] = ((/* implicit */_Bool) ((short) arr_23 [i_4 - 2] [i_8 + 1] [i_4]));
                        }
                        var_29 = ((/* implicit */short) ((var_11) ? (arr_5 [i_4 + 1] [i_4 - 3] [i_4 - 1]) : (arr_5 [i_4 - 3] [i_4 - 2] [i_4 - 2])));
                        arr_32 [i_4] [i_5] [(_Bool)1] [i_4 - 1] [4LL] [i_4] = (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) << (((arr_7 [13LL] [i_4 - 1] [i_6]) + (8691467757252138097LL)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 15; i_9 += 1) 
    {
        arr_36 [i_9] [i_9] = ((/* implicit */short) ((-996959333) & (((/* implicit */int) var_10))));
        var_30 = ((/* implicit */_Bool) ((int) 996959319));
    }
    /* LoopSeq 1 */
    for (int i_10 = 0; i_10 < 20; i_10 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
        {
            var_31 = (((~(-1714757945))) >= (((/* implicit */int) var_9)));
            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (~(-996959333))))));
        }
        /* LoopSeq 1 */
        for (int i_12 = 0; i_12 < 20; i_12 += 2) 
        {
            var_33 = (~(((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) var_13)))));
            arr_44 [i_12] = ((((/* implicit */int) (!((_Bool)1)))) << (((((var_17) + (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) var_8))))))) - (7705983658766199117LL))));
        }
        /* LoopSeq 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_42 [i_10])) & (((/* implicit */int) arr_42 [i_10])))))));
            /* LoopSeq 3 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                {
                    var_35 *= ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) (_Bool)1)))));
                    arr_54 [i_10] [i_13] [i_13] [i_15] = ((_Bool) (-(((/* implicit */int) arr_50 [i_10] [i_15 - 1] [i_10]))));
                }
                arr_55 [(short)18] [i_13] [i_13] = ((/* implicit */short) var_8);
                /* LoopSeq 2 */
                for (short i_16 = 0; i_16 < 20; i_16 += 2) 
                {
                    var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) (~(((/* implicit */int) min((arr_59 [18] [i_14] [i_13] [i_10]), ((_Bool)0)))))))));
                    var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) var_14))));
                }
                /* vectorizable */
                for (int i_17 = 2; i_17 < 19; i_17 += 1) 
                {
                    arr_62 [i_10] [i_13] [i_14] [(signed char)18] [i_13] [i_10] = ((/* implicit */_Bool) (~(((/* implicit */int) ((arr_37 [i_13]) >= (((/* implicit */long long int) -1191588568)))))));
                    arr_63 [i_10] [i_10] [i_13] [i_13] [(signed char)5] [i_17 + 1] &= ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)32767)) - (32752)))))) + (arr_43 [i_17 + 1] [2] [17LL]));
                    arr_64 [i_10] [(_Bool)1] [i_14] [i_14] [(short)17] = (~(var_3));
                    var_38 = (-(1191588568));
                }
            }
            for (int i_18 = 2; i_18 < 18; i_18 += 2) /* same iter space */
            {
                var_39 = ((((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_15))))) ? (var_12) : (((/* implicit */long long int) ((var_9) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)0))))))) + (9223372036854775807LL))) << (((((((int) var_10)) + (117))) - (18))));
                var_40 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0)))))))) << (((((/* implicit */int) ((short) ((int) arr_37 [i_10])))) - (15119)))));
                var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) ((((var_12) + (9223372036854775807LL))) << ((((((+(arr_66 [i_13] [i_13] [i_18 + 2] [i_18 - 2]))) + (1373744998367961107LL))) - (60LL))))))));
                /* LoopSeq 1 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_20 = 0; i_20 < 20; i_20 += 1) 
                    {
                        var_42 += (+(((/* implicit */int) ((_Bool) ((var_19) ? (2025116285597934414LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                        var_43 = var_1;
                        arr_74 [i_19] [i_19] [i_19] [i_19] [9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_2)) << (((/* implicit */int) var_19)))) << (((((/* implicit */int) arr_40 [9LL])) << (((9097879313144846465LL) - (9097879313144846455LL)))))))) ? (((-7189632372296912513LL) & (((/* implicit */long long int) 996959333)))) : (((((((long long int) -822581054079365837LL)) + (9223372036854775807LL))) << (((((1048575LL) << (((/* implicit */int) (_Bool)0)))) - (1048575LL)))))));
                        var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) (~(((/* implicit */int) ((signed char) (_Bool)1))))))));
                        var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) -996959333))));
                    }
                    var_46 += ((/* implicit */long long int) var_14);
                    arr_75 [i_10] [i_19] = ((/* implicit */_Bool) (((-(3259662513419778094LL))) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                }
            }
            for (int i_21 = 2; i_21 < 18; i_21 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                {
                    var_47 = ((/* implicit */_Bool) arr_70 [(signed char)5] [i_13] [i_21] [i_22 - 1] [i_22 - 1] [i_22 - 1]);
                    var_48 = ((/* implicit */signed char) (~(((long long int) var_0))));
                    arr_81 [i_10] [i_22] [i_21 - 1] [i_22 - 1] [i_22] = ((_Bool) ((((/* implicit */int) (_Bool)1)) | (((((/* implicit */int) var_13)) & (1714757944)))));
                }
                var_49 -= ((/* implicit */int) ((((/* implicit */int) var_2)) >= (((0) << (((((((/* implicit */long long int) ((/* implicit */int) var_15))) + (var_7))) - (3775040022452274480LL)))))));
                /* LoopNest 2 */
                for (long long int i_23 = 0; i_23 < 20; i_23 += 2) 
                {
                    for (int i_24 = 4; i_24 < 19; i_24 += 2) 
                    {
                        {
                            var_50 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_77 [i_21 - 2] [i_21 - 2] [i_21 - 2])) ? (((/* implicit */int) arr_40 [i_24 - 1])) : (((/* implicit */int) arr_56 [i_24 - 3] [i_21 + 1] [i_21 - 1] [i_23]))))) & (((((/* implicit */long long int) -1191588568)) & (var_7)))));
                            var_51 = ((/* implicit */_Bool) min((((/* implicit */int) min(((_Bool)1), (var_2)))), ((~(((/* implicit */int) arr_71 [i_21] [i_21 - 1] [i_21]))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_25 = 0; i_25 < 20; i_25 += 1) 
                {
                    var_52 = ((/* implicit */_Bool) max((((((/* implicit */int) var_2)) << ((((-(1191588568))) + (1191588597))))), (((/* implicit */int) arr_57 [i_25] [i_21 + 1] [i_13] [i_10] [i_10] [i_10]))));
                    var_53 *= ((/* implicit */int) ((((((arr_79 [i_21] [i_13] [i_21] [i_25]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7611584183934857881LL))) << (((/* implicit */int) var_19)))) >= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)-64))))));
                }
            }
        }
        /* vectorizable */
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
            {
                var_54 += ((/* implicit */_Bool) ((((/* implicit */int) var_15)) + (((/* implicit */int) var_10))));
                arr_93 [(signed char)14] [(signed char)12] [(signed char)12] [i_10] |= ((_Bool) ((var_18) / (((/* implicit */long long int) ((/* implicit */int) (short)-5919)))));
            }
            for (signed char i_28 = 1; i_28 < 17; i_28 += 2) 
            {
                var_55 &= ((/* implicit */long long int) ((((/* implicit */int) var_19)) << (((/* implicit */int) (!(((/* implicit */_Bool) 278279359)))))));
                /* LoopSeq 3 */
                for (long long int i_29 = 1; i_29 < 19; i_29 += 2) 
                {
                    arr_98 [(signed char)4] [(signed char)12] [i_28] [i_26] = ((/* implicit */_Bool) ((437220567) << (((/* implicit */int) var_15))));
                    /* LoopSeq 4 */
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        var_56 = ((/* implicit */short) ((signed char) arr_100 [i_10] [i_26] [i_29 - 1] [i_29 + 1] [i_30] [i_30] [i_30]));
                        var_57 = (!(((_Bool) (signed char)-64)));
                        var_58 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (-278279359) : (((/* implicit */int) (short)16147))));
                        var_59 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) 3259662513419778104LL))) ? (((/* implicit */int) ((_Bool) arr_86 [i_10] [i_26] [(_Bool)1] [(_Bool)0] [i_30]))) : (((/* implicit */int) ((_Bool) 5289227712903373685LL)))));
                    }
                    for (int i_31 = 0; i_31 < 20; i_31 += 2) /* same iter space */
                    {
                        arr_104 [i_10] [i_26] [i_26] [14] [i_29 + 1] [i_10] = ((((/* implicit */int) ((signed char) var_9))) >= (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)91)))));
                        arr_105 [i_26] [i_26] = ((/* implicit */short) ((arr_70 [i_28 + 1] [i_29 - 1] [7LL] [i_28 + 1] [i_29] [i_29 + 1]) + (((/* implicit */long long int) ((/* implicit */int) ((-1191588568) >= (((/* implicit */int) var_10))))))));
                        var_60 = ((/* implicit */_Bool) min((var_60), ((!(((/* implicit */_Bool) -3928571125848766807LL))))));
                        var_61 = ((/* implicit */short) max((var_61), (((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_83 [i_10] [i_28] [(_Bool)1] [i_29 + 1] [i_29 - 1])))))));
                    }
                    for (int i_32 = 0; i_32 < 20; i_32 += 2) /* same iter space */
                    {
                        var_62 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_84 [i_29 + 1] [i_29 + 1] [i_29] [i_29 + 1] [i_29 - 1] [i_28 + 2] [i_26])) ? (((/* implicit */int) (short)5908)) : (1960261733)));
                        var_63 = ((/* implicit */long long int) (~(((/* implicit */int) var_13))));
                    }
                    for (int i_33 = 0; i_33 < 20; i_33 += 2) /* same iter space */
                    {
                        arr_112 [i_10] [5] [i_28 + 1] [i_28 - 1] [i_26] [0LL] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) << (((var_3) - (1009616621)))));
                        var_64 = (-(((/* implicit */int) var_13)));
                    }
                    var_65 = ((((/* implicit */int) ((var_4) >= (((/* implicit */int) (_Bool)1))))) + (((((-2026973614) + (2147483647))) << (((-1960261722) + (1960261725))))));
                }
                for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                {
                    var_66 = (-(var_12));
                    /* LoopSeq 2 */
                    for (int i_35 = 0; i_35 < 20; i_35 += 1) 
                    {
                        var_67 -= var_8;
                        var_68 -= ((/* implicit */_Bool) ((arr_79 [i_10] [i_26] [16LL] [(_Bool)1]) ? ((-(((/* implicit */int) (short)5908)))) : (1191588567)));
                        var_69 = ((((((/* implicit */int) (signed char)-64)) + (2147483647))) << (((((((/* implicit */int) (signed char)63)) << (((arr_114 [i_10] [(_Bool)1] [i_26] [i_28 + 1] [i_34] [(short)14]) + (568931995))))) - (8257536))));
                    }
                    for (_Bool i_36 = 1; i_36 < 1; i_36 += 1) 
                    {
                        var_70 = ((/* implicit */short) ((long long int) var_0));
                        var_71 = var_15;
                        var_72 = ((/* implicit */signed char) ((long long int) var_13));
                    }
                }
                for (_Bool i_37 = 0; i_37 < 0; i_37 += 1) 
                {
                    var_73 = ((/* implicit */long long int) min((var_73), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((arr_45 [i_28 - 1] [i_28 + 1] [i_28 - 1]) - (7925894955073150539LL))))))));
                    var_74 -= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) arr_53 [i_10] [i_26])))))));
                    /* LoopSeq 3 */
                    for (_Bool i_38 = 0; i_38 < 0; i_38 += 1) 
                    {
                        var_75 -= ((/* implicit */signed char) (((((-(((/* implicit */int) var_13)))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) (short)-8170)))))));
                        var_76 = ((/* implicit */signed char) ((short) arr_91 [i_37] [i_28 - 1] [i_28 + 2] [i_28 + 2]));
                    }
                    for (short i_39 = 0; i_39 < 20; i_39 += 1) 
                    {
                        var_77 = ((/* implicit */_Bool) (-(7189632372296912512LL)));
                        arr_131 [i_28 + 3] [i_28 - 1] [i_26] [i_28 - 1] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-11))));
                    }
                    for (long long int i_40 = 1; i_40 < 18; i_40 += 4) 
                    {
                        var_78 = ((/* implicit */_Bool) ((var_12) + (((/* implicit */long long int) (~(((/* implicit */int) (signed char)111)))))));
                        var_79 = ((_Bool) 5295259161516721669LL);
                    }
                    var_80 = ((/* implicit */_Bool) (-((-(var_18)))));
                }
                /* LoopSeq 2 */
                for (long long int i_41 = 4; i_41 < 17; i_41 += 1) 
                {
                    var_81 = ((/* implicit */signed char) var_11);
                    var_82 = ((/* implicit */_Bool) ((((/* implicit */int) var_14)) & ((-(var_3)))));
                    arr_138 [i_10] [i_10] [i_10] [i_26] = ((/* implicit */short) arr_56 [i_10] [i_26] [i_28 + 1] [i_41]);
                    /* LoopSeq 2 */
                    for (signed char i_42 = 0; i_42 < 20; i_42 += 1) 
                    {
                        var_83 *= ((/* implicit */signed char) ((_Bool) -27));
                        var_84 = ((/* implicit */short) min((var_84), (((/* implicit */short) ((((((/* implicit */int) var_14)) << (((var_12) + (8478413782711682218LL))))) << (((/* implicit */int) var_0)))))));
                        arr_141 [i_26] [5LL] [i_28] [i_42] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1))));
                    }
                    for (_Bool i_43 = 0; i_43 < 1; i_43 += 1) 
                    {
                        var_85 = ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)0)));
                        var_86 = ((/* implicit */_Bool) min((var_86), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_94 [i_41 + 2] [i_28 + 1] [i_28 + 1] [i_28 + 1])) : (((/* implicit */int) (signed char)87)))))));
                    }
                }
                for (short i_44 = 0; i_44 < 20; i_44 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_45 = 1; i_45 < 1; i_45 += 1) /* same iter space */
                    {
                        var_87 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (-7769105969282271419LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
                        var_88 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-15)) + (((/* implicit */int) arr_123 [i_28 + 2] [i_28 + 1] [i_28 + 2] [i_28 - 1]))));
                        arr_152 [i_26] [i_26] [i_26] [i_28 + 1] [i_26] [i_45 - 1] = ((/* implicit */_Bool) (-(var_17)));
                    }
                    for (_Bool i_46 = 1; i_46 < 1; i_46 += 1) /* same iter space */
                    {
                        var_89 = ((_Bool) var_8);
                        arr_155 [i_26] [i_26] [i_26] [i_26] [i_26] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-8170))) & (var_12)));
                    }
                    var_90 = ((/* implicit */_Bool) min((var_90), (((/* implicit */_Bool) ((3144719156351894978LL) & (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                    var_91 = ((/* implicit */_Bool) ((signed char) (_Bool)1));
                }
                var_92 = (-(5289227712903373685LL));
            }
            arr_156 [8] [i_26] [i_26] = ((/* implicit */long long int) (+(((/* implicit */int) arr_144 [i_26] [i_26]))));
            var_93 = ((/* implicit */_Bool) (~(0LL)));
        }
        var_94 = ((/* implicit */short) max((var_94), (((/* implicit */short) ((var_3) << (((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)20)))) - (20))))))));
        var_95 = ((/* implicit */long long int) (_Bool)1);
    }
    var_96 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (1191588568)))))) ? (((/* implicit */int) max((min((((/* implicit */signed char) (_Bool)1)), ((signed char)-16))), (((/* implicit */signed char) var_8))))) : (((((((/* implicit */int) (_Bool)0)) << (((var_12) + (8478413782711682206LL))))) & (((/* implicit */int) ((_Bool) var_9)))))));
    var_97 -= ((/* implicit */_Bool) var_10);
}
