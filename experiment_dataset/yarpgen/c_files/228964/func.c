/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228964
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
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) (((!(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) 3918855675U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) : (((/* implicit */int) ((((_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) var_10)))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 4; i_2 < 17; i_2 += 1) 
            {
                var_19 = ((/* implicit */unsigned long long int) (((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_13)) : (var_4))))) > ((-((+(var_12)))))));
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_7 [i_1] [i_1 + 1] [i_2 - 1] [i_2 - 2])))) ? (min((arr_7 [i_1] [i_1 - 4] [i_2 - 2] [i_2 - 1]), (arr_7 [i_1] [i_1 + 1] [i_2 - 2] [i_2 - 3]))) : (arr_7 [i_1] [i_1 - 1] [i_2 + 1] [i_2 - 4])));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) 376111647U)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))))) ? (((/* implicit */unsigned int) var_3)) : ((+(min((376111643U), (((/* implicit */unsigned int) (_Bool)1))))))));
            }
            for (int i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                var_22 = ((/* implicit */int) ((1006680781001987887ULL) + (((/* implicit */unsigned long long int) 6469875))));
                var_23 = ((/* implicit */unsigned char) var_9);
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) var_16);
                            var_25 = ((unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (3212034392136243887ULL) : (1006680781001987870ULL)));
                            var_26 = ((/* implicit */unsigned long long int) var_16);
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) min((min((arr_8 [i_4] [i_1 + 1] [i_4]), (arr_8 [i_4] [i_1 - 1] [i_4]))), ((-(arr_8 [i_4] [i_1 - 1] [i_4]))))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)96)) ? (599577768U) : (((/* implicit */unsigned int) -981022966))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_16) < (((/* implicit */unsigned int) arr_0 [i_3])))))) : (min((var_14), (var_10)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : ((-(((/* implicit */int) ((((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) == (((/* implicit */int) (_Bool)1)))))))));
                /* LoopSeq 2 */
                for (int i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
                {
                    var_29 = (((!(arr_4 [i_0] [i_1 - 3] [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_10), (13251183386451302827ULL)))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_9))))), (min((((/* implicit */unsigned long long int) var_11)), (var_14))))));
                    var_30 = ((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_16) : (((/* implicit */unsigned int) var_13))))) > (((var_7) ? (var_15) : (((/* implicit */unsigned long long int) var_12)))))))));
                    var_31 = max((((/* implicit */unsigned long long int) (~(var_11)))), (((arr_9 [i_1 - 1] [i_1 - 3] [i_1 - 4] [i_1 - 4]) << (((var_0) + (1645554541))))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 19; i_7 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_32 = ((((/* implicit */_Bool) 1006680781001987870ULL)) ? (1006680781001987875ULL) : (((/* implicit */unsigned long long int) 4098522362U)));
                        var_33 = ((((((/* implicit */_Bool) var_1)) ? (var_6) : (var_6))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)143)) << (((18446744073709551593ULL) - (18446744073709551575ULL)))))));
                    }
                    var_34 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (arr_22 [i_0] [i_1 + 1] [i_0] [i_1 - 3] [i_1 + 1] [i_0]) : (arr_22 [i_1] [i_1 - 1] [i_1] [i_1 - 3] [i_1 - 1] [i_1 - 3])));
                    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_17 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (((/* implicit */int) arr_3 [i_1 - 1]))));
                    var_36 = (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (14019135235329888034ULL));
                    var_37 = ((/* implicit */unsigned char) arr_0 [i_3]);
                }
            }
            /* vectorizable */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
                {
                    var_38 *= ((/* implicit */unsigned int) ((_Bool) var_6));
                    var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_5)) : (var_6)))))));
                    /* LoopSeq 3 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_40 = ((/* implicit */_Bool) var_10);
                        var_41 = ((/* implicit */unsigned long long int) min((var_41), (arr_9 [i_10] [i_10] [i_10] [i_10])));
                        var_42 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (arr_26 [i_0] [i_0] [i_1 - 4] [i_0])));
                    }
                    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        var_43 = ((/* implicit */unsigned long long int) (((+(var_11))) - (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 14942700610851976031ULL))))));
                        var_44 = ((/* implicit */unsigned int) 7380545239339178684ULL);
                        var_45 = var_2;
                    }
                    for (unsigned char i_13 = 0; i_13 < 19; i_13 += 1) 
                    {
                        var_46 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_1)) : (var_9)))));
                        var_47 = ((/* implicit */_Bool) ((int) var_5));
                        var_48 = ((/* implicit */int) max((var_48), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                        var_49 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_1] [i_1 - 3] [i_1] [i_1] [i_1] [i_1 - 3]))));
                        var_50 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) % (var_2)))) ? (((/* implicit */unsigned int) var_13)) : ((+(var_12)))));
                    }
                    var_51 = ((/* implicit */unsigned long long int) max((var_51), (((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_1 - 2] [i_1 - 3] [i_1 - 1])) ? ((-(var_14))) : (((/* implicit */unsigned long long int) var_5))))));
                }
                for (unsigned int i_14 = 0; i_14 < 19; i_14 += 1) /* same iter space */
                {
                    var_52 += ((/* implicit */int) arr_3 [i_0]);
                    /* LoopSeq 2 */
                    for (int i_15 = 0; i_15 < 19; i_15 += 2) 
                    {
                        var_53 = ((/* implicit */unsigned char) ((_Bool) var_6));
                        var_54 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_1 - 1] [i_1 - 1] [i_0] [i_14] [i_14])) ? (var_3) : (var_1)));
                    }
                    for (unsigned int i_16 = 0; i_16 < 19; i_16 += 4) 
                    {
                        var_55 *= ((/* implicit */_Bool) ((int) var_16));
                        var_56 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (arr_8 [i_1] [i_1 - 3] [i_1 - 3]) : (arr_8 [i_1] [i_1 - 3] [i_1 - 3])));
                        var_57 = ((/* implicit */int) ((unsigned int) arr_1 [i_1 - 4] [i_1 - 4]));
                    }
                    var_58 *= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                    var_59 = ((/* implicit */_Bool) var_15);
                }
                var_60 = ((/* implicit */unsigned long long int) var_12);
                var_61 = ((/* implicit */int) ((unsigned long long int) arr_28 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1] [i_1]));
                var_62 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1] [i_1 - 2])) ? (((/* implicit */int) arr_29 [i_1] [i_1 - 4] [i_1 - 4] [i_1 + 1])) : (var_3)));
            }
        }
        var_63 = ((/* implicit */_Bool) min((var_63), (((/* implicit */_Bool) (-(var_13))))));
        /* LoopSeq 3 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                var_64 *= ((/* implicit */int) arr_51 [i_0] [i_0] [i_0] [i_0]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    var_65 = ((/* implicit */unsigned char) var_13);
                    var_66 = ((/* implicit */unsigned long long int) max((var_66), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_13) : (((/* implicit */int) arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                    /* LoopSeq 1 */
                    for (int i_20 = 0; i_20 < 19; i_20 += 3) 
                    {
                        var_67 |= ((/* implicit */_Bool) (-(var_13)));
                        var_68 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_51 [i_0] [i_0] [i_0] [i_0]) ? (var_2) : (var_3)))) ? (var_3) : ((~(var_3)))));
                    }
                    var_69 = ((/* implicit */unsigned int) ((arr_42 [i_0]) ? (((/* implicit */int) arr_10 [i_0] [i_18] [i_0])) : (var_0)));
                }
                for (unsigned int i_21 = 0; i_21 < 19; i_21 += 4) 
                {
                    var_70 = ((unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_11)))) : (min((arr_9 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_13))))));
                    var_71 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))) / (arr_15 [i_0] [i_17] [i_18] [i_17]))) * (var_11)));
                    var_72 = (-((-(arr_7 [i_0] [i_0] [i_18] [i_18]))));
                    var_73 = ((/* implicit */unsigned char) min(((+((-(var_14))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_10)) ? (var_16) : (var_11))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_11))))))));
                }
            }
            for (unsigned int i_22 = 2; i_22 < 17; i_22 += 1) 
            {
                var_74 *= ((/* implicit */_Bool) min((((/* implicit */int) arr_61 [i_0] [i_22 - 1] [i_22 - 2])), (((arr_61 [i_0] [i_22 + 1] [i_22 + 2]) ? (((/* implicit */int) arr_61 [i_0] [i_22 - 1] [i_22 + 2])) : (((/* implicit */int) arr_61 [i_0] [i_22 + 1] [i_22 - 1]))))));
                var_75 = ((/* implicit */int) max((var_75), (((/* implicit */int) max((((/* implicit */unsigned long long int) var_16)), (((unsigned long long int) (+(var_10)))))))));
                var_76 = ((/* implicit */unsigned int) var_6);
                var_77 = ((/* implicit */unsigned long long int) max((var_77), (min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_52 [i_22 - 2] [i_22 + 2] [i_22 + 1])), (var_13)))), (((unsigned long long int) ((unsigned int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
            }
            var_78 = ((/* implicit */unsigned char) var_10);
            var_79 = (~((~((~(var_14))))));
        }
        for (unsigned long long int i_23 = 2; i_23 < 15; i_23 += 2) 
        {
            var_80 *= ((/* implicit */unsigned long long int) ((((int) var_0)) * (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) 4870293499193750232ULL))))))));
            /* LoopNest 2 */
            for (unsigned int i_24 = 0; i_24 < 19; i_24 += 2) 
            {
                for (unsigned long long int i_25 = 0; i_25 < 19; i_25 += 2) 
                {
                    {
                        var_81 *= ((/* implicit */unsigned long long int) arr_47 [i_23] [i_23] [i_23 + 1] [i_23 + 1] [i_23 + 1] [i_23] [i_23 + 2]);
                        var_82 = ((/* implicit */unsigned long long int) min((var_82), (4548882778611819783ULL)));
                        var_83 = ((/* implicit */unsigned int) max((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 4294967291U))))), ((~(-819418142)))));
                        var_84 = ((/* implicit */int) max((var_84), (((((/* implicit */_Bool) ((int) min((((/* implicit */unsigned char) (_Bool)1)), (var_8))))) ? (((((((((/* implicit */_Bool) var_1)) ? (var_13) : (var_5))) + (2147483647))) << (((((((/* implicit */_Bool) 2458983275U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))) - (5))))) : (min((((/* implicit */int) arr_13 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25])), (min((arr_50 [i_24] [i_24]), (((/* implicit */int) arr_42 [i_0]))))))))));
                    }
                } 
            } 
        }
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            var_85 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_11) : (arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (var_14))), (((/* implicit */unsigned long long int) (+(((int) var_9)))))));
            var_86 = ((/* implicit */int) max((var_86), (((/* implicit */int) min((((/* implicit */unsigned int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0])), ((+(2374301221U))))))));
        }
    }
    for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
    {
        var_87 = (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))));
        var_88 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), ((-(arr_75 [i_27])))));
    }
}
