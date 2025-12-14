/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36174
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 += ((((/* implicit */_Bool) (~((+(((/* implicit */int) var_11))))))) ? (var_2) : (((/* implicit */unsigned long long int) (+(((long long int) 5341251652865096376ULL))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) ((var_2) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))));
            var_15 = ((/* implicit */short) (~(min((((unsigned long long int) var_0)), ((-(2994548767028606432ULL)))))));
            var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) var_12))));
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            var_17 = ((/* implicit */unsigned int) ((var_2) >= (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (11258093495281488869ULL)))));
            var_18 *= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))) / (var_7))));
            var_19 -= ((/* implicit */short) var_7);
        }
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 3) 
        {
            var_20 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (var_10))))) / (((unsigned long long int) -3723836305708678911LL))))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) | ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (var_2)))))));
            var_22 += ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) max(((_Bool)1), (var_4)))))));
        }
        for (short i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11157165451976193952ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-3723836305708678922LL)))) ^ (max((var_7), (var_7)))))) ? ((~(((/* implicit */int) var_13)))) : ((+(((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) var_6)))))))));
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                var_24 = ((/* implicit */unsigned long long int) var_12);
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) (_Bool)0);
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((var_2) <= (((/* implicit */unsigned long long int) ((((unsigned int) var_1)) | (((/* implicit */unsigned int) (~(((/* implicit */int) var_13)))))))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (short)7)) >= (((/* implicit */int) var_6))))), (var_0)))) / (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))), (((((/* implicit */unsigned long long int) var_0)) | (var_8)))))));
                        arr_25 [i_0] [i_0] [i_0] [i_8 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) min((var_1), (((/* implicit */unsigned long long int) var_13)))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) % (var_2))) ^ (((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_7))))) : (((/* implicit */unsigned long long int) ((var_4) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) var_11)))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_28 = max((((((/* implicit */_Bool) var_8)) ? (var_7) : (var_8))), ((~((~(var_8))))));
                        var_29 = ((/* implicit */_Bool) (+((+(((/* implicit */int) (short)-32667))))));
                    }
                    for (long long int i_11 = 4; i_11 < 20; i_11 += 1) 
                    {
                        arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (_Bool)1);
                        arr_33 [i_0] [i_0] [i_0] [i_0] = ((min(((+(var_7))), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_6)), (var_13)))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))));
                        arr_34 [i_0] [i_5] [i_0] [i_5] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_8))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (var_7)))))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        arr_38 [i_0] [i_4] [i_5] [i_0] [i_12] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (13368391612789083404ULL)));
                        var_30 += ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) var_11))))), (((((/* implicit */int) var_12)) % (((/* implicit */int) var_6))))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_9))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_11))))))));
                        arr_39 [i_0] [i_0] [i_5] [i_4] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_9)))))) ^ (((min((17262072979200555201ULL), (((/* implicit */unsigned long long int) (short)32650)))) / ((((_Bool)1) ? (13538613622410427199ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                        var_31 = var_4;
                    }
                    for (short i_13 = 4; i_13 < 19; i_13 += 3) 
                    {
                        var_32 *= ((/* implicit */unsigned long long int) ((((unsigned long long int) var_2)) <= (((/* implicit */unsigned long long int) ((long long int) (short)-32670)))));
                        arr_42 [i_0] [i_8 - 1] [i_13 + 3] = ((/* implicit */_Bool) var_8);
                    }
                    arr_43 [i_8] [i_5] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((max((var_8), (((/* implicit */unsigned long long int) var_13)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) >= (min((((((/* implicit */_Bool) 2994548767028606432ULL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)26)))), (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 3 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        var_33 += ((/* implicit */signed char) ((((((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)22854)))))) >= (((((/* implicit */_Bool) max((var_13), (var_5)))) ? (((((/* implicit */_Bool) 1240828054U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                        arr_46 [i_0] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_5)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) % (127U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                        arr_47 [i_0] [i_8 - 1] [i_0] [i_4] [i_0] = ((/* implicit */short) var_10);
                    }
                    /* vectorizable */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) (short)-24258)) / (((/* implicit */int) var_11)))) : (((((/* implicit */int) var_12)) % (((/* implicit */int) var_5))))));
                        var_35 = ((/* implicit */_Bool) ((short) var_3));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        var_36 = ((15434197288535031832ULL) / (2641172616074688798ULL));
                        var_37 = ((/* implicit */short) ((_Bool) ((((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) * (var_2))));
                        arr_55 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+((((+(var_8))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))))));
                    }
                }
                /* vectorizable */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    arr_59 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(var_0)));
                    var_38 = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 4) 
                    {
                        var_39 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_9))))) < (((unsigned int) var_0))));
                        var_40 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))));
                    }
                    for (signed char i_19 = 1; i_19 < 21; i_19 += 2) 
                    {
                        arr_66 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_1));
                        arr_67 [i_0] [i_4] [i_4] [i_17] [i_19 + 1] |= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (var_1))) % (var_8)));
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        arr_71 [i_4] [i_4] |= ((/* implicit */unsigned long long int) ((((long long int) var_10)) * (((/* implicit */long long int) ((((/* implicit */int) var_11)) / (((/* implicit */int) var_5)))))));
                        var_41 = ((/* implicit */unsigned long long int) max((var_41), (((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                        var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) var_10)) | (((/* implicit */int) var_12)))) : (((/* implicit */int) var_12)))))));
                        arr_72 [i_4] [i_4] [i_4] |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) ^ (var_1)));
                    }
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    arr_75 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                    var_43 = ((/* implicit */short) ((var_2) ^ (var_2)));
                }
            }
        }
        for (unsigned int i_22 = 0; i_22 < 22; i_22 += 4) 
        {
            arr_79 [i_0] = ((/* implicit */_Bool) ((long long int) var_10));
            arr_80 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))) / ((~(var_1)))))));
            /* LoopSeq 3 */
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    var_44 = ((/* implicit */signed char) ((unsigned int) var_5));
                    var_45 = ((/* implicit */long long int) max((((/* implicit */short) ((((/* implicit */_Bool) ((short) (_Bool)1))) && ((!(((/* implicit */_Bool) var_5))))))), (var_3)));
                }
                var_46 = ((min((((/* implicit */unsigned long long int) ((short) var_10))), (((((/* implicit */_Bool) var_7)) ? (0ULL) : (var_8))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(((/* implicit */int) var_4)))) < (((/* implicit */int) ((var_0) < (2845185722U)))))))));
            }
            /* vectorizable */
            for (short i_25 = 1; i_25 < 20; i_25 += 4) 
            {
                var_47 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_8)))) ? (((/* implicit */int) ((var_1) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) : (((/* implicit */int) ((var_2) <= (var_8))))));
                var_48 = ((/* implicit */short) max((var_48), (((short) var_6))));
                arr_89 [i_0] [i_0] [i_0] [i_25 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) * (((((/* implicit */int) var_12)) * (((/* implicit */int) var_9))))));
            }
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                arr_92 [i_0] [i_0] [i_22] [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) | (((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
                arr_93 [i_22] |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(15805571457634862816ULL)))) ? (((/* implicit */int) min((((/* implicit */signed char) var_11)), ((signed char)-123)))) : (((((/* implicit */int) var_5)) | (((/* implicit */int) var_4)))))), (((/* implicit */int) ((_Bool) var_9)))));
                /* LoopNest 2 */
                for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
                {
                    for (unsigned long long int i_28 = 0; i_28 < 22; i_28 += 3) 
                    {
                        {
                            var_49 = ((/* implicit */_Bool) var_12);
                            var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (((((/* implicit */_Bool) max((2641172616074688798ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (var_2))))))))));
                            var_51 = ((/* implicit */unsigned int) (((~(var_7))) < (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_13))))), (((unsigned int) var_0)))))));
                            var_52 = ((/* implicit */unsigned int) ((unsigned long long int) ((min((((/* implicit */unsigned long long int) var_12)), (var_8))) <= (min((((/* implicit */unsigned long long int) var_5)), (var_1))))));
                        }
                    } 
                } 
            }
        }
        var_53 = ((/* implicit */long long int) ((signed char) ((((unsigned long long int) var_6)) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))));
    }
    for (unsigned long long int i_29 = 0; i_29 < 14; i_29 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_30 = 2; i_30 < 13; i_30 += 3) 
        {
            for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
            {
                {
                    var_54 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) || ((!(((/* implicit */_Bool) var_0)))))) && (((/* implicit */_Bool) ((max((var_10), (var_4))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (min((((/* implicit */unsigned long long int) var_12)), (var_7))))))));
                    arr_107 [i_30] [i_30] = ((/* implicit */_Bool) (~(((/* implicit */int) ((min((var_2), (((/* implicit */unsigned long long int) var_13)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1)))))))));
                    var_55 = ((/* implicit */short) ((_Bool) ((signed char) var_12)));
                }
            } 
        } 
        arr_108 [i_29] = ((/* implicit */_Bool) ((unsigned long long int) max((((unsigned int) var_8)), (((/* implicit */unsigned int) min((((/* implicit */short) var_4)), (var_13)))))));
        arr_109 [i_29] |= max((max((min((15434197288535031832ULL), (var_7))), (((/* implicit */unsigned long long int) (!(var_4)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5182778620594570778ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (18446744073709551604ULL)))) ? (((var_10) ? (((/* implicit */int) (short)-14896)) : (((/* implicit */int) var_5)))) : (((((/* implicit */int) var_12)) | (((/* implicit */int) var_10))))))));
    }
    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
        {
            for (unsigned long long int i_34 = 3; i_34 < 18; i_34 += 4) 
            {
                {
                    arr_121 [i_32] [i_33] [i_34] [i_32] = ((/* implicit */_Bool) min(((+(((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_12)))))));
                    var_56 = ((/* implicit */short) (~(((/* implicit */int) var_3))));
                    var_57 = ((/* implicit */_Bool) ((((_Bool) (~(((/* implicit */int) (signed char)127))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) % (var_0)))))) : (((unsigned long long int) var_0))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_35 = 2; i_35 < 18; i_35 += 1) 
        {
            for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
                    {
                        for (short i_38 = 0; i_38 < 21; i_38 += 1) 
                        {
                            {
                                var_58 += ((/* implicit */short) min((((((/* implicit */int) var_3)) % (((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3)))) >= (var_1))))));
                                var_59 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) var_9))))))), ((+(((unsigned long long int) var_11))))));
                                arr_136 [i_32] [i_35] [i_36] = ((short) ((signed char) (short)4074));
                                var_60 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))), (((unsigned int) var_8))));
                                arr_137 [i_38] [i_37] [i_36] [i_35] [i_32] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) min(((short)24575), (((/* implicit */short) (_Bool)1))))) < (((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_12))))))) | ((+(((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                    var_61 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))));
                }
            } 
        } 
    }
    var_62 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) ((short) var_10))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_2))))), (((var_11) ? (var_8) : (max((((/* implicit */unsigned long long int) var_11)), (15434197288535031832ULL)))))));
}
