/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214650
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        arr_9 [i_3] [i_3] [i_2] [i_0] [20LL] [10LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)17)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_1] [i_3])));
                        var_10 = (-(((/* implicit */int) var_8)));
                    }
                } 
            } 
            arr_10 [i_0] = ((/* implicit */_Bool) ((int) var_7));
            var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) var_7))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) var_3))));
            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)65494)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) var_2)))))))));
            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65491)) ? (arr_4 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
            var_15 = ((/* implicit */_Bool) min((var_15), (arr_11 [i_0] [i_0] [i_0])));
        }
        /* LoopSeq 2 */
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            /* LoopSeq 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_0])) ? (arr_18 [i_0]) : (arr_18 [i_0])));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)113))));
                            var_18 = ((/* implicit */long long int) ((signed char) (~(((/* implicit */int) var_4)))));
                            var_19 = ((/* implicit */int) ((_Bool) arr_11 [2LL] [i_5] [i_5]));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    arr_28 [i_0] [3LL] [i_6] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)48)) / (((/* implicit */int) var_7))));
                    arr_29 [4LL] [(short)13] [i_6] [4LL] [i_0] = ((/* implicit */int) (unsigned short)65490);
                }
                for (signed char i_10 = 1; i_10 < 24; i_10 += 3) 
                {
                    var_20 = ((/* implicit */int) max((var_20), ((((~(((/* implicit */int) var_8)))) | (((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) arr_8 [i_0] [(signed char)1] [i_6] [i_10 - 1])))))))));
                    var_21 = ((/* implicit */unsigned char) (_Bool)1);
                }
                var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)65527))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_26 [i_0] [22] [i_0] [i_0] [22] [i_0]))))));
            }
            for (short i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                arr_36 [i_0] = (_Bool)1;
                arr_37 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(2440109043U))))));
                var_23 = arr_13 [i_0] [i_0] [i_0];
            }
            for (unsigned int i_12 = 2; i_12 < 23; i_12 += 2) 
            {
                var_24 = ((/* implicit */unsigned int) ((unsigned short) 255LL));
                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((signed char) 243LL)))));
                var_26 = (_Bool)1;
                /* LoopSeq 2 */
                for (int i_13 = 0; i_13 < 25; i_13 += 4) 
                {
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_12 + 1] [i_12 + 1] [i_12] [i_13])))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_14 = 4; i_14 < 24; i_14 += 1) 
                    {
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (signed char)13))));
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (unsigned short)39))));
                    }
                }
                for (long long int i_15 = 0; i_15 < 25; i_15 += 1) 
                {
                    arr_50 [i_0] [i_0] [17] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_4)))) <= (((int) (unsigned short)21))));
                    var_30 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_24 [i_0] [i_5] [i_12] [i_12 - 1]))));
                }
            }
            var_31 = ((/* implicit */long long int) min((var_31), (((long long int) arr_22 [i_0] [i_0] [i_0] [i_5] [i_5] [i_5] [i_5]))));
        }
        for (unsigned char i_16 = 0; i_16 < 25; i_16 += 1) 
        {
            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((unsigned short) (signed char)-64)))));
            var_33 = ((((/* implicit */_Bool) arr_17 [i_0] [i_16] [(_Bool)1])) ? (9223372036854775785LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)68))));
            arr_54 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)65471))));
        }
        /* LoopSeq 3 */
        for (unsigned char i_17 = 0; i_17 < 25; i_17 += 1) /* same iter space */
        {
            var_34 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_40 [i_0] [i_17] [i_17])) ? (((/* implicit */int) arr_53 [i_0] [i_0] [24U])) : (var_1))) + (2147483647))) << (((((-282LL) + (294LL))) - (12LL)))));
            var_35 = ((/* implicit */unsigned char) ((var_4) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [4U] [11]))) : (((((/* implicit */_Bool) (unsigned char)177)) ? (237378503356730903LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)8)))))));
            var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((signed char) (unsigned char)27)))));
        }
        for (unsigned char i_18 = 0; i_18 < 25; i_18 += 1) /* same iter space */
        {
            var_37 = ((/* implicit */_Bool) (~(3470507214255011553LL)));
            arr_59 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) arr_58 [i_0]))));
        }
        for (unsigned char i_19 = 0; i_19 < 25; i_19 += 1) /* same iter space */
        {
            arr_62 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)100))));
            var_38 = ((/* implicit */_Bool) (+(((var_0) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248)))))));
        }
        /* LoopNest 3 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            for (signed char i_21 = 0; i_21 < 25; i_21 += 4) 
            {
                for (int i_22 = 0; i_22 < 25; i_22 += 2) 
                {
                    {
                        arr_70 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)75)))))));
                        /* LoopSeq 3 */
                        for (int i_23 = 2; i_23 < 24; i_23 += 1) 
                        {
                            arr_74 [(unsigned char)11] [i_0] [(_Bool)1] [i_20] [(_Bool)0] [i_22] [i_23] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
                            var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) arr_13 [i_0] [i_0] [i_20]))));
                        }
                        for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                        {
                            arr_77 [(_Bool)1] [i_22] [i_0] [i_22] [i_0] [i_20] [i_0] = (-(arr_47 [i_24 - 1]));
                            arr_78 [i_0] [24] [(short)24] [(unsigned char)24] [i_22] [i_0] [(short)12] = ((/* implicit */int) (unsigned short)37);
                        }
                        for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
                        {
                            var_40 = ((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) (unsigned char)38)) : (24)))));
                            var_41 = ((((/* implicit */_Bool) (~(var_5)))) ? ((~(2147475456))) : (((/* implicit */int) arr_52 [i_22])));
                        }
                        var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)65471)) >= (var_6))) ? (((arr_35 [0]) / (((/* implicit */int) var_9)))) : (((/* implicit */int) (!((_Bool)1)))))))));
                        var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_9))))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_26 = 3; i_26 < 19; i_26 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            for (signed char i_28 = 0; i_28 < 23; i_28 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_29 = 0; i_29 < 23; i_29 += 2) 
                    {
                        for (signed char i_30 = 0; i_30 < 23; i_30 += 4) 
                        {
                            {
                                var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) var_9))));
                                arr_96 [i_26 - 2] [i_27] [(signed char)10] [13] [i_29] [i_27] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) var_0))))))));
                                var_45 = ((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_69 [i_26] [i_26] [i_30] [i_26] [i_26 + 4] [i_26 - 3]))))), (((signed char) max((((/* implicit */long long int) arr_76 [4] [i_27] [(signed char)0])), (var_3))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_31 = 1; i_31 < 22; i_31 += 3) 
                    {
                        for (long long int i_32 = 0; i_32 < 23; i_32 += 3) 
                        {
                            {
                                arr_104 [(_Bool)0] = ((/* implicit */unsigned short) ((((long long int) (unsigned short)65529)) <= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (unsigned short)65488)) : (((/* implicit */int) var_2)))))))));
                                var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) ((((/* implicit */int) var_9)) / (((int) arr_49 [i_31] [i_31] [i_31 + 1] [i_31 + 1] [i_32] [(unsigned short)2])))))));
                                var_47 = ((/* implicit */long long int) min((var_47), (((/* implicit */long long int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_48 = ((/* implicit */signed char) arr_101 [i_28] [i_27] [(unsigned short)0] [i_28] [i_28] [i_26] [i_26 + 4]);
                }
            } 
        } 
        var_49 = ((/* implicit */long long int) ((int) (-(((/* implicit */int) (signed char)-8)))));
        /* LoopSeq 1 */
        for (int i_33 = 3; i_33 < 21; i_33 += 3) 
        {
            arr_107 [4] [i_33] [i_26] = (signed char)47;
            var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) (_Bool)1))))))));
            /* LoopNest 2 */
            for (signed char i_34 = 1; i_34 < 20; i_34 += 1) 
            {
                for (short i_35 = 1; i_35 < 21; i_35 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_36 = 0; i_36 < 23; i_36 += 4) 
                        {
                            var_51 = ((/* implicit */signed char) max((var_51), (((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                            arr_118 [(short)15] [i_33] [i_33] [i_35 + 2] [12U] [i_33] [i_35] = var_8;
                            arr_119 [i_26] [i_33] [i_34 + 3] [i_33] [i_36] = ((/* implicit */unsigned int) (+(330404335)));
                        }
                        /* vectorizable */
                        for (long long int i_37 = 1; i_37 < 22; i_37 += 3) 
                        {
                            var_52 = ((/* implicit */signed char) min((var_52), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)46))) >= (arr_22 [i_37 + 1] [i_37] [i_37] [i_37 - 1] [i_37] [22] [i_37 + 1]))))));
                            var_53 = ((/* implicit */int) max((var_53), (((/* implicit */int) var_9))));
                            var_54 = ((/* implicit */signed char) min((var_54), (((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) 4294967291U))))))));
                            var_55 = ((/* implicit */short) (~(((((/* implicit */_Bool) -8402075081556619610LL)) ? (((/* implicit */int) (unsigned short)65526)) : (((/* implicit */int) (_Bool)1))))));
                            var_56 = ((signed char) (_Bool)1);
                        }
                        for (int i_38 = 0; i_38 < 23; i_38 += 4) 
                        {
                            arr_125 [i_26] [i_26] [(signed char)13] [i_26 + 3] [i_33] [i_26] = ((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */int) var_4)), (arr_7 [(signed char)3] [i_34 + 1] [i_35 + 1]))));
                            var_57 = ((/* implicit */unsigned int) max((var_57), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                            var_58 = ((/* implicit */long long int) (-((+(((/* implicit */int) ((short) (signed char)-31)))))));
                            arr_126 [i_33] [(unsigned char)12] = ((/* implicit */signed char) arr_64 [i_35]);
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
                        {
                            var_59 = ((/* implicit */int) max((var_59), (((/* implicit */int) ((((-6766164889580843596LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)164))))) > (((/* implicit */long long int) (-(((/* implicit */int) var_8))))))))));
                            var_60 = ((/* implicit */_Bool) min((var_60), (((/* implicit */_Bool) 2147483647))));
                            var_61 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (arr_91 [3LL] [i_35 - 1] [i_34 + 3] [i_33] [(signed char)9]) : (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) ((signed char) 3245686397U)))));
                            var_62 = ((/* implicit */long long int) ((((((/* implicit */int) var_9)) + (2147483647))) << (((((long long int) (_Bool)1)) - (1LL)))));
                        }
                        for (int i_40 = 4; i_40 < 22; i_40 += 2) 
                        {
                            arr_133 [i_26] [i_33] [i_34] = ((/* implicit */signed char) max(((~(((/* implicit */int) var_8)))), (((/* implicit */int) var_9))));
                            arr_134 [i_26] [i_33] [i_34] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned short)21)) ? (((/* implicit */int) arr_89 [i_33 + 2])) : (((/* implicit */int) arr_89 [i_33 - 2])))), (((var_4) ? (((/* implicit */int) arr_89 [i_33 - 2])) : (((/* implicit */int) arr_89 [i_33 - 1]))))));
                            var_63 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-120))))) ? ((~(((long long int) var_0)))) : (arr_71 [i_34 + 3] [i_34] [i_34] [i_35] [i_40 - 4])));
                            var_64 = ((/* implicit */short) max((var_64), (((/* implicit */short) max((((/* implicit */unsigned int) min((-5), (((/* implicit */int) (short)1540))))), (((unsigned int) (~(-330404358)))))))));
                        }
                        /* vectorizable */
                        for (long long int i_41 = 2; i_41 < 21; i_41 += 4) 
                        {
                            arr_138 [i_33] [i_33 - 2] [i_34] [i_35] = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_116 [i_41] [i_35] [i_34] [i_33] [i_26]))))));
                            var_65 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)113)) ^ ((-(-1664434148)))));
                        }
                        var_66 = ((/* implicit */long long int) min((var_66), (((((/* implicit */_Bool) ((int) arr_99 [i_26 - 1] [i_26] [(_Bool)1] [i_26 + 2]))) ? (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) -1373418670))) ^ (((((/* implicit */_Bool) (signed char)-18)) ? (arr_30 [i_26] [i_26 + 2] [i_26] [i_26]) : (((/* implicit */int) arr_51 [19LL] [i_26 + 3]))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (var_0) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))))));
                    }
                } 
            } 
            arr_139 [i_26 + 3] [i_26] [i_33] = ((/* implicit */long long int) (+(min((((/* implicit */int) (signed char)-1)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (_Bool)1))))))));
        }
    }
    var_67 = ((_Bool) var_2);
}
