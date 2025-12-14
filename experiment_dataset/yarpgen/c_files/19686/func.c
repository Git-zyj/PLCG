/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19686
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_16 *= ((/* implicit */unsigned short) (_Bool)1);
        var_17 = min((((/* implicit */unsigned int) max((-1081230912), (((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) (_Bool)1))))))), ((~(min((arr_1 [i_0]), (var_10))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((1132703742556882930LL), (((/* implicit */long long int) (-2147483647 - 1)))))) ? ((-(-1428319105))) : ((+(((/* implicit */int) (signed char)8))))))) ? ((((-2147483647 - 1)) + (1949689365))) : (((/* implicit */int) ((unsigned char) ((arr_3 [i_1] [(unsigned short)10]) - (((/* implicit */int) arr_2 [i_1] [(signed char)11]))))))));
        var_19 = ((/* implicit */short) 2376072855U);
        var_20 += ((/* implicit */short) (+(max((((/* implicit */int) max((var_12), (((/* implicit */unsigned char) (_Bool)1))))), (((((/* implicit */_Bool) (unsigned short)15753)) ? (((/* implicit */int) (unsigned short)49476)) : (((/* implicit */int) (_Bool)1))))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                arr_13 [i_2] [i_3] [i_2] = ((/* implicit */int) (-((-(arr_4 [i_2])))));
                arr_14 [i_2] = ((/* implicit */unsigned int) (unsigned short)31091);
                var_21 = ((/* implicit */unsigned short) (-(arr_9 [(unsigned char)9] [(unsigned char)9] [i_4])));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)13876)) ? (arr_4 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))))));
            }
            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2])) ? ((~(var_4))) : (((/* implicit */unsigned long long int) arr_3 [i_2] [i_2])))))));
            /* LoopSeq 2 */
            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        {
                            arr_22 [i_5] &= ((/* implicit */_Bool) var_3);
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (signed char)38))));
                            var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_3] [i_3] [i_3]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 4 */
                    for (short i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_9] [i_9] [i_2] [i_5] [i_3] [i_2]))))) ? (((((/* implicit */unsigned long long int) 549755813887LL)) & (arr_15 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)78)))))))))));
                        arr_29 [i_2] [i_2] [i_5] [i_8] [i_9] = ((/* implicit */unsigned short) (_Bool)1);
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_27 += ((/* implicit */int) arr_6 [i_5] [i_3]);
                        var_28 ^= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)138)) & (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)19040)) : (((/* implicit */int) arr_23 [i_2] [i_2] [(_Bool)1] [i_2] [i_2]))))));
                    }
                    for (unsigned short i_11 = 1; i_11 < 11; i_11 += 1) 
                    {
                        var_29 = ((/* implicit */signed char) ((((((/* implicit */int) arr_27 [i_5] [i_8] [i_11] [i_11 + 1] [i_11] [i_11])) + (2147483647))) << ((((~(((/* implicit */int) var_1)))) - (15390)))));
                        arr_35 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)85)) ? (((((/* implicit */_Bool) (unsigned short)51660)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-24)))) : (((/* implicit */int) ((((/* implicit */int) var_15)) != (-1))))));
                    }
                    for (unsigned int i_12 = 2; i_12 < 13; i_12 += 1) 
                    {
                        var_30 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)51660)))))));
                        arr_39 [i_2] [i_2] [i_5] [5U] [i_12] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_31 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))));
                        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) (-(440511299))))));
                        var_32 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)121))));
                    }
                    var_33 = (signed char)113;
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((unsigned long long int) var_3))));
                }
                arr_40 [i_3] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((3343779547132510857LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15753))))) : (((/* implicit */long long int) ((int) arr_9 [i_2] [i_3] [i_3])))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_35 = ((/* implicit */unsigned short) var_10);
                var_36 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (arr_20 [i_2] [i_2] [(_Bool)1] [i_13] [(_Bool)0])));
                arr_43 [i_2] [i_2] [i_2] [(unsigned short)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (arr_9 [i_13] [(short)6] [i_13])))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_8))))) : (var_2)));
                var_37 = ((/* implicit */unsigned int) var_5);
            }
        }
        var_38 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_34 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_41 [i_2] [i_2] [i_2] [i_2]))));
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 24; i_14 += 4) 
    {
        for (unsigned char i_15 = 0; i_15 < 24; i_15 += 3) 
        {
            {
                arr_51 [(signed char)7] [i_15] = ((/* implicit */signed char) (-((((((-9223372036854775807LL - 1LL)) >= (((/* implicit */long long int) ((/* implicit */int) var_5))))) ? ((+((-2147483647 - 1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [15])))))))));
                /* LoopNest 3 */
                for (short i_16 = 3; i_16 < 22; i_16 += 2) 
                {
                    for (signed char i_17 = 1; i_17 < 23; i_17 += 2) 
                    {
                        for (long long int i_18 = 1; i_18 < 22; i_18 += 2) 
                        {
                            {
                                var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) -1949689365))));
                                var_40 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(var_10))))));
                                arr_60 [i_14] [i_14] [i_14] [i_17] [i_18] = ((/* implicit */long long int) max((max((((/* implicit */unsigned short) var_8)), (arr_47 [i_16] [22ULL] [i_16]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) var_1))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_41 = ((/* implicit */signed char) max((((/* implicit */int) (unsigned short)45208)), (var_11)));
    /* LoopSeq 4 */
    for (long long int i_19 = 2; i_19 < 20; i_19 += 1) /* same iter space */
    {
        var_42 = ((/* implicit */unsigned long long int) arr_58 [i_19] [i_19] [i_19] [i_19 - 2] [i_19 + 3] [i_19] [i_19]);
        arr_63 [4U] |= ((/* implicit */_Bool) var_12);
    }
    /* vectorizable */
    for (long long int i_20 = 2; i_20 < 20; i_20 += 1) /* same iter space */
    {
        var_43 = ((/* implicit */unsigned short) var_6);
        /* LoopSeq 1 */
        for (unsigned char i_21 = 0; i_21 < 24; i_21 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_22 = 0; i_22 < 24; i_22 += 1) 
            {
                for (signed char i_23 = 1; i_23 < 22; i_23 += 2) 
                {
                    for (unsigned char i_24 = 0; i_24 < 24; i_24 += 1) 
                    {
                        {
                            var_44 -= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_72 [i_20] [(_Bool)1] [i_22] [i_22] [(_Bool)1] [i_24])) ? (((/* implicit */int) (short)-32744)) : (((/* implicit */int) (_Bool)1))))));
                            var_45 = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)1)) >= (((/* implicit */int) (signed char)-48)))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) var_0)) : (arr_56 [i_24] [i_24] [i_24] [i_24] [i_24]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_55 [i_20] [i_20] [i_20])) : (((/* implicit */int) var_8)))))));
                            var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((var_3) - (arr_72 [i_23] [i_23] [(_Bool)1] [i_23] [i_23] [i_23])))) | ((((-9223372036854775807LL - 1LL)) - (-2936145324770917203LL))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_25 = 0; i_25 < 24; i_25 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_26 = 0; i_26 < 24; i_26 += 4) 
                {
                    for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
                    {
                        {
                            arr_87 [i_20] [i_20] [i_20 + 1] [i_20] [i_20] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)247))) - (9223372036854775807LL)));
                            var_47 = ((/* implicit */_Bool) ((((/* implicit */int) arr_55 [i_20] [i_20 + 3] [i_20 + 3])) + (((/* implicit */int) arr_55 [i_20] [i_20 - 2] [i_20 + 3]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_28 = 0; i_28 < 24; i_28 += 3) 
                {
                    for (signed char i_29 = 4; i_29 < 22; i_29 += 2) 
                    {
                        {
                            arr_92 [i_20] [7] [i_28] [i_20] [7] = ((/* implicit */unsigned long long int) arr_72 [21U] [i_28] [i_28] [i_28] [i_28] [i_28]);
                            var_48 &= ((/* implicit */signed char) arr_45 [i_25] [i_25]);
                        }
                    } 
                } 
                var_49 = ((/* implicit */_Bool) min((var_49), (((((/* implicit */int) var_1)) >= ((-(((/* implicit */int) (short)-26545))))))));
            }
            for (unsigned long long int i_30 = 0; i_30 < 24; i_30 += 3) 
            {
                var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_94 [i_20] [i_20] [i_30]))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) (signed char)-120)) * (((/* implicit */int) var_15))))));
                var_51 = ((/* implicit */short) (+(((((var_0) + (2147483647))) >> (((((/* implicit */int) arr_46 [i_21] [i_21])) - (60)))))));
            }
            var_52 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_6))))));
        }
    }
    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
    {
        arr_99 [i_31] [i_31] = ((/* implicit */int) var_4);
        arr_100 [(short)13] [i_31] = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */short) var_7)), (arr_59 [(short)17] [i_31] [i_31] [i_31] [i_31] [i_31] [i_31])))), (((((/* implicit */_Bool) (short)-550)) ? (((/* implicit */int) arr_59 [i_31] [i_31] [(short)12] [i_31] [i_31] [i_31] [16ULL])) : (((/* implicit */int) arr_64 [i_31] [i_31]))))));
        arr_101 [i_31] [i_31] = ((/* implicit */unsigned short) max(((signed char)-1), ((signed char)-4)));
        /* LoopSeq 2 */
        for (short i_32 = 2; i_32 < 16; i_32 += 2) /* same iter space */
        {
            arr_104 [i_31] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)96)) + (((/* implicit */int) (_Bool)1))))) : (3829833011U)));
            /* LoopSeq 2 */
            for (unsigned long long int i_33 = 0; i_33 < 17; i_33 += 1) 
            {
                var_53 = ((/* implicit */signed char) min((var_53), (((/* implicit */signed char) (((-(((/* implicit */int) var_5)))) ^ (((/* implicit */int) (signed char)14)))))));
                arr_107 [i_31] [i_31] [i_33] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) ((short) -1416785320248057489LL)))))));
                var_54 = ((/* implicit */unsigned long long int) min((var_54), (var_4)));
                var_55 = ((/* implicit */short) var_4);
            }
            for (int i_34 = 0; i_34 < 17; i_34 += 4) 
            {
                arr_110 [i_31] [i_31] [i_31] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_85 [i_31] [i_31] [i_32 + 1] [(signed char)2] [i_32] [i_32] [i_34]))))) ? (((((-1132703742556882931LL) + (9223372036854775807LL))) >> (((1273967065U) - (1273967035U))))) : (((/* implicit */long long int) var_10))));
                var_56 = ((/* implicit */unsigned char) 3443895788U);
                var_57 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_77 [(_Bool)1] [i_32] [i_32] [i_32])) ? (((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)43))))) * ((-(((/* implicit */int) (short)11630)))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)0)))))))));
                var_58 = ((/* implicit */signed char) max((max((max((((/* implicit */unsigned int) arr_45 [i_31] [i_34])), (var_3))), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((-598816097), (((/* implicit */int) arr_74 [i_31] [(_Bool)0] [i_31] [i_32] [(_Bool)0]))))))))));
            }
            var_59 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (_Bool)1)), (9567835323663526283ULL))), (((/* implicit */unsigned long long int) -1LL))))) ? ((~(9LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-31)))));
            /* LoopNest 3 */
            for (long long int i_35 = 0; i_35 < 17; i_35 += 1) 
            {
                for (unsigned int i_36 = 1; i_36 < 15; i_36 += 1) 
                {
                    for (unsigned char i_37 = 2; i_37 < 16; i_37 += 3) 
                    {
                        {
                            arr_118 [i_31] [i_32] [i_31] [i_35] [i_36] [i_37] [i_37] = ((/* implicit */unsigned long long int) (~(var_13)));
                            var_60 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_83 [i_37] [i_36 - 1] [i_35] [i_32 - 1] [i_32] [i_31])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_85 [i_31] [i_31] [i_31] [(signed char)21] [i_31] [i_31] [i_31]))))))));
                            arr_119 [i_35] [i_36] = ((/* implicit */signed char) max((((2615794888732187259LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) var_13))));
                            arr_120 [i_31] [i_32] [i_35] [i_36] [(_Bool)1] = ((/* implicit */unsigned short) var_8);
                            var_61 += ((/* implicit */int) ((unsigned short) ((unsigned int) min((((/* implicit */unsigned char) (_Bool)0)), (var_8)))));
                        }
                    } 
                } 
            } 
            var_62 = ((/* implicit */_Bool) var_11);
        }
        for (short i_38 = 2; i_38 < 16; i_38 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_39 = 0; i_39 < 17; i_39 += 1) 
            {
                for (unsigned long long int i_40 = 1; i_40 < 14; i_40 += 2) 
                {
                    {
                        arr_129 [i_40] = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) max((arr_95 [i_39] [i_31]), (2014297697)))), (597376032U)))));
                        arr_130 [i_31] [i_31] [(unsigned char)14] [i_38] [(_Bool)1] [i_40] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) var_11)) : ((+(var_9))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_89 [i_31] [i_38] [i_31] [i_40])) ? (((/* implicit */int) (unsigned short)52625)) : (598816090))))));
                    }
                } 
            } 
            arr_131 [i_31] [i_38] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)248)) ? (((/* implicit */int) arr_67 [i_31] [(signed char)15])) : ((+(((/* implicit */int) arr_78 [i_31] [i_31] [i_31])))))))));
        }
    }
    /* vectorizable */
    for (unsigned int i_41 = 1; i_41 < 12; i_41 += 2) 
    {
        var_63 |= ((/* implicit */long long int) arr_108 [13U] [(short)4] [i_41]);
        arr_135 [i_41] = ((/* implicit */int) var_13);
    }
    /* LoopNest 2 */
    for (int i_42 = 0; i_42 < 24; i_42 += 1) 
    {
        for (int i_43 = 2; i_43 < 20; i_43 += 1) 
        {
            {
                var_64 = ((/* implicit */long long int) min((var_64), (((/* implicit */long long int) ((((((/* implicit */int) (short)-15525)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))))));
                var_65 = ((/* implicit */unsigned long long int) var_7);
            }
        } 
    } 
}
