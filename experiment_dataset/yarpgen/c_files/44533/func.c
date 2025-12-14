/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44533
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [(unsigned char)9])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)169)))))) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) var_6)))), (((/* implicit */int) max(((unsigned char)162), (((/* implicit */unsigned char) arr_1 [i_1 - 1] [i_0])))))));
                    arr_11 [i_0] [i_1] [i_0] [i_2] = arr_3 [(unsigned char)19] [i_2];
                    arr_12 [i_2] = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)83)), (((((/* implicit */int) max(((signed char)-80), (((/* implicit */signed char) arr_3 [i_0] [i_0]))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_2])))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_5 = 1; i_5 < 16; i_5 += 2) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_25 [i_3] [(unsigned char)8] [i_5] [i_3] [(signed char)13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_7 [i_3] [i_3])))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)16729))));
                            var_13 ^= ((/* implicit */long long int) (~(((/* implicit */int) (signed char)9))));
                            var_14 -= ((/* implicit */unsigned short) arr_17 [(_Bool)1] [(_Bool)1]);
                            var_15 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)167)) >= (((/* implicit */int) (signed char)-24)))))));
                            arr_26 [i_3] [i_6] [i_3] [i_6] [i_6] [(_Bool)1] = ((/* implicit */unsigned short) arr_15 [i_4]);
                        }
                        var_16 |= (((_Bool)0) && (((/* implicit */_Bool) arr_21 [i_5] [i_5 + 2] [i_5] [i_5 + 2] [i_5 + 3])));
                        /* LoopSeq 3 */
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            arr_31 [i_3] [i_4] [i_5] [i_6] [i_8] = ((/* implicit */_Bool) ((((_Bool) arr_13 [i_3] [i_4])) ? (((/* implicit */int) ((_Bool) 1314678078702384440LL))) : ((~(((/* implicit */int) (_Bool)1))))));
                            var_17 = ((/* implicit */_Bool) ((long long int) (unsigned char)169));
                            arr_32 [i_3] [i_3] [i_5 - 1] [i_5] [i_5 - 1] [(_Bool)1] [i_8] = ((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_8)))))));
                            var_18 = arr_24 [i_8] [i_4] [(unsigned char)19] [i_6] [(signed char)2] [i_8 + 1] [i_3];
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_10))));
                        }
                        for (signed char i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            var_20 = ((/* implicit */long long int) arr_20 [i_5]);
                            arr_37 [i_3] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_28 [i_5] [i_3] [i_5] [i_6] [i_9])) : (((/* implicit */int) (signed char)-24))));
                        }
                        for (long long int i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((signed char) arr_22 [i_3] [i_5] [i_5] [i_5] [i_5 + 4] [i_10])))));
                            arr_40 [i_10] [(_Bool)1] [i_3] [(_Bool)1] [i_3] [(unsigned short)16] [(unsigned short)7] = ((/* implicit */unsigned char) ((arr_24 [i_3] [i_10] [(_Bool)1] [i_5 + 4] [i_5 + 1] [i_5 + 1] [i_3]) && (var_7)));
                            arr_41 [i_3] [i_3] [(_Bool)1] [i_6] [i_3] = ((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_36 [(signed char)14] [i_3] [i_5] [(signed char)17] [(signed char)14]))))));
                            arr_42 [i_3] [i_4] = arr_18 [(unsigned char)18] [i_5];
                        }
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                    }
                    for (long long int i_11 = 0; i_11 < 20; i_11 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)162)) && (((/* implicit */_Bool) min((arr_36 [i_3] [i_3] [i_3] [i_5 + 1] [i_11]), (arr_36 [i_3] [i_3] [i_3] [i_5 + 4] [i_11]))))));
                        arr_46 [i_3] = ((/* implicit */_Bool) 6098738240575242298LL);
                        /* LoopSeq 2 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_50 [i_3] [i_3] [i_5] [i_11] [i_12] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_3] [i_12]))))) ? (6098738240575242319LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)156)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -6098738240575242320LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3] [i_4]))) : (arr_29 [i_3] [i_3] [(_Bool)1] [i_3] [i_3] [i_3])))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_4] [i_11]))))) : (arr_30 [i_5 + 2] [i_5] [i_5 + 2] [i_5 + 1] [i_5 + 1])))));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)17)) ? ((((((_Bool)1) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) (_Bool)0)))) % ((+(((/* implicit */int) arr_33 [i_3] [i_4] [i_5] [i_5 - 1] [i_11] [i_12])))))) : (((/* implicit */int) arr_9 [i_4] [i_3])))))));
                        }
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            arr_54 [i_3] [i_3] [(_Bool)1] [i_3] [(_Bool)1] [i_3] [i_3] = ((/* implicit */_Bool) -6098738240575242319LL);
                            var_25 = ((/* implicit */unsigned short) ((max((((((/* implicit */int) var_7)) + (((/* implicit */int) arr_48 [i_13] [i_11] [i_4] [i_4])))), (((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [(_Bool)1])))))) << (((var_6) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)19)) >= (((/* implicit */int) var_4)))))))));
                        }
                        var_26 += (_Bool)1;
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_57 [i_4] [i_3] [i_3] [(signed char)13] = arr_4 [i_3] [i_3];
                        var_27 = ((/* implicit */_Bool) min((var_27), (arr_48 [(_Bool)1] [i_5 + 4] [i_5 + 1] [(_Bool)1])));
                        var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_8 [i_5 + 4] [i_5 - 1] [i_5 - 1]), (((/* implicit */unsigned char) ((arr_0 [i_14] [i_4]) || (((/* implicit */_Bool) (unsigned short)0))))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_15] [i_5 + 4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_3] [(unsigned short)18] [i_15 + 1] [(unsigned short)18] [i_5 + 4] [i_3] [i_3]))) : (arr_7 [i_3] [i_3])));
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [(_Bool)1] [i_4] [i_5] [i_15] [i_15] [i_4])) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_3] [i_4])))))));
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */int) (!(var_10)))) * ((((_Bool)1) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) arr_27 [(unsigned char)4] [i_5]))))));
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) arr_5 [i_15 + 1] [i_5 - 1] [i_4])) : (((/* implicit */int) (_Bool)1)))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_16 = 0; i_16 < 20; i_16 += 3) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                arr_66 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)248))))) ? (max((((/* implicit */long long int) (_Bool)1)), (0LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) ((unsigned char) max(((_Bool)1), ((_Bool)1)))))));
                                var_33 = (_Bool)0;
                            }
                        } 
                    } 
                    arr_67 [i_3] [i_3] [i_3] = (_Bool)1;
                    arr_68 [i_3] [i_3] [i_5] [i_5] = ((/* implicit */unsigned short) arr_61 [i_3] [i_4]);
                }
                for (unsigned char i_18 = 1; i_18 < 19; i_18 += 4) 
                {
                    arr_71 [i_18] [i_3] [i_3] [i_3] = (signed char)-71;
                    arr_72 [i_3] [i_4] [i_18] = ((_Bool) min(((unsigned char)3), (((/* implicit */unsigned char) (_Bool)1))));
                }
                for (unsigned char i_19 = 0; i_19 < 20; i_19 += 1) /* same iter space */
                {
                    arr_75 [i_3] = ((/* implicit */_Bool) ((signed char) 10LL));
                    /* LoopSeq 1 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        arr_80 [i_3] = ((/* implicit */signed char) (_Bool)1);
                        var_34 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6))) : (arr_35 [(unsigned char)4] [i_3] [i_4] [i_19] [i_20])))) ? (-4101375088786724633LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */int) arr_5 [i_3] [i_3] [i_3])) : (((/* implicit */int) (unsigned short)12078)))))))));
                        var_35 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_28 [i_3] [(signed char)4] [i_4] [i_19] [i_4])), (var_2))), (((/* implicit */long long int) (_Bool)1))));
                        arr_81 [i_3] [i_19] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_3] [i_3] [i_3] [i_3] [i_3] [(_Bool)1])) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_15 [i_3])))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_53 [i_3] [i_3] [i_3] [i_3] [i_3] [(unsigned short)12] [i_3]) && (((/* implicit */_Bool) 0LL)))))) : ((((_Bool)1) ? (((((/* implicit */_Bool) arr_35 [i_3] [i_3] [i_19] [i_20] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4] [i_20]))) : (arr_7 [i_3] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))));
                        arr_82 [i_3] [i_19] [i_4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3] [i_3]))))) : ((-(((/* implicit */int) (_Bool)1))))));
                    }
                    var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((long long int) min((arr_79 [i_3] [(_Bool)1] [i_4] [8LL] [i_19]), ((_Bool)0)))))));
                }
                /* vectorizable */
                for (unsigned char i_21 = 0; i_21 < 20; i_21 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        for (signed char i_23 = 0; i_23 < 20; i_23 += 4) 
                        {
                            {
                                var_37 |= ((/* implicit */long long int) ((((/* implicit */int) arr_70 [i_23] [i_22] [i_21] [i_4])) >= (((/* implicit */int) arr_22 [i_3] [i_4] [i_21] [i_3] [i_3] [i_21]))));
                                var_38 = ((/* implicit */signed char) ((((var_2) | (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_4] [i_4]))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_3] [i_4] [i_21] [i_23])))));
                                arr_91 [i_3] [i_3] [i_4] [i_21] [i_3] [i_3] [i_23] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)109)) ? (((((/* implicit */_Bool) -9223372036854775793LL)) ? (9007199254740991LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)197))))) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_3] [i_4] [i_21] [i_22] [i_23])))));
                                arr_92 [i_3] [i_4] [i_3] [i_21] [i_22] [i_23] = ((/* implicit */_Bool) ((arr_35 [i_3] [i_4] [i_21] [(unsigned short)4] [i_23]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_24 = 0; i_24 < 20; i_24 += 1) 
                    {
                        for (unsigned char i_25 = 0; i_25 < 20; i_25 += 3) 
                        {
                            {
                                arr_99 [i_3] [i_4] [i_3] [i_24] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_48 [i_3] [i_4] [i_4] [i_24]))));
                                arr_100 [i_3] [i_24] [i_21] [(unsigned char)8] [i_3] = ((/* implicit */signed char) ((_Bool) (unsigned char)92));
                            }
                        } 
                    } 
                }
                var_39 -= ((/* implicit */signed char) var_9);
                /* LoopNest 2 */
                for (unsigned short i_26 = 2; i_26 < 19; i_26 += 2) 
                {
                    for (unsigned char i_27 = 0; i_27 < 20; i_27 += 3) 
                    {
                        {
                            arr_105 [i_3] [16LL] [i_4] [i_3] = ((/* implicit */signed char) ((unsigned short) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_0 [(_Bool)1] [(_Bool)1])))))));
                            var_40 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775792LL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_77 [i_26 - 1] [i_26 - 2] [i_26 - 1])))))) ? (((/* implicit */int) arr_77 [i_26 - 1] [i_26 - 2] [i_26 - 1])) : ((-(((/* implicit */int) arr_77 [i_26 - 1] [i_26 - 2] [i_26 - 1]))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_28 = 1; i_28 < 18; i_28 += 3) /* same iter space */
                {
                    var_41 = ((/* implicit */unsigned char) min((((_Bool) ((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_43 [i_3] [19LL] [(_Bool)1] [i_4])))), (((_Bool) max((arr_7 [i_3] [i_3]), (((/* implicit */long long int) (unsigned short)33285)))))));
                    arr_108 [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) arr_38 [i_3] [i_28 + 1] [i_28]);
                }
                for (unsigned char i_29 = 1; i_29 < 18; i_29 += 3) /* same iter space */
                {
                    var_42 = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_13 [i_3] [i_4])), (((long long int) min((arr_53 [10LL] [(unsigned char)4] [i_4] [i_3] [i_3] [i_3] [i_3]), (arr_88 [(_Bool)1] [i_4] [i_4] [(_Bool)1] [i_3]))))));
                    arr_112 [i_3] [i_3] [i_29] [i_29] = (((~((~(((/* implicit */int) arr_104 [i_3] [i_3] [i_3] [7LL] [i_3] [i_3])))))) <= (((/* implicit */int) (unsigned short)65535)));
                }
            }
        } 
    } 
    var_43 = ((/* implicit */_Bool) min(((+(((/* implicit */int) ((_Bool) (unsigned short)0))))), (((/* implicit */int) ((_Bool) (signed char)16)))));
}
