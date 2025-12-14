/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53609
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_16) : (((/* implicit */unsigned int) var_6))))) ? ((~(var_13))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (var_13)))));
            var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) ? (var_2) : (var_8))) & (((/* implicit */unsigned long long int) (-(var_10))))));
            arr_5 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_12)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((var_16) / (var_16)))));
        }
        for (unsigned int i_2 = 2; i_2 < 8; i_2 += 2) 
        {
            var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) var_12)))));
            var_21 |= ((/* implicit */unsigned short) (((-(((/* implicit */int) var_12)))) % (((/* implicit */int) ((short) ((unsigned long long int) var_13))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    for (unsigned char i_6 = 1; i_6 < 9; i_6 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 24ULL)))) & (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_7))))))));
                            var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) var_3)))));
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_3)))) ? (((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) / (((/* implicit */int) var_17))))))))));
                            var_25 = ((/* implicit */unsigned int) var_0);
                            var_26 = ((/* implicit */short) ((int) ((_Bool) (short)-4733)));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                var_27 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_5)))))) & (((((/* implicit */int) ((_Bool) var_12))) & ((~(((/* implicit */int) var_1))))))));
                arr_18 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) -595816584)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)4738))))) + (((long long int) var_13))));
            }
            for (long long int i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                arr_21 [i_0] [(unsigned char)5] = ((/* implicit */long long int) ((unsigned int) (+(var_13))));
                var_28 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned long long int) var_13)) - (var_2))) : (((/* implicit */unsigned long long int) ((int) var_0)))))));
                var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10463184772271121124ULL)) ? (4294967275U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37942)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (var_10)))));
                var_30 = ((/* implicit */unsigned int) var_5);
            }
            var_31 = ((/* implicit */int) var_16);
            var_32 = ((/* implicit */int) max((var_32), ((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) var_6)))))))) : (((/* implicit */int) ((unsigned short) var_9)))))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            var_33 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_16))))));
            /* LoopNest 2 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        arr_30 [i_0] [i_10] [(signed char)10] [i_0] [i_0] [i_10] = ((/* implicit */unsigned int) (~(((var_6) % (var_10)))));
                        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_11))) ? (((((_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : (var_10))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_12 = 1; i_12 < 7; i_12 += 2) 
                        {
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_7))) ? ((+(((int) 1314036402U)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_16))))))));
                            arr_33 [i_0] [i_10] [i_12] = ((/* implicit */int) ((_Bool) ((signed char) ((int) var_9))));
                        }
                        /* vectorizable */
                        for (unsigned char i_13 = 0; i_13 < 11; i_13 += 1) 
                        {
                            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (short)4714)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 403337574U))));
                            var_37 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_14)) ? (var_15) : (((/* implicit */long long int) var_6)))) / (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                            var_38 = ((/* implicit */_Bool) (-(var_3)));
                        }
                        var_39 = ((/* implicit */short) ((unsigned char) ((short) ((unsigned short) var_5))));
                    }
                } 
            } 
        }
        /* LoopSeq 3 */
        for (unsigned short i_14 = 0; i_14 < 11; i_14 += 1) 
        {
            arr_40 [i_0] [i_0] &= ((/* implicit */short) ((unsigned long long int) ((var_13) >> (((((((/* implicit */_Bool) var_8)) ? (var_14) : (var_15))) - (989130631792073963LL))))));
            var_40 = ((/* implicit */unsigned short) ((var_3) ^ ((~(((/* implicit */int) ((short) var_6)))))));
            var_41 = ((/* implicit */short) ((((var_2) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) >> (((/* implicit */int) ((var_8) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
        }
        for (int i_15 = 0; i_15 < 11; i_15 += 2) 
        {
            arr_45 [i_0] = (-(1314036388U));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_16 = 0; i_16 < 11; i_16 += 2) 
            {
                var_42 = ((((/* implicit */_Bool) (+(var_16)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12)))));
                var_43 = ((/* implicit */_Bool) ((int) 1314036388U));
                var_44 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_0))));
            }
            for (unsigned int i_17 = 1; i_17 < 7; i_17 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 2) 
                {
                    var_45 -= ((/* implicit */unsigned short) ((int) var_9));
                    var_46 &= ((/* implicit */unsigned short) (+(var_7)));
                    var_47 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) % (var_7));
                    var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) ((((unsigned long long int) var_5)) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_14) : (var_15)))))))));
                    var_49 = ((/* implicit */unsigned char) ((unsigned int) var_11));
                }
                /* LoopNest 2 */
                for (signed char i_19 = 0; i_19 < 11; i_19 += 4) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            var_50 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_13)) : (var_9))))));
                            arr_60 [i_0] [i_15] [i_17] [i_19] [i_20] |= ((/* implicit */short) (-((-(var_13)))));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            arr_63 [2U] [4U] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_2)));
            arr_64 [i_0] [i_0] [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_17)) : (var_13)));
            /* LoopSeq 4 */
            for (unsigned char i_22 = 0; i_22 < 11; i_22 += 2) 
            {
                var_51 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */_Bool) var_3)) ? (var_15) : (((/* implicit */long long int) var_16))))));
                var_52 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_13) << (((((/* implicit */int) var_5)) - (14)))))) ? (((((/* implicit */_Bool) var_1)) ? (var_9) : (var_16))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))));
            }
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_24 = 0; i_24 < 11; i_24 += 2) 
                {
                    for (signed char i_25 = 3; i_25 < 10; i_25 += 4) 
                    {
                        {
                            var_53 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_5)))));
                            arr_74 [i_23] [i_21] [i_21] [i_24] [i_21] [i_0] [i_21] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                            arr_75 [i_21] [i_0] [i_21] [(_Bool)1] [4U] [i_24] [i_25] = (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_1)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_26 = 0; i_26 < 11; i_26 += 4) 
                {
                    var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-4733)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 1314036379U))));
                    var_55 = ((/* implicit */_Bool) (~(var_13)));
                    var_56 = ((/* implicit */unsigned char) max((var_56), (((/* implicit */unsigned char) ((signed char) var_15)))));
                    var_57 += ((/* implicit */long long int) ((signed char) var_9));
                }
                var_58 = ((/* implicit */unsigned char) (+(var_6)));
                var_59 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_15) / (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_17))))) : (((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                var_60 *= ((/* implicit */long long int) ((unsigned long long int) var_7));
            }
            for (unsigned short i_27 = 1; i_27 < 9; i_27 += 2) 
            {
                /* LoopSeq 3 */
                for (short i_28 = 0; i_28 < 11; i_28 += 1) 
                {
                    var_61 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32767))));
                    var_62 += ((/* implicit */_Bool) ((unsigned char) ((var_13) | (((/* implicit */int) var_12)))));
                }
                for (long long int i_29 = 0; i_29 < 11; i_29 += 2) 
                {
                    var_63 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) << ((((((-(((/* implicit */int) (_Bool)1)))) + (27))) - (7)))));
                    var_64 = (~(var_8));
                    var_65 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))));
                }
                for (signed char i_30 = 0; i_30 < 11; i_30 += 4) 
                {
                    arr_89 [i_0 + 1] [i_21] [i_21] [i_27 + 1] [i_30] [i_30] = ((/* implicit */unsigned char) var_10);
                    var_66 = ((/* implicit */short) min((var_66), (((/* implicit */short) ((18446744073709551606ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                }
                var_67 += (!(((/* implicit */_Bool) var_4)));
                /* LoopSeq 3 */
                for (unsigned long long int i_31 = 0; i_31 < 11; i_31 += 1) 
                {
                    arr_93 [i_0] [i_0] [i_27] [i_21] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_12))));
                    arr_94 [i_21] [i_21] [i_21] [i_21] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_10)) ? (var_16) : (((/* implicit */unsigned int) var_13)))));
                    var_68 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_17))))) ? (((unsigned long long int) var_9)) : (((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) var_14))))));
                }
                for (int i_32 = 0; i_32 < 11; i_32 += 2) 
                {
                    var_69 &= ((/* implicit */signed char) (-(var_10)));
                    var_70 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 2980930891U))))) != (((/* implicit */int) var_1))));
                }
                for (short i_33 = 0; i_33 < 11; i_33 += 2) 
                {
                    var_71 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_6)))) ? (((long long int) var_14)) : (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))));
                    var_72 = ((/* implicit */short) ((signed char) var_10));
                    /* LoopSeq 4 */
                    for (short i_34 = 2; i_34 < 8; i_34 += 2) 
                    {
                        var_73 = ((/* implicit */unsigned long long int) ((var_10) / (((/* implicit */int) var_12))));
                        arr_105 [i_0] [i_21] [i_21] [i_33] [i_34] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */unsigned long long int) var_14))));
                    }
                    for (unsigned long long int i_35 = 0; i_35 < 11; i_35 += 1) 
                    {
                        var_74 = ((/* implicit */short) ((_Bool) (~(var_8))));
                        var_75 = ((16873490581486346820ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3))));
                        var_76 = ((/* implicit */unsigned long long int) ((long long int) var_1));
                    }
                    for (long long int i_36 = 3; i_36 < 9; i_36 += 4) 
                    {
                        var_77 = ((/* implicit */unsigned int) min((var_77), (((/* implicit */unsigned int) ((short) var_6)))));
                        arr_111 [i_0] [i_0] [i_0] [i_21] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_17))));
                        var_78 = ((_Bool) var_17);
                    }
                    for (unsigned long long int i_37 = 3; i_37 < 9; i_37 += 4) 
                    {
                        var_79 &= ((((/* implicit */_Bool) ((short) var_4))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_16)))));
                        var_80 = ((/* implicit */_Bool) ((((/* implicit */int) var_17)) - (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_0)))))));
                        arr_116 [i_37] [i_21] [i_21] [i_0 + 1] = ((/* implicit */short) (~(((/* implicit */int) var_12))));
                        var_81 = ((/* implicit */long long int) ((unsigned short) var_3));
                        var_82 *= ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (var_15) : (((/* implicit */long long int) (~(((/* implicit */int) var_0)))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_38 = 0; i_38 < 11; i_38 += 2) /* same iter space */
                    {
                        var_83 *= ((/* implicit */unsigned int) var_14);
                        var_84 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((unsigned long long int) var_16)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)22))))));
                        var_85 = ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) 1314036372U)) : (16748558188789757517ULL));
                    }
                    for (unsigned long long int i_39 = 0; i_39 < 11; i_39 += 2) /* same iter space */
                    {
                        var_86 = ((/* implicit */int) min((var_86), (((/* implicit */int) ((unsigned int) var_11)))));
                        var_87 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_8) : (var_8)));
                    }
                    var_88 |= (~(((/* implicit */int) var_5)));
                }
                var_89 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((var_10) - (((/* implicit */int) var_4))))));
                var_90 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_2))) >= (var_2)));
            }
            for (short i_40 = 0; i_40 < 11; i_40 += 1) 
            {
                var_91 += ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_16)))) & (var_9)));
                arr_125 [(unsigned char)8] [(unsigned short)10] [i_40] [i_40] |= ((unsigned int) var_12);
                var_92 = ((/* implicit */_Bool) max((var_92), (((((/* implicit */unsigned int) var_13)) < (var_9)))));
                var_93 ^= ((var_15) & (((/* implicit */long long int) ((/* implicit */int) var_5))));
            }
        }
        var_94 ^= ((/* implicit */short) ((signed char) ((var_3) / (((/* implicit */int) var_0)))));
    }
    /* vectorizable */
    for (_Bool i_41 = 0; i_41 < 0; i_41 += 1) /* same iter space */
    {
        var_95 = ((/* implicit */unsigned short) ((unsigned char) var_12));
        /* LoopNest 2 */
        for (unsigned int i_42 = 4; i_42 < 10; i_42 += 1) 
        {
            for (int i_43 = 0; i_43 < 11; i_43 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_44 = 0; i_44 < 11; i_44 += 1) 
                    {
                        var_96 = ((/* implicit */_Bool) var_5);
                        arr_139 [i_41] [0U] [i_41] [i_43] [i_44] = ((((/* implicit */unsigned long long int) var_13)) ^ (var_2));
                        arr_140 [i_41] [i_42 - 2] [i_41] [(short)6] [5U] [i_42 - 2] = ((/* implicit */unsigned char) ((((8U) + (((/* implicit */unsigned int) -1287476581)))) + (((((/* implicit */_Bool) 581399622162570876LL)) ? (3211197592U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23119)))))));
                        var_97 = ((/* implicit */short) ((unsigned long long int) var_15));
                    }
                    arr_141 [i_41] [i_41 + 1] [i_41] = ((/* implicit */unsigned short) ((short) 65535U));
                    var_98 *= ((((/* implicit */int) var_1)) & (((/* implicit */int) var_5)));
                    var_99 = ((/* implicit */short) ((((((/* implicit */int) var_0)) / (((/* implicit */int) var_11)))) * (((((/* implicit */int) (short)-23119)) / (((/* implicit */int) (unsigned short)50297))))));
                }
            } 
        } 
    }
    var_100 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (-(var_2))))) ? (((((/* implicit */_Bool) -9170941253646927385LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2980930917U))) : (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_13)))) ? (((int) var_9)) : (((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_3))))))))));
    var_101 = ((/* implicit */short) max((var_101), (var_11)));
}
