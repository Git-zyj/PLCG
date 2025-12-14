/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207316
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        var_12 = 1107963330U;
                        arr_12 [i_0 + 1] [i_0 - 1] [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) (signed char)-1)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            var_13 -= ((/* implicit */_Bool) min((((/* implicit */int) min((var_4), (arr_0 [i_4])))), ((+(((/* implicit */int) ((3187003955U) > (3187003992U))))))));
                            arr_15 [i_0] [i_4] [i_4] = ((/* implicit */signed char) var_11);
                            var_14 = arr_7 [i_0];
                            arr_16 [i_0] [i_1] [i_0] [i_3] [i_3] [i_4] = (((((!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])))) ? ((~(799896384U))) : (arr_9 [(_Bool)1] [i_0 + 1] [i_2 + 2]))) <= (arr_2 [i_0 + 1] [i_2 + 3]));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned int) var_5);
                        var_16 = (!(((/* implicit */_Bool) var_6)));
                        var_17 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) var_5))))));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) == (3495070911U)));
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((1444636191U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) var_3))));
                    }
                    var_19 = ((/* implicit */_Bool) min((((/* implicit */int) ((signed char) var_11))), ((~(((/* implicit */int) arr_4 [i_0 + 1] [i_2 + 3]))))));
                }
                for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    var_20 &= ((/* implicit */unsigned int) (_Bool)0);
                    var_21 ^= var_0;
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_22 &= ((max((max(((_Bool)1), (var_5))), (var_5))) ? (2196985511U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_4 [i_0 - 1] [i_7]))))));
                        var_23 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) max((arr_13 [i_0] [i_0] [i_6]), (arr_22 [(signed char)13] [i_1] [i_1])))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_9)))))) ? ((~(1043227491U))) : (3603733338U));
                        var_24 = ((/* implicit */unsigned int) var_3);
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 2; i_9 < 18; i_9 += 1) 
                        {
                            var_25 = arr_9 [i_1] [i_1] [i_6];
                            var_26 = ((/* implicit */_Bool) max((var_26), (((_Bool) ((((/* implicit */_Bool) (signed char)-85)) && (arr_7 [i_1]))))));
                            var_27 = ((/* implicit */signed char) var_6);
                        }
                        arr_31 [i_0 + 1] [i_1] [i_1] [(_Bool)1] [i_8] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))));
                    }
                }
                var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) max((var_10), (((((/* implicit */_Bool) (signed char)85)) && (var_3))))))));
            }
        } 
    } 
    var_29 |= (!(((/* implicit */_Bool) max(((+(var_6))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_2)))))));
    /* LoopSeq 3 */
    for (unsigned int i_10 = 1; i_10 < 12; i_10 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_11 = 0; i_11 < 14; i_11 += 2) 
        {
            arr_40 [10U] = ((/* implicit */_Bool) var_1);
            var_30 = (_Bool)1;
            var_31 += ((/* implicit */signed char) (_Bool)1);
            arr_41 [i_10 + 2] = ((/* implicit */signed char) (((~(2097981785U))) * (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
            var_32 = ((/* implicit */unsigned int) max((var_32), (((((((/* implicit */_Bool) 2224193134U)) && ((_Bool)1))) ? (arr_2 [i_10] [i_10]) : (((((/* implicit */_Bool) 2097981784U)) ? (0U) : (4294967292U)))))));
        }
        /* vectorizable */
        for (unsigned int i_12 = 0; i_12 < 14; i_12 += 1) /* same iter space */
        {
            var_33 ^= ((/* implicit */unsigned int) arr_7 [i_10 - 1]);
            var_34 ^= ((unsigned int) (_Bool)1);
        }
        for (unsigned int i_13 = 0; i_13 < 14; i_13 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                {
                    {
                        arr_50 [(_Bool)1] [i_13] = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) (_Bool)1)), ((~(5U)))))));
                        arr_51 [i_10] [i_13] [i_13] = ((/* implicit */unsigned int) ((_Bool) ((_Bool) 2615805581U)));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_16 = 0; i_16 < 14; i_16 += 4) 
            {
                for (unsigned int i_17 = 0; i_17 < 14; i_17 += 3) 
                {
                    for (unsigned int i_18 = 0; i_18 < 14; i_18 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (3187003967U)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [i_10])) : (((/* implicit */int) arr_45 [i_10] [(_Bool)1] [i_10]))))))) && (((((/* implicit */unsigned int) ((/* implicit */int) ((var_3) && (arr_44 [i_13] [i_13] [i_13]))))) <= (((unsigned int) arr_3 [i_10]))))));
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 25U)))))))) ? (max((((/* implicit */unsigned int) ((signed char) var_9))), ((~(2097981794U))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (2097981803U)))));
                            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(var_0))))) / (arr_42 [i_10] [i_13])))) ? ((~(var_11))) : (var_11)));
                        }
                    } 
                } 
            } 
            var_38 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_28 [i_10] [i_10] [i_10] [i_10] [i_13]))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_10] [i_13] [i_10] [i_10 + 2] [i_10] [i_13]))))))));
        }
        var_39 = min((((/* implicit */unsigned int) arr_6 [i_10] [i_10 + 2] [i_10] [i_10])), (var_11));
    }
    for (unsigned int i_19 = 1; i_19 < 12; i_19 += 2) /* same iter space */
    {
        var_40 &= (!(arr_54 [i_19 + 1] [(_Bool)1] [0U] [i_19]));
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) /* same iter space */
        {
            arr_65 [i_19] [i_20] [i_19] = ((/* implicit */signed char) var_3);
            var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (422889458U))))));
            var_42 = ((/* implicit */unsigned int) (!(arr_63 [i_20])));
            var_43 |= (-((+(arr_25 [12U]))));
        }
        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) /* same iter space */
        {
            arr_69 [i_19] [i_19] = var_0;
            arr_70 [i_19] [i_19] = var_8;
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_22 = 0; i_22 < 14; i_22 += 3) 
            {
                var_44 &= ((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_19] [i_19]))));
                var_45 = ((((/* implicit */_Bool) ((signed char) arr_73 [i_19 + 2] [i_19 + 2]))) && (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1))))));
            }
            /* LoopNest 3 */
            for (unsigned int i_23 = 0; i_23 < 14; i_23 += 4) 
            {
                for (signed char i_24 = 3; i_24 < 12; i_24 += 3) 
                {
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        {
                            arr_83 [i_19] [i_19] [i_19] [i_19] = ((/* implicit */unsigned int) ((_Bool) 3872077836U));
                            arr_84 [i_19 + 2] [i_21] [i_23] [i_24 - 1] [i_25] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))) | (422889448U)));
                            var_46 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)85))) > (var_2))))))), (min((((/* implicit */unsigned int) (_Bool)0)), (max((var_9), (98304U)))))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_27 = 0; i_27 < 14; i_27 += 3) 
            {
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    {
                        var_47 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_5)), ((signed char)0)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (var_11))))))), (((((/* implicit */_Bool) ((1U) & (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) var_7)))))));
                        arr_92 [i_19] [i_19] [i_19] [i_27] [(_Bool)0] = ((/* implicit */signed char) ((min((arr_4 [i_19 + 2] [i_19 + 1]), (arr_4 [i_19 - 1] [i_19 + 1]))) ? (((/* implicit */int) ((_Bool) arr_4 [i_19 - 1] [i_19 - 1]))) : (((/* implicit */int) (!(arr_4 [i_19 + 2] [i_19 + 2]))))));
                    }
                } 
            } 
            var_48 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) min(((signed char)-36), (((/* implicit */signed char) arr_81 [i_26] [i_26] [i_19] [i_19] [i_19] [i_19]))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
        }
        /* vectorizable */
        for (unsigned int i_29 = 1; i_29 < 13; i_29 += 2) 
        {
            arr_96 [i_29] = ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_39 [i_29])))) | (var_2));
            arr_97 [(signed char)0] &= (-(arr_42 [i_19 + 2] [12U]));
            var_49 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)41))));
            var_50 ^= ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))));
            arr_98 [i_29] [i_29 + 1] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
        }
        var_51 = ((/* implicit */unsigned int) min((var_51), (((/* implicit */unsigned int) max(((-(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) min((arr_71 [i_19 + 1] [i_19 + 2] [i_19 + 1]), (var_4)))))))));
    }
    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_31 = 0; i_31 < 11; i_31 += 1) 
        {
            arr_105 [i_30] [i_31] [i_30] = ((/* implicit */unsigned int) var_5);
            var_52 = ((/* implicit */_Bool) arr_75 [10U] [i_31] [i_30] [i_30]);
            var_53 = (!((!(((/* implicit */_Bool) 23U)))));
            var_54 = 2461045458U;
        }
        for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
        {
            var_55 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 3872077862U)) ? (3872077847U) : (1974145626U))) - (max((arr_94 [i_32] [i_32]), (((/* implicit */unsigned int) ((_Bool) arr_89 [i_32] [i_32] [i_32] [i_32])))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
            {
                var_56 = ((/* implicit */signed char) 51942057U);
                var_57 ^= var_9;
            }
            for (signed char i_34 = 2; i_34 < 8; i_34 += 3) 
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_35 = 0; i_35 < 11; i_35 += 3) /* same iter space */
                {
                    var_58 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)15)) <= (((/* implicit */int) var_0))));
                    arr_114 [i_32] [(_Bool)1] [i_30] [i_32] [i_32] = ((_Bool) (~(var_2)));
                    var_59 ^= ((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)(-127 - 1))))) * (((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))));
                    var_60 = ((((((/* implicit */_Bool) 51942067U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_30] [i_32] [i_32] [i_35] [i_30] [i_35]))) : (var_2))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((arr_43 [2U] [i_32] [i_32]) != (var_11))))));
                    /* LoopSeq 1 */
                    for (_Bool i_36 = 1; i_36 < 1; i_36 += 1) 
                    {
                        arr_117 [i_32] [i_32] [i_34] [i_35] [i_35] [i_36] [i_36] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) <= (2097981797U))))));
                        var_61 ^= ((/* implicit */_Bool) (+((~(((/* implicit */int) (_Bool)0))))));
                        var_62 = ((/* implicit */signed char) ((((unsigned int) var_11)) + (2795545250U)));
                    }
                }
                for (unsigned int i_37 = 0; i_37 < 11; i_37 += 3) /* same iter space */
                {
                    var_63 = ((/* implicit */unsigned int) max((var_63), (((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_81 [i_34] [i_34] [i_34] [i_34 - 1] [i_34 - 1] [i_37])))))))));
                    var_64 = ((/* implicit */_Bool) min((var_64), (((/* implicit */_Bool) min((var_1), (max((3872077848U), (((((/* implicit */_Bool) 128U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2196985493U))))))))));
                    var_65 = ((/* implicit */signed char) arr_34 [i_30]);
                }
                /* vectorizable */
                for (unsigned int i_38 = 0; i_38 < 11; i_38 += 3) /* same iter space */
                {
                    var_66 = ((/* implicit */_Bool) (-(2097981794U)));
                    var_67 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)(-127 - 1))))))));
                }
                /* vectorizable */
                for (unsigned int i_39 = 0; i_39 < 11; i_39 += 3) /* same iter space */
                {
                    arr_125 [i_32] [i_32] [i_32] [i_34] [i_34] = ((/* implicit */signed char) ((var_4) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) | (((/* implicit */int) (_Bool)1))))) : (var_1)));
                    var_68 = var_1;
                    arr_126 [i_32] = ((/* implicit */signed char) 1550055767U);
                    var_69 = ((/* implicit */unsigned int) min((var_69), (((/* implicit */unsigned int) ((signed char) var_11)))));
                }
                var_70 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_77 [i_30] [i_32] [i_34]))) < (2097981794U)))))))));
                /* LoopNest 2 */
                for (unsigned int i_40 = 0; i_40 < 11; i_40 += 1) 
                {
                    for (unsigned int i_41 = 0; i_41 < 11; i_41 += 4) 
                    {
                        {
                            var_71 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5))))))))) <= ((+(132U)))));
                            var_72 = ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) 4243025229U)) ? (0U) : (2196985506U))), (max((((/* implicit */unsigned int) var_3)), (422889449U))))), (var_9)));
                            arr_132 [i_32] [i_34 - 1] [i_34 + 2] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (max((((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (var_6)))));
                            var_73 = ((/* implicit */_Bool) (signed char)-2);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_42 = 0; i_42 < 1; i_42 += 1) 
                {
                    for (signed char i_43 = 0; i_43 < 11; i_43 += 2) 
                    {
                        {
                            var_74 = var_5;
                            var_75 = ((/* implicit */unsigned int) (_Bool)1);
                        }
                    } 
                } 
                var_76 += ((/* implicit */unsigned int) arr_22 [(_Bool)1] [i_32] [i_34]);
            }
            arr_140 [i_32] [i_32] = ((/* implicit */signed char) max((min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) 16775168U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) arr_111 [i_32] [i_32]))));
        }
        arr_141 [i_30] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-35))));
        var_77 = ((/* implicit */unsigned int) (-((~(((/* implicit */int) (!((_Bool)1))))))));
    }
    var_78 *= ((/* implicit */signed char) (~(((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
}
