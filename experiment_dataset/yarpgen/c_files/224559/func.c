/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224559
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) max((arr_2 [i_0]), (1610612736U))))));
            /* LoopNest 2 */
            for (long long int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                for (unsigned int i_3 = 1; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-668053131) | (max((96026435), (arr_8 [i_3] [i_2] [i_1] [i_0])))))) ? (max((arr_1 [i_0]), (((/* implicit */long long int) -37780291)))) : (((/* implicit */long long int) 37780291))));
                        var_17 += ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0]))));
                        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
                    }
                } 
            } 
            arr_10 [i_0] [i_1] [i_1] = 9223372036854775807LL;
        }
        for (int i_4 = 1; i_4 < 18; i_4 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5320283982132440945LL)) ? (((((/* implicit */_Bool) arr_14 [i_4] [i_4 + 1] [i_4])) ? (6169460985778270156LL) : (((/* implicit */long long int) -37780270)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_4 - 1] [i_5])) || (((/* implicit */_Bool) arr_9 [i_4] [i_4 + 1] [i_5] [i_5]))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((-37780301), (var_2))))))) : (((/* implicit */int) ((((/* implicit */_Bool) 1023U)) && ((!(((/* implicit */_Bool) -37780301)))))))));
                var_20 = ((/* implicit */long long int) arr_8 [i_5] [i_4 - 1] [i_4 + 2] [i_0]);
                var_21 = ((/* implicit */int) max((var_21), (-37780301)));
                var_22 = 2305843009213693952LL;
            }
            arr_15 [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (((+(698302656U))) < (((/* implicit */unsigned int) (-(var_5))))))) + (((/* implicit */int) ((arr_8 [i_4 + 1] [i_4] [i_4 - 1] [i_4 + 2]) < (37780301))))));
        }
        for (int i_6 = 1; i_6 < 18; i_6 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (int i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                arr_22 [i_0] [i_6] [i_0] [i_0] = ((((/* implicit */_Bool) 3526792310U)) ? (587491707U) : (768174986U));
                var_23 = ((/* implicit */unsigned int) min((var_23), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) 964021512)), (var_11)))) ? (arr_3 [i_7]) : ((~(((((/* implicit */_Bool) 3526792282U)) ? (((/* implicit */unsigned int) 37780291)) : (3526792310U)))))))));
            }
            for (int i_8 = 1; i_8 < 19; i_8 += 2) 
            {
                var_24 |= ((/* implicit */unsigned int) ((int) arr_17 [i_0] [i_6 - 1] [i_8 - 1]));
                arr_27 [i_6] [i_6] [i_8 + 1] [i_0] = ((/* implicit */int) 1108550847U);
                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((long long int) (-(((long long int) 3526792310U))))))));
            }
            for (long long int i_9 = 3; i_9 < 18; i_9 += 3) 
            {
                var_26 = ((/* implicit */int) arr_1 [i_9 + 2]);
                var_27 = ((((/* implicit */_Bool) arr_6 [i_6] [i_0])) ? ((+(((/* implicit */int) ((((/* implicit */long long int) arr_8 [i_0] [i_6 - 1] [i_9 - 3] [i_9])) >= (6875403421437259777LL)))))) : (658830137));
            }
            /* LoopSeq 4 */
            for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned int) 1066749820);
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 19; i_11 += 1) 
                {
                    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_36 [i_12] [i_10])) ? (var_1) : (((/* implicit */long long int) ((unsigned int) var_9)))))));
                            var_30 -= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_12] [i_10] [i_6 - 1])) ? (-1) : (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_0] [i_6 + 1] [i_10])))))) : (((((/* implicit */_Bool) 37780290)) ? (arr_26 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) var_0))))))));
                            var_31 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_21 [i_6] [i_10] [i_12])) / ((+(var_8)))))) ? ((((-(arr_19 [i_0]))) / (max((((/* implicit */long long int) 542419415)), (var_6))))) : (max((-3882406173811989424LL), (36028762659225600LL)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_13 = 0; i_13 < 20; i_13 += 1) 
                {
                    var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (~(((/* implicit */int) ((4294966273U) != (((/* implicit */unsigned int) -16777216))))))))));
                    var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) var_8))));
                }
                /* vectorizable */
                for (long long int i_14 = 1; i_14 < 17; i_14 += 4) 
                {
                    var_34 = arr_31 [i_0] [i_6] [i_10] [i_14 - 1];
                    var_35 = ((/* implicit */long long int) var_11);
                    var_36 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) 16777215U))));
                    var_37 = ((/* implicit */long long int) 19827570U);
                }
            }
            /* vectorizable */
            for (unsigned int i_15 = 0; i_15 < 20; i_15 += 2) /* same iter space */
            {
                var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_43 [i_0] [i_15] [i_15] [i_6 - 1] [i_0] [i_0])))) ? (var_4) : (((5517206778721731713LL) - (4849349081781368497LL))))))));
                var_39 *= ((/* implicit */unsigned int) ((long long int) -8417521791133127175LL));
                /* LoopNest 2 */
                for (int i_16 = 4; i_16 < 17; i_16 += 4) 
                {
                    for (int i_17 = 2; i_17 < 17; i_17 += 3) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_23 [i_17 + 2] [i_15] [i_6 + 2] [i_0])))) ? ((-2147483647 - 1)) : (var_9)));
                            var_41 ^= ((/* implicit */long long int) -1066749824);
                            var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) 3526792310U))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_18 = 2; i_18 < 19; i_18 += 3) 
                {
                    for (int i_19 = 3; i_19 < 19; i_19 += 4) 
                    {
                        {
                            var_43 = ((unsigned int) arr_34 [i_6 + 2] [i_6] [i_19 + 1]);
                            var_44 = (+(var_11));
                            var_45 = ((/* implicit */long long int) max((var_45), (((/* implicit */long long int) ((arr_47 [i_0] [i_6 - 1] [i_15] [i_18 - 2]) > (arr_47 [i_0] [i_6 + 1] [i_0] [i_18 - 1]))))));
                            var_46 = ((/* implicit */int) max((var_46), (1066749820)));
                            arr_61 [i_19] [i_6] [i_15] [i_6] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((816048139U) * (((/* implicit */unsigned int) arr_8 [i_0] [i_6] [i_15] [i_18 + 1]))))) ? (-1138038013) : (-1809072908)));
                        }
                    } 
                } 
            }
            for (int i_20 = 3; i_20 < 18; i_20 += 4) 
            {
                arr_64 [i_6] [i_6] [i_20 + 1] = arr_28 [i_0] [i_6] [i_20] [i_6];
                /* LoopSeq 3 */
                for (unsigned int i_21 = 2; i_21 < 16; i_21 += 2) 
                {
                    arr_69 [i_6] [i_6 - 1] [i_20 - 2] [i_21] = ((/* implicit */long long int) var_2);
                    var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) (((~(-950016001))) >= ((+((-(-16777225))))))))));
                    arr_70 [i_6] [i_6] = (-(min((((/* implicit */long long int) arr_50 [i_0])), (max((((/* implicit */long long int) var_0)), (427966512532226959LL))))));
                    arr_71 [i_6] [i_6 - 1] [i_20 - 1] [i_21 - 1] [i_6] = ((/* implicit */unsigned int) 376009716);
                    arr_72 [i_0] [i_6 + 2] [i_6] [i_21 - 1] = min((-427966512532226960LL), (((/* implicit */long long int) 2146435072)));
                }
                for (long long int i_22 = 0; i_22 < 20; i_22 += 4) 
                {
                    arr_76 [i_6] [i_6 + 2] [i_6 + 1] [i_20 + 2] [i_22] = min(((-2147483647 - 1)), (2146435067));
                    var_48 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) var_13)) >= (-8628481262052447781LL))))));
                    var_49 = ((((unsigned int) -6495532292639530592LL)) & (((arr_21 [i_22] [i_6] [i_6 - 1]) << (((((int) arr_66 [i_6] [i_6 + 1] [i_20 - 2] [i_22])) + (1044157660))))));
                    var_50 |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_0] [i_6 + 2] [i_20 + 1] [i_22] [i_22]))));
                }
                for (unsigned int i_23 = 0; i_23 < 20; i_23 += 4) 
                {
                    var_51 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (min((((/* implicit */unsigned int) 1747398534)), (861241094U)))))) && (((/* implicit */_Bool) -85314781))));
                    arr_80 [i_0] [i_6 + 1] [i_6] [i_23] = ((/* implicit */unsigned int) 68719411200LL);
                    arr_81 [i_6] = ((/* implicit */int) ((3882406173811989424LL) & (((/* implicit */long long int) var_5))));
                    var_52 = ((/* implicit */int) ((((/* implicit */long long int) 85314781)) | (-6915184497900945390LL)));
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_24 = 1; i_24 < 16; i_24 += 4) 
                {
                    var_53 = ((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_6 - 1] [i_20 + 1] [i_6])) ? (arr_63 [i_24 + 2] [i_6] [i_20 - 1] [i_6]) : (((/* implicit */long long int) arr_40 [i_6] [i_6 - 1] [i_6]))));
                    var_54 = ((/* implicit */long long int) min((var_54), (((((/* implicit */long long int) (~(4087725129U)))) + ((~(3882406173811989412LL)))))));
                    arr_86 [i_6] [i_20 - 2] [i_24] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 2147483647)) ? (arr_23 [i_24 + 2] [i_24 + 1] [i_24 + 1] [i_24 + 4]) : (((/* implicit */long long int) arr_35 [i_0] [i_6 - 1] [i_20 - 3] [i_20 - 2] [i_24] [i_24 + 3])))) : (((((/* implicit */_Bool) -87719379)) ? (arr_66 [i_0] [i_6 + 1] [i_20 + 1] [i_24 + 1]) : (((/* implicit */long long int) arr_17 [i_6 - 1] [i_20 + 1] [i_24]))))));
                }
                /* vectorizable */
                for (long long int i_25 = 2; i_25 < 18; i_25 += 4) /* same iter space */
                {
                    var_55 = ((((/* implicit */_Bool) ((int) 19827555U))) ? (((((/* implicit */_Bool) -1747398553)) ? (arr_45 [i_20] [i_6] [i_0] [i_25 + 2]) : (((/* implicit */long long int) arr_48 [i_0] [i_6] [i_25])))) : (((3882406173811989412LL) / (((/* implicit */long long int) arr_59 [i_25 - 1] [i_6] [i_6] [i_0])))));
                    var_56 = ((/* implicit */long long int) max((var_56), (((/* implicit */long long int) arr_84 [i_20 + 1] [i_20 - 2] [i_20] [i_20 - 2] [i_20] [i_25]))));
                    var_57 = ((/* implicit */int) max((var_57), (((/* implicit */int) 2271076498U))));
                    var_58 = ((/* implicit */unsigned int) (((+(arr_85 [i_0] [i_0] [i_6] [i_0]))) + (((/* implicit */long long int) 2271076501U))));
                    var_59 = ((/* implicit */unsigned int) ((long long int) arr_52 [i_25 - 1] [i_20 - 2] [i_20 - 1] [i_6 + 2] [i_0]));
                }
                /* vectorizable */
                for (long long int i_26 = 2; i_26 < 18; i_26 += 4) /* same iter space */
                {
                    var_60 = ((/* implicit */int) arr_63 [i_0] [i_20 - 1] [i_20 + 1] [i_6]);
                    arr_94 [i_0] [i_6 + 1] [i_6] [i_26 + 1] [i_0] = ((/* implicit */int) ((8769397051005482885LL) - (((/* implicit */long long int) 2271076506U))));
                }
                arr_95 [i_0] [i_6] [i_20] = min((arr_79 [i_0] [i_20 + 1] [i_0] [i_0]), (24U));
            }
            for (long long int i_27 = 2; i_27 < 17; i_27 += 4) 
            {
                var_61 = (+(min((((var_8) - (-8769397051005482886LL))), (((/* implicit */long long int) (-(2023890790U)))))));
                var_62 = ((/* implicit */int) (-(arr_62 [i_27 - 2] [i_6 + 1] [i_27 + 2] [i_6 - 1])));
                arr_98 [i_0] [i_0] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -658830137)) ? (2885727753U) : (((/* implicit */unsigned int) -871493425))))) || (((/* implicit */_Bool) 67553994410557440LL)))))) >= (arr_6 [i_6] [i_6])));
                /* LoopSeq 2 */
                for (int i_28 = 2; i_28 < 19; i_28 += 1) 
                {
                    var_63 ^= ((long long int) var_14);
                    /* LoopSeq 2 */
                    for (int i_29 = 0; i_29 < 20; i_29 += 2) 
                    {
                        var_64 = arr_73 [i_29] [i_28 - 1] [i_27] [i_0];
                        arr_103 [i_27 - 2] [i_6] = ((/* implicit */unsigned int) ((int) 1575534660U));
                        var_65 = ((/* implicit */long long int) min((var_65), ((((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8472462364287106830LL)) ? (8U) : (((/* implicit */unsigned int) -376009694))))))) ? (max((((long long int) 2147483647)), (((((/* implicit */_Bool) -2927868216711898184LL)) ? (((/* implicit */long long int) arr_59 [i_0] [i_27] [i_27 + 3] [i_28 - 2])) : (var_4))))) : (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_82 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))))))));
                    }
                    for (unsigned int i_30 = 1; i_30 < 18; i_30 += 2) 
                    {
                        var_66 = ((/* implicit */int) ((((/* implicit */_Bool) -1604100809713392394LL)) ? (-2907063762081585735LL) : (((/* implicit */long long int) -658830137))));
                        arr_107 [i_0] [i_0] [i_6] = ((/* implicit */long long int) ((((/* implicit */long long int) (((-(arr_4 [i_28]))) / (max((arr_78 [i_0] [i_6 + 1] [i_6 + 1] [i_27] [i_6] [i_30]), (376009716)))))) < (min((((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */long long int) arr_34 [i_0] [i_6] [i_28 - 1])))), (8769397051005482885LL)))));
                        var_67 = ((/* implicit */long long int) max((var_67), (((/* implicit */long long int) max((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_46 [i_0] [i_0] [i_27 - 1])), (var_8)))) ? (((/* implicit */unsigned int) 1873211543)) : (643354936U))), (arr_34 [i_0] [i_0] [i_30]))))));
                    }
                }
                for (unsigned int i_31 = 0; i_31 < 20; i_31 += 2) 
                {
                    arr_110 [i_0] [i_6 + 2] [i_6] [i_31] [i_31] = ((/* implicit */int) 1217853488U);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_32 = 0; i_32 < 20; i_32 += 1) 
                    {
                        arr_113 [i_0] [i_6 - 1] [i_27 + 1] [i_31] [i_32] [i_6] [i_27 - 2] = (+(((((/* implicit */_Bool) 8769397051005482857LL)) ? (0) : (-1873211543))));
                        var_68 = ((/* implicit */unsigned int) max((var_68), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? ((+(var_10))) : (((/* implicit */long long int) arr_111 [i_0])))))));
                        var_69 = ((/* implicit */unsigned int) (-(arr_5 [i_27 - 2] [i_31])));
                        arr_114 [i_32] [i_31] [i_6] [i_6] [i_6 - 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_6] [i_27 - 2] [i_32])) ? (((/* implicit */unsigned int) ((0) ^ (var_5)))) : (((unsigned int) -2112535422562426137LL))));
                    }
                    for (int i_33 = 3; i_33 < 19; i_33 += 2) /* same iter space */
                    {
                        var_70 = ((/* implicit */int) (-(2429515582657571551LL)));
                        arr_117 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) -63160894837671680LL)) ? (1952260588U) : (((/* implicit */unsigned int) 10493914))));
                        var_71 = ((/* implicit */int) max((var_71), (((/* implicit */int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_56 [i_33 - 3] [i_31] [i_27] [i_0]))))), (min((arr_7 [i_0] [i_27]), (207242166U)))))) : (((((/* implicit */_Bool) arr_33 [i_31] [i_6 - 1] [i_0])) ? (((/* implicit */long long int) 1338569113)) : (arr_32 [i_33 - 2] [i_31] [i_0]))))))));
                    }
                    for (int i_34 = 3; i_34 < 19; i_34 += 2) /* same iter space */
                    {
                        var_72 &= (+(min((arr_119 [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) 32767)) ? (27608174U) : (arr_75 [i_6] [i_6 + 2] [i_6 - 1])))))));
                        arr_121 [i_34 - 2] [i_34] [i_34 + 1] [i_6] [i_34] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 4138594349871400354LL))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_35 = 1; i_35 < 17; i_35 += 4) /* same iter space */
                    {
                        arr_124 [i_31] [i_6 + 2] |= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2089982976)))))));
                        var_73 = ((/* implicit */long long int) max((var_73), (((/* implicit */long long int) ((((/* implicit */int) ((var_1) != (((/* implicit */long long int) arr_104 [i_0]))))) < (arr_31 [i_6 + 2] [i_27] [i_27 + 2] [i_35 + 1]))))));
                    }
                    for (unsigned int i_36 = 1; i_36 < 17; i_36 += 4) /* same iter space */
                    {
                        arr_127 [i_0] [i_6 + 1] [i_0] [i_31] [i_36 - 1] |= -10493905;
                        var_74 = ((/* implicit */long long int) max((var_74), (((/* implicit */long long int) (+(((/* implicit */int) ((max((-2LL), (((/* implicit */long long int) arr_26 [i_0] [i_6 + 1] [i_0])))) >= (((/* implicit */long long int) var_7))))))))));
                        var_75 = arr_66 [i_0] [i_6 + 1] [i_27 + 2] [i_31];
                    }
                    /* vectorizable */
                    for (unsigned int i_37 = 1; i_37 < 17; i_37 += 4) /* same iter space */
                    {
                        arr_131 [i_0] [i_6] [i_6 - 1] [i_6 - 1] [i_27 + 2] [i_31] [i_37 + 3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((-2) + (var_13)))) & (arr_12 [i_6] [i_6 + 2])));
                        var_76 = arr_58 [i_6] [i_6] [i_27 + 2] [i_31];
                    }
                }
            }
            var_77 = var_14;
        }
        var_78 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0])) ? ((((!(((/* implicit */_Bool) -1LL)))) ? (((((/* implicit */_Bool) 1070832171)) ? (((/* implicit */long long int) -1555911085)) : (4294967295LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_89 [i_0] [i_0] [i_0] [i_0])))))))) : (((/* implicit */long long int) min((4095), (-857842051))))));
        arr_132 [i_0] = ((/* implicit */long long int) arr_111 [i_0]);
    }
    var_79 = ((/* implicit */int) 2335588164U);
    var_80 += ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (+(1039277952U)))), (((((/* implicit */_Bool) -387271054)) ? (((/* implicit */long long int) var_12)) : (2LL))))))));
    var_81 = ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) 67108863U)) ? (var_5) : ((-2147483647 - 1)))) & (var_0)))));
}
