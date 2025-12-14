/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247330
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
    var_11 = ((/* implicit */signed char) max((((/* implicit */int) var_10)), ((-(((/* implicit */int) var_2))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-2147483647 - 1))) & (3U))))));
            var_13 = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)65524)))));
            var_14 = ((/* implicit */unsigned short) arr_3 [i_0] [i_1]);
            /* LoopNest 2 */
            for (signed char i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_15 = ((((/* implicit */int) ((unsigned short) (unsigned short)11))) * (((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */int) (((-2147483647 - 1)) == (((/* implicit */int) (unsigned short)65524))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 12216539857369964205ULL))))))));
                        var_16 = ((/* implicit */long long int) (~(max((((/* implicit */int) max(((unsigned short)31), (((/* implicit */unsigned short) (signed char)114))))), (2147483647)))));
                    }
                } 
            } 
        }
        for (signed char i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) arr_0 [18ULL] [i_4]))))) ? (((long long int) arr_7 [i_0] [i_4] [i_0] [i_4])) : (((long long int) (unsigned short)45351))));
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 17; i_5 += 2) 
            {
                for (unsigned short i_6 = 1; i_6 < 18; i_6 += 4) 
                {
                    {
                        var_18 += ((/* implicit */unsigned long long int) (unsigned short)5);
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (((+(((((/* implicit */int) arr_6 [i_6])) + (((/* implicit */int) arr_2 [i_5 + 4])))))) - (((((/* implicit */int) var_1)) + (((/* implicit */int) (unsigned short)65532)))))))));
                        arr_18 [i_5] = ((/* implicit */unsigned long long int) (unsigned short)20);
                    }
                } 
            } 
        }
        for (signed char i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) 1863517449U))));
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_1)), ((unsigned short)65505))))) * (((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65519))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_2 [(_Bool)1]))))))))));
        }
        var_22 -= ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) arr_14 [20ULL] [i_0] [20ULL]))))), (((((/* implicit */unsigned long long int) var_0)) | (var_3))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [18U])) < (((((/* implicit */_Bool) (unsigned short)32)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(_Bool)1]))) : (18446744073709551604ULL)))))))));
        /* LoopSeq 3 */
        for (long long int i_8 = 0; i_8 < 21; i_8 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_9 = 1; i_9 < 19; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 1; i_10 < 20; i_10 += 1) 
                {
                    for (signed char i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        {
                            var_23 |= ((/* implicit */unsigned short) max((max((max((((/* implicit */unsigned int) (unsigned short)8)), (2431449828U))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((-6336481212025563936LL) + (6336481212025563957LL)))))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_9]))) == ((-(arr_9 [12] [i_8] [i_8] [i_8] [i_8] [i_11]))))))));
                            var_24 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)3646)) == (((/* implicit */int) arr_1 [20LL])))) ? (((((/* implicit */_Bool) arr_3 [i_11] [i_11])) ? (13U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))))) != (((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_11] [14ULL] [i_9 + 2]))) % (max((((/* implicit */long long int) 4294967295U)), (arr_4 [i_10])))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */long long int) var_2);
            }
            var_26 = ((((((/* implicit */_Bool) max(((signed char)5), ((signed char)117)))) ? ((+(var_3))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [(unsigned short)15]))))))) | (((/* implicit */unsigned long long int) (~(var_0)))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((unsigned int) var_3))) / ((((+(arr_3 [i_0] [i_12]))) & (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0]))))))))))));
            var_28 = ((/* implicit */unsigned short) (_Bool)1);
        }
        /* vectorizable */
        for (int i_13 = 1; i_13 < 20; i_13 += 3) 
        {
            arr_38 [i_0] &= ((/* implicit */unsigned short) arr_17 [i_0] [i_0] [i_0] [i_0]);
            /* LoopSeq 4 */
            for (unsigned short i_14 = 0; i_14 < 21; i_14 += 4) 
            {
                var_29 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_13 - 1])) ? (((/* implicit */int) arr_0 [i_13 + 1] [i_13 + 1])) : (((/* implicit */int) arr_0 [i_13 - 1] [i_13]))));
                var_30 -= ((/* implicit */long long int) var_2);
            }
            for (unsigned short i_15 = 3; i_15 < 20; i_15 += 4) 
            {
                var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_0] [i_0])) : (var_7)))) ? (((long long int) arr_8 [i_15] [i_13] [i_13] [(unsigned short)18])) : (((/* implicit */long long int) var_9)))))));
                var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)29)) * (((/* implicit */int) var_8))));
                /* LoopNest 2 */
                for (long long int i_16 = 0; i_16 < 21; i_16 += 3) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 4) 
                    {
                        {
                            arr_51 [i_15] [18LL] [i_16] [i_16] [i_15] [i_13] [i_15] = ((/* implicit */int) arr_44 [i_15 - 1] [i_15] [i_15]);
                            var_33 -= ((/* implicit */signed char) arr_16 [i_0] [i_0]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_18 = 0; i_18 < 21; i_18 += 1) 
                {
                    for (long long int i_19 = 3; i_19 < 20; i_19 += 4) 
                    {
                        {
                            arr_58 [i_13] [i_15] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)17251)) ? (745260871) : (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) var_8))));
                            var_34 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (26U)));
                            var_35 |= ((/* implicit */unsigned long long int) (_Bool)1);
                            var_36 += ((/* implicit */unsigned long long int) (-(3608102089264743476LL)));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_20 = 3; i_20 < 17; i_20 += 4) /* same iter space */
            {
                var_37 = ((/* implicit */unsigned int) ((unsigned long long int) (-(((/* implicit */int) (signed char)24)))));
                var_38 = ((/* implicit */_Bool) min((var_38), ((!(((/* implicit */_Bool) var_3))))));
                /* LoopNest 2 */
                for (long long int i_21 = 0; i_21 < 21; i_21 += 4) 
                {
                    for (unsigned short i_22 = 0; i_22 < 21; i_22 += 4) 
                    {
                        {
                            arr_66 [i_0] [i_13] [i_20] [i_0] [i_20] = ((/* implicit */signed char) (unsigned short)1767);
                            var_39 ^= ((/* implicit */signed char) (~(((/* implicit */int) arr_46 [i_20 - 3] [i_13 - 1] [i_13 + 1] [i_22]))));
                            arr_67 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((signed char) (+(4294967293U))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_23 = 3; i_23 < 17; i_23 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        {
                            arr_76 [i_0] [i_0] [14ULL] [i_0] [i_0] &= ((/* implicit */unsigned short) var_7);
                            var_40 &= ((/* implicit */unsigned short) -745260872);
                            arr_77 [i_23] [i_13 - 1] [i_13 - 1] [i_13] [i_13] = ((/* implicit */int) (-(((arr_57 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24]) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            arr_78 [i_23] [0LL] [0LL] = var_5;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_26 = 0; i_26 < 21; i_26 += 4) 
                {
                    for (signed char i_27 = 1; i_27 < 20; i_27 += 4) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_30 [i_23]))));
                            var_42 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)23987)) <= (((/* implicit */int) (signed char)-117))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_28 = 1; i_28 < 20; i_28 += 1) 
                {
                    for (unsigned short i_29 = 3; i_29 < 19; i_29 += 1) 
                    {
                        {
                            var_43 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_81 [i_0] [i_13] [i_23] [i_29 - 3])) : (var_3)))) ? ((-(11454988437387258115ULL))) : (((/* implicit */unsigned long long int) var_9)));
                            var_44 = ((/* implicit */signed char) ((int) (unsigned short)23467));
                        }
                    } 
                } 
                var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)3))))) <= (((long long int) var_9)))))));
            }
            arr_89 [i_13 + 1] &= ((/* implicit */unsigned long long int) arr_48 [(unsigned short)6] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]);
        }
    }
    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) /* same iter space */
    {
        var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) 4503597479886848LL))));
        /* LoopNest 2 */
        for (signed char i_31 = 4; i_31 < 19; i_31 += 4) 
        {
            for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
            {
                {
                    var_47 += ((/* implicit */unsigned short) var_6);
                    /* LoopNest 2 */
                    for (unsigned short i_33 = 0; i_33 < 21; i_33 += 4) 
                    {
                        for (unsigned long long int i_34 = 0; i_34 < 21; i_34 += 4) 
                        {
                            {
                                var_48 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)3)) || (((/* implicit */_Bool) 4503597479886848LL)))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_5))));
                                var_49 = (_Bool)1;
                                var_50 ^= ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)62105));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_35 = 2; i_35 < 19; i_35 += 1) 
                    {
                        for (int i_36 = 0; i_36 < 21; i_36 += 4) 
                        {
                            {
                                var_51 = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((((/* implicit */int) var_10)) & (((/* implicit */int) var_5))))))) > (((long long int) arr_49 [i_36] [i_35 + 1] [i_31 + 1] [i_30] [i_30] [i_30]))));
                                arr_109 [i_36] [i_32] [i_35] [i_32] [i_32] [15LL] = ((/* implicit */signed char) ((var_10) ? (((/* implicit */int) arr_30 [i_32])) : (((/* implicit */int) ((((/* implicit */int) (signed char)104)) <= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_37 = 0; i_37 < 21; i_37 += 1) 
                    {
                        for (unsigned long long int i_38 = 0; i_38 < 21; i_38 += 4) 
                        {
                            {
                                var_52 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) min((var_0), (((/* implicit */long long int) var_4)))))) == (((/* implicit */int) (((+(((/* implicit */int) var_10)))) == (((((/* implicit */int) (unsigned short)3431)) << (((var_0) - (1569018466674950885LL))))))))));
                                var_53 |= ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (var_0)))), (min((5663556478470551855ULL), (((/* implicit */unsigned long long int) (signed char)-94)))))) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_84 [i_31] [i_31 - 4] [i_32] [i_37]))) / ((-(var_0))))))));
                                arr_117 [i_38] [i_31] &= ((/* implicit */signed char) (unsigned short)17);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_72 [i_30] [i_30] [9U] [i_30]), (((/* implicit */unsigned short) ((576460752303422464LL) == (((/* implicit */long long int) ((/* implicit */int) arr_105 [(unsigned short)20] [8] [i_30] [i_30]))))))))) ? (((/* implicit */unsigned long long int) max((-1926727809813463975LL), (max((((/* implicit */long long int) var_1)), (var_0)))))) : (min((((/* implicit */unsigned long long int) arr_13 [i_30])), (var_7)))));
        var_55 = ((/* implicit */signed char) max((var_55), (((/* implicit */signed char) var_9))));
    }
    var_56 = ((/* implicit */signed char) var_3);
    /* LoopNest 3 */
    for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
    {
        for (long long int i_40 = 0; i_40 < 12; i_40 += 2) 
        {
            for (unsigned short i_41 = 0; i_41 < 12; i_41 += 4) 
            {
                {
                    arr_125 [i_39] [i_40] [i_40] [i_41] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (4294967253U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? ((+(((/* implicit */int) (unsigned short)62115)))) : (((/* implicit */int) arr_115 [i_39] [i_39] [i_39] [i_39] [i_39])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_42 = 0; i_42 < 12; i_42 += 4) 
                    {
                        arr_130 [i_39] [i_40] [i_39] [i_40] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(var_9)))) >= (((long long int) arr_96 [i_42] [i_42]))));
                        var_57 = ((/* implicit */unsigned short) 18446744073709551611ULL);
                        arr_131 [i_40] [(signed char)7] [4LL] [i_40] [i_40] [i_40] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_39] [(unsigned short)6] [(unsigned short)6] [i_41])) == (((/* implicit */int) var_4))));
                        var_58 = ((/* implicit */long long int) (unsigned short)3405);
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_43 = 0; i_43 < 1; i_43 += 1) 
                    {
                        var_59 = 1706831441882262394ULL;
                        var_60 = ((/* implicit */unsigned short) max((var_60), (((/* implicit */unsigned short) var_9))));
                        var_61 = ((/* implicit */unsigned long long int) max((var_61), (min((((((/* implicit */_Bool) (unsigned short)5010)) ? (arr_124 [i_39] [i_40] [i_41] [i_40]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105))))), (((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) arr_2 [i_39]))))))))));
                        var_62 = ((/* implicit */unsigned int) min((var_62), (((/* implicit */unsigned int) min((max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)8814))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_9)) : (var_0))))), (((/* implicit */long long int) arr_53 [i_39] [i_43])))))));
                    }
                    var_63 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_10)), (((unsigned long long int) ((arr_25 [i_41] [4U] [i_41] [i_41] [i_41] [i_41]) / (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_39]))))))));
                    var_64 = ((((/* implicit */long long int) max((((((/* implicit */int) var_1)) + (((/* implicit */int) arr_85 [i_40] [i_41])))), (((/* implicit */int) (unsigned short)65535))))) - (((((/* implicit */long long int) ((/* implicit */int) arr_123 [i_39] [i_39] [i_39] [i_39]))) / (max((((/* implicit */long long int) (unsigned short)60525)), (var_0))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_44 = 1; i_44 < 1; i_44 += 1) 
    {
        for (unsigned short i_45 = 2; i_45 < 15; i_45 += 4) 
        {
            for (signed char i_46 = 0; i_46 < 17; i_46 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_47 = 0; i_47 < 17; i_47 += 3) 
                    {
                        for (long long int i_48 = 2; i_48 < 15; i_48 += 4) 
                        {
                            {
                                var_65 = ((/* implicit */int) (-(max((-2676700862139734382LL), (((/* implicit */long long int) (unsigned short)33597))))));
                                var_66 = ((/* implicit */int) max((var_66), (((int) ((((/* implicit */unsigned long long int) var_9)) - (max((var_7), (((/* implicit */unsigned long long int) var_2)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_49 = 0; i_49 < 17; i_49 += 4) 
                    {
                        for (unsigned short i_50 = 3; i_50 < 13; i_50 += 3) 
                        {
                            {
                                arr_153 [i_44] [i_50] [i_50] [i_49] [i_50] = ((/* implicit */signed char) var_8);
                                var_67 = ((/* implicit */signed char) var_10);
                                var_68 = ((/* implicit */unsigned short) max((var_68), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -843146094)))) <= ((+(arr_143 [i_44] [i_44] [i_44 - 1] [i_44] [i_44]))))))) / (min((max((((/* implicit */unsigned long long int) -843146091)), (var_7))), (((/* implicit */unsigned long long int) max((arr_25 [i_44] [i_44] [i_45] [i_46] [i_49] [i_50]), (((/* implicit */long long int) arr_65 [i_44] [(signed char)17] [(signed char)17] [i_49] [i_50]))))))))))));
                            }
                        } 
                    } 
                    arr_154 [i_44] [i_44] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_141 [i_44 - 1]))));
                    var_69 = ((/* implicit */long long int) min((var_69), (((/* implicit */long long int) (+((-(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_35 [i_44 - 1])))))))))));
                }
            } 
        } 
    } 
}
