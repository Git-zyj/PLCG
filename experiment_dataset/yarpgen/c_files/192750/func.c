/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192750
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = var_5;
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (short i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) ^ (arr_7 [i_1 + 2] [i_1] [i_1] [i_2 - 1] [i_2] [i_2])));
                    }
                } 
            } 
            var_21 -= ((/* implicit */_Bool) ((signed char) arr_6 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1]));
            var_22 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 - 1] [i_1] [i_1] [i_1 - 1]))) | (var_18)));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */int) (signed char)123)) % (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_3 [i_0] [i_1 + 1]))));
        }
        for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            var_24 = ((/* implicit */unsigned int) ((_Bool) (-(((/* implicit */int) (_Bool)1)))));
            var_25 = ((((/* implicit */_Bool) var_17)) ? (max((((/* implicit */int) arr_8 [i_4] [i_4] [i_0] [i_4] [i_0])), ((-(((/* implicit */int) (unsigned short)54071)))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) > (((((/* implicit */long long int) var_17)) + (arr_0 [i_0] [i_0])))))));
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_13 [i_0] = ((/* implicit */short) ((unsigned long long int) arr_11 [i_0] [i_0] [i_0]));
            var_26 -= ((/* implicit */short) (~(((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_11))))));
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)32736);
            var_27 = ((/* implicit */unsigned char) (short)-26693);
            /* LoopSeq 1 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_6] [i_6 - 1] [i_0] [i_6 - 1] [i_6 - 1]))));
                var_29 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_6 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_6 - 1])));
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_6 - 1])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)32762))))) : (((unsigned int) (_Bool)0)))))));
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-(var_15)))) < (arr_10 [i_0] [i_0] [i_6])));
                    var_31 = ((/* implicit */unsigned char) var_5);
                }
            }
        }
        /* vectorizable */
        for (signed char i_8 = 3; i_8 < 15; i_8 += 2) 
        {
            var_32 = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_8]);
            /* LoopSeq 4 */
            for (int i_9 = 0; i_9 < 18; i_9 += 2) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned char) ((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_8] [i_8] [i_8 - 1] [i_8 - 3])))));
                var_34 = ((((/* implicit */_Bool) arr_17 [i_0] [i_8] [i_8])) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))));
            }
            for (int i_10 = 0; i_10 < 18; i_10 += 2) /* same iter space */
            {
                var_35 = ((/* implicit */_Bool) var_10);
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 2; i_11 < 17; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))));
                            var_37 -= ((/* implicit */unsigned int) (_Bool)1);
                            var_38 -= ((/* implicit */signed char) var_7);
                        }
                    } 
                } 
                var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((long long int) (short)-27010)))));
                /* LoopSeq 1 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_40 [i_13] [i_0] [i_0] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (((unsigned int) (_Bool)1)));
                    var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) arr_20 [i_0] [i_0] [i_10] [i_13])) : (var_18)));
                    arr_41 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))));
                }
            }
            for (int i_14 = 0; i_14 < 18; i_14 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_15 = 2; i_15 < 17; i_15 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 18; i_16 += 4) 
                    {
                        var_41 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_0] [i_8 + 3] [i_0] [i_14] [i_15 + 1])) - (((/* implicit */int) arr_34 [i_0] [i_8 + 1]))));
                        var_42 = ((/* implicit */int) (unsigned short)26415);
                    }
                    var_43 = ((/* implicit */_Bool) ((short) (+(((/* implicit */int) arr_24 [i_0] [i_0])))));
                    var_44 = ((/* implicit */short) ((((/* implicit */long long int) (~(var_18)))) < (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_14] [i_15] [i_15])) ? (arr_43 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
                    /* LoopSeq 1 */
                    for (long long int i_17 = 0; i_17 < 18; i_17 += 1) 
                    {
                        var_45 = (+(arr_10 [i_15 - 1] [i_0] [i_15 + 1]));
                        var_46 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) | (var_6)));
                        var_47 = ((/* implicit */unsigned short) min((var_47), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_14])))))));
                    }
                    arr_55 [i_0] [i_0] [i_0] [i_14] [i_14] [i_14] = ((/* implicit */_Bool) ((long long int) arr_22 [i_8] [i_0] [i_0]));
                }
                var_48 = ((/* implicit */unsigned int) arr_1 [i_0]);
                var_49 -= ((/* implicit */unsigned long long int) (~(-1140523390)));
                arr_56 [i_0] [i_0] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)27346))) - (var_6)));
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (signed char i_19 = 0; i_19 < 18; i_19 += 1) 
                    {
                        {
                            var_50 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_50 [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_0] [i_8 + 2] [i_8 + 1])) ? (arr_32 [i_14] [i_0] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                            var_51 = ((/* implicit */short) ((unsigned long long int) arr_34 [i_8 + 2] [i_8 + 2]));
                            var_52 = ((/* implicit */_Bool) ((long long int) var_8));
                            var_53 = ((/* implicit */unsigned int) ((2398455177933856542ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -733407377))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_20 = 2; i_20 < 16; i_20 += 3) 
            {
                arr_66 [i_0] [i_0] [i_8] [i_0] = ((/* implicit */unsigned int) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
                var_54 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_36 [i_20] [i_20] [i_0] [i_8] [i_0]))))));
                /* LoopSeq 1 */
                for (long long int i_21 = 4; i_21 < 17; i_21 += 2) 
                {
                    var_55 = ((/* implicit */short) (~(((/* implicit */int) (signed char)39))));
                    var_56 = ((/* implicit */unsigned char) max((var_56), (((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_34 [i_0] [i_0])))))))));
                }
                var_57 = ((/* implicit */signed char) 2422224779U);
            }
            var_58 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) <= (arr_32 [i_8] [i_0] [i_8 - 2])));
            var_59 = ((/* implicit */_Bool) var_1);
        }
    }
    for (int i_22 = 0; i_22 < 20; i_22 += 1) 
    {
        var_60 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_70 [i_22])))) ? (((arr_70 [i_22]) ^ (arr_70 [i_22]))) : ((~(arr_70 [i_22])))));
        /* LoopSeq 3 */
        for (long long int i_23 = 1; i_23 < 19; i_23 += 3) 
        {
            /* LoopNest 2 */
            for (short i_24 = 0; i_24 < 20; i_24 += 1) 
            {
                for (signed char i_25 = 2; i_25 < 18; i_25 += 1) 
                {
                    {
                        var_61 = ((((arr_72 [i_23 - 1] [i_25 - 2] [i_25 - 2]) >= (arr_72 [i_23 + 1] [i_25 - 2] [i_23 + 1]))) ? ((-(arr_72 [i_23 - 1] [i_25 - 2] [i_25 - 2]))) : (((((/* implicit */_Bool) arr_72 [i_23 - 1] [i_25 + 2] [i_25])) ? (((/* implicit */int) var_4)) : (arr_72 [i_23 - 1] [i_25 + 2] [i_23 - 1]))));
                        var_62 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!((_Bool)1))))));
                    }
                } 
            } 
            arr_77 [i_22] [i_23] = ((/* implicit */long long int) ((-733407373) ^ (((((/* implicit */int) (_Bool)1)) * (-733407383)))));
        }
        /* vectorizable */
        for (unsigned int i_26 = 2; i_26 < 18; i_26 += 1) 
        {
            var_63 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_79 [i_26 - 1] [i_26]))));
            var_64 = ((/* implicit */long long int) arr_69 [i_26 + 2]);
            var_65 = ((/* implicit */short) (~(arr_76 [i_26 + 1] [i_26 + 1] [i_26 + 2] [i_26])));
            /* LoopNest 2 */
            for (short i_27 = 0; i_27 < 20; i_27 += 2) 
            {
                for (unsigned int i_28 = 0; i_28 < 20; i_28 += 2) 
                {
                    {
                        arr_84 [i_22] [i_22] [i_22] [i_28] [i_22] [i_26] = ((((/* implicit */long long int) var_5)) - (-1016125267475227435LL));
                        var_66 = ((/* implicit */_Bool) max((var_66), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_73 [i_28] [i_26 - 1] [i_26] [i_28])) ? ((-(var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_75 [i_22] [i_26]))))))))))));
                        var_67 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) (short)-3550))))));
                        var_68 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)24)) ? (var_13) : (((/* implicit */int) arr_73 [i_28] [i_26] [i_26 - 2] [i_26]))));
                        var_69 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (arr_74 [i_26 - 1] [i_26 - 1] [i_26 - 2]) : (arr_74 [i_26 + 1] [i_26 + 2] [i_26 + 1])));
                    }
                } 
            } 
        }
        for (signed char i_29 = 2; i_29 < 19; i_29 += 2) 
        {
            arr_89 [i_29] = ((/* implicit */unsigned int) ((_Bool) arr_82 [i_22] [i_29] [i_22] [i_29]));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_30 = 2; i_30 < 17; i_30 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_31 = 0; i_31 < 20; i_31 += 2) 
                {
                    for (short i_32 = 1; i_32 < 19; i_32 += 4) 
                    {
                        {
                            var_70 = ((/* implicit */_Bool) max((var_70), (((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))));
                            arr_98 [i_22] [i_22] [i_22] [i_31] [i_32] = (~(((unsigned int) var_9)));
                            arr_99 [i_22] [i_22] [i_22] [i_22] [i_32] = ((/* implicit */_Bool) (+(2840125737U)));
                        }
                    } 
                } 
                var_71 = ((/* implicit */short) (_Bool)0);
            }
            for (short i_33 = 0; i_33 < 20; i_33 += 3) 
            {
                var_72 = (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_78 [i_22] [i_22] [i_33]))))));
                /* LoopNest 2 */
                for (int i_34 = 0; i_34 < 20; i_34 += 3) 
                {
                    for (unsigned char i_35 = 2; i_35 < 19; i_35 += 4) 
                    {
                        {
                            var_73 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 2422224776U)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) (short)32764))))));
                            var_74 -= arr_69 [i_34];
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_36 = 0; i_36 < 20; i_36 += 1) 
                {
                    for (unsigned int i_37 = 1; i_37 < 16; i_37 += 2) 
                    {
                        {
                            var_75 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-122))));
                            var_76 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) % ((~(-449695602)))));
                            var_77 = ((/* implicit */short) max((var_77), (((/* implicit */short) (+(((/* implicit */int) ((-352461354) > (((/* implicit */int) var_4))))))))));
                        }
                    } 
                } 
            }
        }
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_38 = 4; i_38 < 13; i_38 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_39 = 0; i_39 < 16; i_39 += 1) 
        {
            for (long long int i_40 = 0; i_40 < 16; i_40 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_41 = 3; i_41 < 13; i_41 += 1) 
                    {
                        var_78 = ((/* implicit */unsigned int) max((var_78), (arr_37 [i_41])));
                        var_79 -= ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), ((~(((/* implicit */int) (_Bool)1))))));
                        arr_121 [i_41] [i_40] [i_39] [i_41] = ((/* implicit */short) var_2);
                        var_80 = ((/* implicit */signed char) arr_59 [i_38] [i_38] [i_41] [i_38] [i_38] [i_38]);
                        var_81 -= ((/* implicit */_Bool) arr_47 [i_38] [i_38] [i_38] [i_41] [i_38] [i_38]);
                    }
                    /* vectorizable */
                    for (short i_42 = 2; i_42 < 13; i_42 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_43 = 0; i_43 < 16; i_43 += 1) 
                        {
                            var_82 = ((/* implicit */int) var_8);
                            var_83 -= ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
                        }
                        for (unsigned int i_44 = 1; i_44 < 14; i_44 += 2) 
                        {
                            var_84 = arr_49 [i_40] [i_39] [i_40] [i_39] [i_38] [i_38];
                            var_85 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_18)))) ? ((+(var_2))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1872742517U))))));
                            arr_130 [i_38] [i_42] [i_40] [i_39] [i_38] [i_38] [i_38] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6060))) != (arr_23 [i_40] [i_42]))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_45 = 0; i_45 < 1; i_45 += 1) 
                        {
                            arr_133 [i_45] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 352461332)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_38] [i_39] [i_39] [i_39]))) : (var_16))) > (var_18)));
                            var_86 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_97 [i_42 + 2] [i_38 - 3] [i_42 + 2] [i_38 - 3] [i_38 - 3]))));
                        }
                        arr_134 [i_38] = ((/* implicit */long long int) (-(((/* implicit */int) arr_19 [i_42 + 2] [i_38 + 1] [i_38 - 3] [i_38 - 3]))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_46 = 0; i_46 < 16; i_46 += 2) 
                    {
                        var_87 = ((/* implicit */int) 3714263029U);
                        /* LoopSeq 2 */
                        for (signed char i_47 = 0; i_47 < 16; i_47 += 2) 
                        {
                            var_88 -= ((/* implicit */signed char) (-(11139166494835035326ULL)));
                            var_89 = ((/* implicit */signed char) max((var_89), (((/* implicit */signed char) arr_28 [i_38] [i_38]))));
                            var_90 -= ((/* implicit */short) ((unsigned int) (_Bool)1));
                            var_91 = ((/* implicit */unsigned char) (~((-(1074139098U)))));
                            var_92 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_23 [i_38 - 4] [i_38 - 1]) : (arr_23 [i_38 - 4] [i_38 + 1])));
                        }
                        for (int i_48 = 1; i_48 < 14; i_48 += 3) 
                        {
                            arr_142 [i_48] [i_39] [i_39] [i_39] [i_38] = ((/* implicit */long long int) (-(arr_102 [i_38 + 3] [i_39] [i_48 + 2])));
                            var_93 = ((/* implicit */unsigned short) ((_Bool) (_Bool)1));
                        }
                        var_94 -= ((/* implicit */unsigned int) (unsigned short)57344);
                        var_95 = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_18)) / (((2305843009213693951LL) << (((((/* implicit */int) (short)32764)) - (32762)))))));
                    }
                    var_96 -= ((/* implicit */short) 2078271668055657784LL);
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_49 = 0; i_49 < 16; i_49 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_50 = 0; i_50 < 16; i_50 += 2) 
            {
                for (unsigned long long int i_51 = 0; i_51 < 16; i_51 += 1) 
                {
                    {
                        var_97 = ((/* implicit */long long int) min((var_97), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                        var_98 = ((/* implicit */short) (!(((/* implicit */_Bool) 17128708774151262426ULL))));
                        var_99 -= ((/* implicit */short) (-(arr_106 [i_38 - 3] [i_38 - 4] [i_38 - 2] [i_38 + 1] [i_38 - 3])));
                    }
                } 
            } 
            var_100 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_129 [i_38] [i_38] [i_38] [i_38])) ? (var_6) : (((/* implicit */unsigned long long int) 2695649083U))))) ? (2305843009213693951LL) : (((/* implicit */long long int) arr_20 [i_38 - 4] [i_38] [i_38 + 2] [i_38 + 1]))));
        }
    }
    var_101 -= ((/* implicit */unsigned char) (-((-(var_2)))));
}
