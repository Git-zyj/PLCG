/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28540
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
    var_17 = ((/* implicit */signed char) var_0);
    var_18 &= ((/* implicit */unsigned char) (((+(((/* implicit */int) var_9)))) | (((/* implicit */int) (unsigned short)65529))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] [i_1] &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((8805807626982406811LL) & (((/* implicit */long long int) ((var_2) << (((18446744073709551615ULL) - (18446744073709551606ULL))))))))) & (var_11)));
            var_19 = ((((/* implicit */int) ((short) ((unsigned short) var_8)))) % (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])));
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                var_20 &= ((/* implicit */unsigned long long int) arr_1 [i_1]);
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) - (((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_2 [i_2] [i_2])) : (((/* implicit */int) var_5))))));
            }
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((long long int) var_10)))));
            arr_9 [i_0] [i_0] [i_1] = ((/* implicit */int) (unsigned char)51);
        }
        for (short i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (short i_4 = 1; i_4 < 15; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    {
                        var_23 &= ((/* implicit */short) (((-(((int) var_7)))) / (((/* implicit */int) var_13))));
                        arr_19 [i_0] &= ((/* implicit */unsigned long long int) var_5);
                        var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -868155733))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_6 = 4; i_6 < 15; i_6 += 3) 
            {
                for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            arr_28 [i_6] [i_3] [i_3] [i_3] [i_7] [i_7] [i_8] = ((/* implicit */signed char) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_8] [i_7] [i_6] [i_3])) || (((/* implicit */_Bool) 4323455642275676160ULL))))), (min((((unsigned char) arr_8 [(short)15] [i_3] [i_6] [i_7])), (((/* implicit */unsigned char) (_Bool)0))))));
                            var_25 = ((/* implicit */unsigned char) min((((3ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_13 [i_6 - 4] [i_6 - 4])), (arr_1 [i_7]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_7] [15ULL])) ? (((/* implicit */long long int) arr_15 [i_6] [(_Bool)1])) : (((long long int) var_13)))))));
                            var_26 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_3)), (((-3089621405220083340LL) + (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                        }
                        for (signed char i_9 = 1; i_9 < 15; i_9 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned short) ((unsigned int) (+(((/* implicit */int) max((var_13), (var_13)))))));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) | (((/* implicit */int) var_4))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) arr_12 [i_0]))));
                            arr_33 [i_0] [i_0] [i_3] [i_6 - 2] [i_7] [(signed char)12] &= ((/* implicit */unsigned short) ((long long int) var_2));
                        }
                        for (unsigned short i_11 = 0; i_11 < 16; i_11 += 1) /* same iter space */
                        {
                            arr_36 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_0)))), (((/* implicit */int) arr_18 [i_0] [i_3] [i_0] [i_6 - 2] [i_7] [i_11]))))), (1910933980068725290ULL)));
                            arr_37 [i_6] [i_0] [i_6] [i_7] &= ((/* implicit */unsigned int) var_16);
                        }
                        /* LoopSeq 3 */
                        for (unsigned long long int i_12 = 1; i_12 < 14; i_12 += 2) /* same iter space */
                        {
                            var_30 &= ((/* implicit */unsigned int) ((unsigned short) var_0));
                            arr_41 [i_0] [i_0] [i_6] [i_0] [i_12 - 1] = ((/* implicit */short) ((unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (arr_35 [i_0] [i_0] [i_6] [i_7] [i_12]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [14ULL]))))));
                            var_31 &= ((/* implicit */long long int) arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
                            var_32 = ((/* implicit */unsigned long long int) arr_1 [10ULL]);
                        }
                        for (unsigned long long int i_13 = 1; i_13 < 14; i_13 += 2) /* same iter space */
                        {
                            var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((long long int) -8805807626982406812LL)))));
                            var_34 = ((/* implicit */unsigned short) 4294967281U);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_14 = 1; i_14 < 14; i_14 += 2) /* same iter space */
                        {
                            var_35 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (arr_24 [i_0] [i_3] [i_6 + 1] [i_7] [(short)3])))) ? (var_8) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)58364)))))));
                            var_36 = ((/* implicit */unsigned int) ((short) var_0));
                            var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1185222397628763708ULL)) && (((/* implicit */_Bool) var_6)))) || (((/* implicit */_Bool) var_4)))))));
                        }
                    }
                } 
            } 
        }
        arr_46 [i_0] [(unsigned short)0] = ((/* implicit */unsigned long long int) ((signed char) arr_0 [i_0]));
        /* LoopNest 2 */
        for (signed char i_15 = 0; i_15 < 16; i_15 += 2) 
        {
            for (unsigned short i_16 = 1; i_16 < 15; i_16 += 3) 
            {
                {
                    var_38 = ((/* implicit */short) ((((/* implicit */long long int) ((int) ((int) arr_29 [i_0] [i_15] [i_16] [i_0])))) * (((arr_44 [i_0] [i_15]) >> (((var_7) - (16660990854762396598ULL)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_17 = 1; i_17 < 13; i_17 += 1) 
                    {
                        arr_57 [i_15] &= ((/* implicit */unsigned long long int) var_5);
                        /* LoopSeq 2 */
                        for (unsigned short i_18 = 0; i_18 < 16; i_18 += 1) 
                        {
                            arr_61 [i_15] [i_16] [i_17] = ((/* implicit */long long int) var_16);
                            var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) ((((unsigned int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
                        }
                        for (signed char i_19 = 0; i_19 < 16; i_19 += 3) 
                        {
                            var_40 = ((/* implicit */unsigned char) var_14);
                            var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) ((((/* implicit */long long int) var_8)) != (((long long int) arr_63 [i_19] [i_17] [i_16] [i_15] [i_0])))))));
                            var_42 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)87)) ^ (((/* implicit */int) ((((/* implicit */int) arr_20 [i_0])) > (((/* implicit */int) var_4)))))));
                        }
                        arr_64 [i_17] [i_0] [i_16] [i_17 + 3] = ((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_16] [i_16] [i_16] [i_16]);
                        arr_65 [i_17] [i_17] [i_17] [i_0] = ((/* implicit */signed char) (~(arr_30 [i_0] [11LL] [i_0] [i_0] [i_0] [i_0])));
                    }
                    for (long long int i_20 = 0; i_20 < 16; i_20 += 3) 
                    {
                        var_43 = ((/* implicit */unsigned short) ((long long int) (_Bool)1));
                        var_44 &= ((/* implicit */int) var_0);
                        /* LoopSeq 1 */
                        for (short i_21 = 0; i_21 < 16; i_21 += 4) 
                        {
                            var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) var_13))));
                            arr_71 [i_15] [i_15] [i_20] = ((/* implicit */short) ((unsigned long long int) var_11));
                            arr_72 [(unsigned short)12] [i_16] [i_15] [i_21] [i_21] [i_16] &= ((/* implicit */int) min(((-(14944177466123888967ULL))), (((/* implicit */unsigned long long int) arr_68 [i_0] [9LL] [i_20] [i_21]))));
                        }
                        var_46 = arr_7 [i_20] [i_20];
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_22 = 1; i_22 < 14; i_22 += 2) 
                        {
                            arr_75 [i_0] [i_15] [i_15] [i_20] [i_22] = ((/* implicit */int) ((unsigned long long int) var_11));
                            var_47 &= ((/* implicit */unsigned int) var_4);
                        }
                    }
                }
            } 
        } 
        var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_55 [(short)7] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((_Bool) ((short) (short)20846)))) : (var_15)));
    }
    for (unsigned short i_23 = 0; i_23 < 16; i_23 += 4) /* same iter space */
    {
        var_49 &= ((/* implicit */int) arr_29 [i_23] [i_23] [i_23] [i_23]);
        var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) ((var_15) | (((/* implicit */int) arr_7 [(short)2] [i_23])))))));
        /* LoopSeq 1 */
        for (unsigned short i_24 = 2; i_24 < 15; i_24 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_25 = 1; i_25 < 12; i_25 += 1) 
            {
                arr_85 [i_24] = ((/* implicit */unsigned short) 10468505656626405531ULL);
                /* LoopNest 2 */
                for (unsigned char i_26 = 0; i_26 < 16; i_26 += 1) 
                {
                    for (short i_27 = 2; i_27 < 14; i_27 += 2) 
                    {
                        {
                            var_51 = ((/* implicit */signed char) ((((/* implicit */int) var_14)) % (((/* implicit */int) var_5))));
                            var_52 = ((/* implicit */signed char) (-(var_7)));
                        }
                    } 
                } 
                var_53 = ((/* implicit */unsigned short) var_12);
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_28 = 0; i_28 < 16; i_28 += 4) 
            {
                arr_93 [i_23] [i_28] &= ((/* implicit */unsigned char) arr_23 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23]);
                /* LoopNest 2 */
                for (unsigned char i_29 = 0; i_29 < 16; i_29 += 3) 
                {
                    for (unsigned char i_30 = 4; i_30 < 15; i_30 += 3) 
                    {
                        {
                            var_54 &= ((/* implicit */unsigned short) arr_95 [i_23] [i_24] [i_28] [i_29] [i_30] [(unsigned char)5]);
                            arr_98 [i_23] [i_24] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_15)) * (var_7)))) || (((((/* implicit */long long int) ((/* implicit */int) var_5))) > (-7869572274052095693LL)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_31 = 0; i_31 < 16; i_31 += 3) 
                {
                    arr_101 [i_23] [i_24] [i_24] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_92 [i_23] [(unsigned char)10] [i_28] [i_31])) + (((/* implicit */int) var_4))))) ? (arr_0 [(_Bool)1]) : (((/* implicit */long long int) (-(((/* implicit */int) var_13)))))));
                    /* LoopSeq 4 */
                    for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
                    {
                        var_55 &= ((/* implicit */unsigned short) var_4);
                        arr_104 [i_23] [i_24] [i_28] [i_28] [i_31] [i_24] = ((((/* implicit */_Bool) var_6)) ? (((unsigned int) var_7)) : (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_6)))))));
                    }
                    for (unsigned short i_33 = 0; i_33 < 16; i_33 += 1) 
                    {
                        var_56 &= ((/* implicit */long long int) arr_31 [i_33] [i_33]);
                        var_57 = ((/* implicit */unsigned short) arr_30 [i_23] [i_24 + 1] [i_28] [i_31] [i_33] [i_33]);
                        var_58 = ((/* implicit */unsigned long long int) max((var_58), (((/* implicit */unsigned long long int) 8805807626982406801LL))));
                        arr_108 [(short)8] [i_23] [i_28] [i_28] [i_28] [i_28] &= ((/* implicit */unsigned char) (+(((long long int) (short)7282))));
                    }
                    for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                    {
                        var_59 &= ((/* implicit */unsigned int) ((signed char) ((unsigned int) arr_13 [(unsigned char)15] [(unsigned char)15])));
                        var_60 = var_8;
                        arr_112 [i_23] [i_24] [i_23] &= ((/* implicit */_Bool) var_8);
                    }
                    for (unsigned short i_35 = 0; i_35 < 16; i_35 += 1) 
                    {
                        var_61 = ((/* implicit */long long int) ((signed char) var_8));
                        var_62 = ((/* implicit */long long int) max((var_62), (((((/* implicit */_Bool) arr_106 [i_23] [i_24] [i_28] [i_28] [(unsigned short)13])) ? (((arr_20 [i_24]) ? (-8934045456571192343LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                        arr_116 [i_24] [5ULL] [i_24 - 2] [5ULL] [i_24 - 1] [i_24] = ((/* implicit */unsigned long long int) var_9);
                    }
                    var_63 = ((/* implicit */_Bool) min((var_63), (((/* implicit */_Bool) 10468505656626405556ULL))));
                    var_64 = ((/* implicit */signed char) arr_45 [i_23] [3LL] [i_28] [i_31] [i_31]);
                    var_65 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (((arr_66 [i_23] [i_23] [i_23]) + (((/* implicit */long long int) ((/* implicit */int) (signed char)108)))))));
                }
                for (_Bool i_36 = 0; i_36 < 0; i_36 += 1) 
                {
                    arr_119 [i_23] &= ((/* implicit */unsigned short) var_4);
                    arr_120 [i_28] [i_24 - 2] &= ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) arr_107 [i_23] [(unsigned char)14] [i_23] [i_23] [8LL] [i_23] [i_23])))));
                }
            }
            for (unsigned char i_37 = 0; i_37 < 16; i_37 += 1) 
            {
                var_66 = arr_73 [i_37] [i_24 - 2] [i_24] [i_24] [i_23];
                var_67 = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)24812)), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)79))))));
            }
            var_68 = ((/* implicit */unsigned long long int) max((var_68), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) == (((/* implicit */int) arr_97 [i_23] [i_24 + 1] [i_24] [i_24 + 1] [i_24 - 1])))))));
        }
        var_69 = ((/* implicit */signed char) var_8);
        var_70 = ((/* implicit */int) min((min((max((var_7), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) var_6)), (var_2))) * (((/* implicit */unsigned int) (+(((/* implicit */int) arr_79 [i_23] [i_23]))))))))));
    }
    for (unsigned short i_38 = 0; i_38 < 16; i_38 += 4) /* same iter space */
    {
        arr_126 [i_38] = ((/* implicit */unsigned char) var_0);
        /* LoopNest 2 */
        for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
        {
            for (unsigned int i_40 = 0; i_40 < 16; i_40 += 3) 
            {
                {
                    var_71 &= ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_114 [i_38] [i_38] [i_40] [i_40])) ^ (var_10)))), (min((((/* implicit */unsigned int) (short)-29932)), (arr_106 [i_38] [i_39] [i_39] [i_39] [i_40]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_41 = 0; i_41 < 16; i_41 += 4) 
                    {
                        for (unsigned long long int i_42 = 2; i_42 < 15; i_42 += 1) 
                        {
                            {
                                var_72 &= ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_2))));
                                var_73 = ((/* implicit */short) max((var_73), (((/* implicit */short) var_2))));
                                var_74 &= var_5;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_43 = 1; i_43 < 15; i_43 += 1) 
                    {
                        for (unsigned short i_44 = 3; i_44 < 13; i_44 += 1) 
                        {
                            {
                                var_75 = ((/* implicit */_Bool) min((var_75), (((/* implicit */_Bool) ((((((/* implicit */long long int) var_8)) & (((-8934045456571192335LL) & (((/* implicit */long long int) var_15)))))) >> (((var_12) + (1538427004))))))));
                                var_76 = ((/* implicit */int) ((((((/* implicit */_Bool) ((int) (signed char)117))) || (((/* implicit */_Bool) arr_134 [i_38] [i_39] [i_39] [i_40] [i_43] [12LL])))) && (((((/* implicit */_Bool) max((8934045456571192342LL), (((/* implicit */long long int) var_10))))) || (((/* implicit */_Bool) var_0))))));
                            }
                        } 
                    } 
                    var_77 = ((/* implicit */short) min((var_77), (((/* implicit */short) ((((unsigned long long int) ((short) var_3))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_136 [(signed char)11] [i_39] [i_40] [(signed char)11] [(signed char)11]))))))));
                }
            } 
        } 
    }
    for (unsigned short i_45 = 0; i_45 < 16; i_45 += 4) /* same iter space */
    {
        arr_144 [i_45] = ((/* implicit */unsigned long long int) (unsigned char)44);
        var_78 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
    }
}
