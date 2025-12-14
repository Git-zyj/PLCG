/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19982
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (unsigned short)47849))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [1U]))))))));
        var_13 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)37889)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))))));
        arr_4 [i_0] = var_11;
    }
    for (signed char i_1 = 2; i_1 < 23; i_1 += 4) 
    {
        var_14 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [(signed char)24] [i_1]))))) ? (((/* implicit */int) arr_8 [i_1 + 2])) : (((/* implicit */int) arr_7 [i_1 - 2] [i_1]))))));
        arr_9 [i_1 + 2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_5 [i_1 - 1]), (arr_5 [i_1 + 2])))) - (((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1]))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 1; i_2 < 24; i_2 += 4) 
        {
            for (unsigned int i_3 = 1; i_3 < 23; i_3 += 3) 
            {
                {
                    var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_13 [i_1 + 2] [i_2] [i_3 - 1])), (((max((0U), (((/* implicit */unsigned int) (_Bool)1)))) << (((arr_6 [i_1]) - (1919634940U)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            arr_21 [i_1] [i_4] [(_Bool)1] [(_Bool)1] [(_Bool)1] = (((+(((/* implicit */int) var_6)))) == (((/* implicit */int) var_12)));
                            var_16 = (unsigned short)0;
                        }
                        var_17 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) 3322307575U)) ? (((/* implicit */int) arr_8 [i_1 + 2])) : (((/* implicit */int) ((_Bool) arr_17 [i_1] [i_2 + 1] [i_3] [i_4] [i_3] [i_3]))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_1 - 2] [i_1 - 2] [i_1 - 2]))))) ? (((/* implicit */int) max((arr_15 [(unsigned short)12] [i_3] [(unsigned short)23] [(unsigned short)23]), ((signed char)52)))) : (((/* implicit */int) arr_8 [i_1 + 1]))))));
                        var_18 = ((/* implicit */_Bool) var_1);
                        arr_22 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_10 [i_1] [i_1] [i_1])) & (((/* implicit */int) (unsigned short)64433))))))) ? (((/* implicit */int) var_2)) : (max((((((/* implicit */_Bool) arr_18 [i_1 - 2] [i_1] [i_1 - 2] [i_2] [i_3] [i_4] [i_4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_6))))));
                        arr_23 [i_1 - 2] [i_4] [i_3] [i_3] = ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (((unsigned int) arr_19 [i_1 + 1] [(signed char)4] [i_4] [i_1 + 2] [i_1])));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (signed char i_8 = 1; i_8 < 24; i_8 += 4) 
                {
                    {
                        var_19 &= ((/* implicit */signed char) ((_Bool) max((var_6), (((_Bool) arr_30 [i_1] [i_6] [i_1])))));
                        var_20 *= ((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) ((_Bool) var_1))) : ((~(((/* implicit */int) arr_20 [i_1 - 1] [i_1 + 1] [16U] [i_7 - 1] [i_8 - 1]))))));
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((_Bool) ((unsigned short) min((((/* implicit */unsigned short) (_Bool)1)), (arr_18 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1 + 2]))))))));
                        var_22 = var_4;
                        arr_33 [i_8] = ((/* implicit */unsigned short) var_10);
                    }
                } 
            } 
        } 
        arr_34 [i_1] = ((/* implicit */unsigned int) ((_Bool) (-(((unsigned int) var_9)))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        var_23 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (1463141763U)))));
        arr_38 [i_9] = max((max((arr_14 [i_9] [i_9]), (arr_14 [i_9] [i_9]))), (((unsigned short) arr_14 [i_9] [i_9])));
        var_24 = ((/* implicit */unsigned int) arr_7 [i_9] [i_9]);
        /* LoopSeq 4 */
        for (unsigned int i_10 = 1; i_10 < 18; i_10 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_12 = 3; i_12 < 21; i_12 += 4) 
                {
                    for (unsigned short i_13 = 1; i_13 < 21; i_13 += 2) 
                    {
                        {
                            var_25 = ((((/* implicit */_Bool) (((_Bool)1) ? (2103203989U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_9] [i_10 + 3])))))) ? (((unsigned int) (!(((/* implicit */_Bool) arr_14 [i_12] [i_12]))))) : (((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)123))) : (3985556420U))));
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((unsigned short) var_5)))));
                        }
                    } 
                } 
                var_27 |= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37889)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_9] [i_10] [i_11] [i_11])))))) ? (((/* implicit */int) var_12)) : ((-(((/* implicit */int) (signed char)-24))))))));
            }
            /* LoopNest 2 */
            for (unsigned short i_14 = 0; i_14 < 22; i_14 += 4) 
            {
                for (signed char i_15 = 2; i_15 < 21; i_15 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_16 = 0; i_16 < 22; i_16 += 1) 
                        {
                            var_28 = ((/* implicit */_Bool) min((var_28), ((!(((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))))));
                            var_29 = var_12;
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) var_2))));
                        }
                        arr_61 [i_9] [i_10] [i_14] [i_15 - 2] [i_10] = ((/* implicit */unsigned short) 1562608497U);
                        arr_62 [i_9] [i_10] [i_10] = arr_51 [i_9] [i_9] [i_10] [5U] [i_15];
                    }
                } 
            } 
            arr_63 [i_9] [i_10] [i_10] = ((/* implicit */unsigned short) var_8);
            var_31 = (-(max((min((((/* implicit */unsigned int) var_8)), (2191763307U))), (((/* implicit */unsigned int) ((unsigned short) arr_57 [i_10]))))));
        }
        /* vectorizable */
        for (signed char i_17 = 0; i_17 < 22; i_17 += 4) 
        {
            var_32 -= ((/* implicit */_Bool) arr_11 [i_9] [i_9]);
            /* LoopSeq 2 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_19 = 1; i_19 < 21; i_19 += 2) 
                {
                    var_33 = ((unsigned int) arr_8 [i_19 + 1]);
                    var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((arr_46 [i_19] [i_19 + 1] [(_Bool)1] [i_19 - 1]) < (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_20 = 1; i_20 < 20; i_20 += 2) 
                    {
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_19 + 1] [i_17] [(_Bool)1] [i_20 + 2] [(unsigned short)3] [i_20 + 2])) ? (((/* implicit */int) arr_47 [i_19 - 1] [i_18] [i_18] [i_20 + 1] [i_20] [i_17])) : (((/* implicit */int) arr_47 [i_19 + 1] [i_17] [i_18] [i_20 - 1] [i_20] [i_19]))));
                        arr_76 [i_9] [i_19 - 1] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_67 [i_9])) ? (((/* implicit */int) arr_66 [i_9] [i_18])) : (((/* implicit */int) arr_65 [i_9] [i_9]))));
                    }
                    var_36 -= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_17 [i_17] [i_17] [i_19] [i_19] [i_19] [i_19 - 1])) - (57840)))));
                    /* LoopSeq 3 */
                    for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) (_Bool)1)))));
                        arr_80 [i_9] [i_17] [i_17] [i_9] [i_21] = ((/* implicit */unsigned short) var_6);
                        var_38 -= ((/* implicit */signed char) ((var_4) % (((1157889309U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [(unsigned short)9] [i_17])))))));
                        arr_81 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) arr_46 [i_9] [i_17] [i_17] [i_21]);
                    }
                    for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) /* same iter space */
                    {
                        arr_84 [i_9] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_17] [i_17])) ? (1059232892U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_9] [i_9] [i_9] [i_17] [i_9] [i_17] [i_19 + 1])))))));
                        var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_17] [i_17] [i_18]))) | (4294967288U))))));
                        var_40 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_72 [i_22 + 1] [i_22 + 1] [i_22 + 1] [i_22 + 1] [i_22 + 1] [i_22])) : (((/* implicit */int) var_5))));
                        arr_85 [i_9] [i_9] [i_17] [i_9] = ((/* implicit */unsigned int) arr_67 [i_9]);
                    }
                    for (unsigned short i_23 = 1; i_23 < 21; i_23 += 3) 
                    {
                        var_41 = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_2))));
                        var_42 = arr_69 [i_9];
                    }
                }
                for (unsigned short i_24 = 0; i_24 < 22; i_24 += 4) 
                {
                    var_43 = ((/* implicit */unsigned short) max((var_43), (arr_14 [i_9] [i_17])));
                    arr_93 [i_9] [i_17] [i_18] [i_24] [i_24] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)37728)) : (((/* implicit */int) var_9)))) >= (((/* implicit */int) (_Bool)1))));
                }
                arr_94 [i_9] [i_17] [i_17] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)26521)) ? (((/* implicit */int) arr_65 [i_9] [i_9])) : (((/* implicit */int) arr_65 [i_18] [i_9]))));
            }
            for (unsigned int i_25 = 0; i_25 < 22; i_25 += 1) 
            {
                arr_98 [i_25] [i_17] [i_25] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_60 [i_9] [i_9])))) - (((/* implicit */int) var_7))));
                arr_99 [i_25] [i_25] = ((/* implicit */unsigned int) arr_57 [i_25]);
            }
            var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) arr_59 [4U] [i_17] [i_17] [i_17] [i_9]))));
        }
        for (unsigned int i_26 = 2; i_26 < 18; i_26 += 4) /* same iter space */
        {
            var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) ((unsigned short) ((arr_10 [i_9] [i_26 + 1] [i_9]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_40 [i_26]))))))));
            arr_104 [i_9] [i_9] [i_9] = (!(((/* implicit */_Bool) (-(((/* implicit */int) ((var_4) != (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(_Bool)1] [(signed char)14]))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_27 = 1; i_27 < 21; i_27 += 3) 
            {
                var_46 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) (-((+(423793903U))))))));
                arr_108 [i_9] [i_27] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) arr_101 [i_27 - 1] [i_26 - 1] [i_26 + 2])) << (((((/* implicit */int) arr_101 [i_27 - 1] [i_26] [i_26 + 1])) - (1222)))));
                var_48 ^= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65513))));
                var_49 = arr_48 [i_9] [i_26 + 1] [i_26] [i_26 + 1];
            }
        }
        for (unsigned int i_28 = 2; i_28 < 18; i_28 += 4) /* same iter space */
        {
            var_50 = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) (-(var_4))))), (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_35 [i_9] [21U])))) << (((((var_3) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) arr_71 [i_28] [i_28 - 2] [i_9] [i_9])))) + (13)))))));
            arr_111 [i_9] |= ((/* implicit */unsigned short) ((signed char) (+(((/* implicit */int) (unsigned short)42355)))));
            /* LoopNest 2 */
            for (signed char i_29 = 2; i_29 < 19; i_29 += 2) 
            {
                for (unsigned short i_30 = 1; i_30 < 19; i_30 += 3) 
                {
                    {
                        var_51 = ((/* implicit */unsigned short) min((var_51), (var_5)));
                        var_52 = min((((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))), (((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)96))) : (1342887415U))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) /* same iter space */
    {
        arr_120 [i_31] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)24)) == (((((/* implicit */int) (signed char)61)) >> (((/* implicit */int) (_Bool)1))))));
        var_53 = ((/* implicit */unsigned int) min((var_53), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_112 [i_31])))))));
        arr_121 [i_31] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_97 [i_31] [i_31] [i_31]))));
    }
    var_54 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (2143289344U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    var_55 = (!(((/* implicit */_Bool) ((signed char) (_Bool)1))));
}
