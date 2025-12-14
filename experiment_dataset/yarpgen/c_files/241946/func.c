/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241946
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
    var_15 = ((/* implicit */_Bool) var_14);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
            var_17 = ((/* implicit */signed char) ((unsigned int) arr_0 [i_1]));
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
            arr_6 [i_1] = ((/* implicit */_Bool) (short)7230);
        }
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                var_18 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((signed char) (short)(-32767 - 1)))) != (((/* implicit */int) ((((/* implicit */_Bool) (short)7230)) && (((/* implicit */_Bool) (unsigned short)35364))))))))) % (((((/* implicit */_Bool) (short)-25014)) ? (((unsigned int) (unsigned char)6)) : (arr_3 [i_2]))));
                var_19 = ((/* implicit */signed char) arr_10 [i_0]);
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min((arr_1 [12U]), (((/* implicit */signed char) var_8))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (short)7230))))) : (((/* implicit */int) ((_Bool) var_2)))))) : (427896027U)));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */int) min((var_5), ((!(((/* implicit */_Bool) var_2))))))) | (((/* implicit */int) min((var_13), (((/* implicit */short) min(((_Bool)1), (arr_2 [i_4])))))))));
                            var_22 = max((min((((/* implicit */unsigned int) arr_13 [i_0] [3U] [i_0] [13U])), (((unsigned int) var_4)))), (2400849432U));
                            arr_17 [i_4] [i_2] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)30172)), (3992212094U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)23248)) : (((/* implicit */int) (unsigned short)0))))) : (arr_3 [i_4])))));
                        }
                    } 
                } 
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_23 = ((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_6] [19U] [i_0] [i_0]))));
                arr_22 [i_0] [i_6] [i_0] = (_Bool)1;
            }
            /* LoopSeq 2 */
            for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
            {
                arr_26 [i_0] [i_0] [i_7] [(unsigned short)16] = ((/* implicit */unsigned short) var_12);
                arr_27 [i_0] [i_2] [i_0] [i_2] = ((/* implicit */long long int) ((unsigned short) min((((((/* implicit */int) var_13)) * (((/* implicit */int) var_12)))), (((/* implicit */int) var_7)))));
                var_24 |= ((/* implicit */unsigned short) var_0);
            }
            for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
            {
                arr_30 [(signed char)16] [i_8] [i_2] [i_8] = ((/* implicit */unsigned char) (~(max((((var_12) ? (((/* implicit */int) (unsigned short)35363)) : (((/* implicit */int) (unsigned short)39159)))), (((/* implicit */int) ((0U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [(unsigned char)12] [(unsigned char)12] [i_8]))))))))));
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) ((signed char) (_Bool)1));
                            var_26 = ((/* implicit */short) (_Bool)1);
                            arr_35 [i_8] [i_2] [i_8] [i_9] [i_10] = ((/* implicit */short) ((((((1073741823U) << (((/* implicit */int) (_Bool)1)))) << (((((/* implicit */int) var_13)) + (95))))) >= (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_4 [i_9] [1LL]) : (((arr_4 [i_10] [i_0]) << (((/* implicit */int) var_11))))))));
                            var_27 = ((/* implicit */short) ((unsigned int) var_0));
                        }
                    } 
                } 
            }
            arr_36 [i_0] = ((/* implicit */signed char) max(((-(((/* implicit */int) arr_23 [i_0] [i_0])))), (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_23 [i_2] [i_0])) : (((/* implicit */int) arr_23 [i_2] [i_0]))))));
        }
        for (unsigned int i_11 = 0; i_11 < 23; i_11 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 23; i_12 += 1) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) var_11))));
                        var_29 = ((/* implicit */unsigned char) 4294967295U);
                        arr_45 [i_13] [i_11] = ((/* implicit */unsigned short) var_2);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_14 = 0; i_14 < 23; i_14 += 1) 
            {
                arr_50 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */int) (short)-10236)), (max(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (unsigned short)62304))))));
                arr_51 [i_14] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((8652194825998142388LL), (((/* implicit */long long int) (_Bool)0))))) ? (max((((-5352130654946170789LL) | (var_0))), (((/* implicit */long long int) var_6)))) : (((min((((/* implicit */long long int) (_Bool)1)), (var_1))) + (((/* implicit */long long int) max((4294967287U), (((/* implicit */unsigned int) arr_41 [10U] [i_11] [i_0] [i_0])))))))));
                arr_52 [i_0] [i_11] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((785447671U), (1657688748U)))) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)103)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)8668))))))) : (((var_1) | (((/* implicit */long long int) ((var_7) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_15 [i_0] [i_11] [i_14])))))))));
                arr_53 [i_0] [i_0] [(unsigned char)0] [i_14] = ((/* implicit */unsigned short) ((_Bool) arr_29 [i_0] [(signed char)0]));
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_30 = ((/* implicit */unsigned int) (_Bool)0);
                var_31 = 2373056940U;
                var_32 = ((/* implicit */long long int) max((min((min((arr_46 [(_Bool)1]), (1205577997U))), (((/* implicit */unsigned int) max(((unsigned short)0), (((/* implicit */unsigned short) arr_39 [i_15] [i_0]))))))), (((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) arr_11 [(unsigned short)7] [(signed char)13] [(unsigned short)7] [(short)17])))))));
                arr_58 [i_15] = ((/* implicit */unsigned short) arr_46 [i_15]);
                arr_59 [i_15] = ((/* implicit */_Bool) min((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_12)))), (arr_43 [i_0] [i_15] [i_0] [i_15] [i_0] [i_15])));
            }
        }
        for (unsigned short i_16 = 0; i_16 < 23; i_16 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_17 = 0; i_17 < 23; i_17 += 2) 
            {
                for (long long int i_18 = 0; i_18 < 23; i_18 += 2) 
                {
                    {
                        arr_69 [i_0] [(short)0] [i_0] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(8358678125036202939LL))) * (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)14898), ((unsigned short)0)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_16 [i_0] [i_0] [i_17] [i_18] [i_18]), (var_3))))) : (((((/* implicit */_Bool) min(((unsigned short)32736), (((/* implicit */unsigned short) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_18])), ((unsigned short)65533))))) : (((((/* implicit */_Bool) 1233272235U)) ? (1036711515U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                        arr_70 [i_16] [(short)17] = ((/* implicit */long long int) (unsigned char)255);
                        arr_71 [i_16] [i_16] [i_16] = ((/* implicit */_Bool) arr_11 [i_18] [i_0] [i_16] [i_0]);
                        var_33 *= ((/* implicit */short) (unsigned short)12288);
                    }
                } 
            } 
            arr_72 [i_16] [i_16] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_40 [i_16] [(signed char)0] [i_0] [(unsigned short)10]))));
            arr_73 [i_16] = 1703224903U;
        }
        var_34 = ((/* implicit */unsigned short) max((((((_Bool) 3061695057U)) ? ((~(((/* implicit */int) arr_55 [i_0] [i_0] [(short)12] [(short)12])))) : (((/* implicit */int) var_14)))), (((/* implicit */int) var_14))));
    }
    for (unsigned char i_19 = 0; i_19 < 24; i_19 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_20 = 0; i_20 < 24; i_20 += 3) 
        {
            var_35 *= ((/* implicit */signed char) var_13);
            /* LoopSeq 4 */
            for (unsigned short i_21 = 0; i_21 < 24; i_21 += 3) 
            {
                var_36 = ((/* implicit */unsigned short) arr_78 [i_20]);
                var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) (~(((/* implicit */int) var_12)))))));
                arr_84 [i_19] [i_19] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)7)) && (var_9)));
                arr_85 [(_Bool)1] [i_19] [(_Bool)1] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) var_0)))));
                var_38 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1233272235U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45514))) : (var_1)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)63))));
            }
            for (unsigned char i_22 = 0; i_22 < 24; i_22 += 3) 
            {
                arr_89 [i_19] [i_19] [i_19] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_76 [i_19]))));
                var_39 -= ((/* implicit */unsigned short) (((_Bool)1) ? (((long long int) 0U)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
                var_40 = ((/* implicit */short) ((((/* implicit */int) arr_86 [i_22] [i_20] [i_19])) == (((/* implicit */int) ((unsigned short) 3609598070U)))));
            }
            for (unsigned short i_23 = 0; i_23 < 24; i_23 += 3) 
            {
                var_41 = ((_Bool) arr_76 [16U]);
                arr_92 [i_19] [i_20] [i_23] [i_23] = ((/* implicit */unsigned short) var_3);
                var_42 |= ((/* implicit */unsigned char) ((signed char) arr_87 [10U] [10U] [(unsigned short)14] [i_19]));
                var_43 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
                arr_93 [i_19] [i_19] [i_23] [i_19] = ((/* implicit */unsigned short) var_13);
            }
            for (unsigned short i_24 = 0; i_24 < 24; i_24 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_25 = 0; i_25 < 24; i_25 += 3) 
                {
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        {
                            arr_102 [i_19] [i_19] [i_19] [i_24] [i_19] [18LL] [i_26] = ((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) var_14)))));
                            arr_103 [i_20] [i_19] [i_19] [i_20] [i_19] [i_19] = ((/* implicit */unsigned int) ((_Bool) ((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_79 [i_19] [i_19] [i_19]))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_27 = 0; i_27 < 24; i_27 += 3) 
                {
                    var_44 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_101 [i_19] [i_19] [i_19] [i_19] [i_19]))));
                    var_45 -= ((arr_105 [i_19] [i_20] [i_20] [i_19]) == (((/* implicit */long long int) ((/* implicit */int) var_2))));
                }
                for (unsigned short i_28 = 0; i_28 < 24; i_28 += 3) /* same iter space */
                {
                    arr_109 [i_19] = ((/* implicit */unsigned short) (~(arr_79 [i_19] [i_20] [i_19])));
                    var_46 = ((/* implicit */_Bool) arr_104 [i_19] [i_20] [i_24] [i_24]);
                    /* LoopSeq 2 */
                    for (short i_29 = 0; i_29 < 24; i_29 += 3) 
                    {
                        var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) (short)23472))))))));
                        arr_112 [i_19] [i_20] [i_20] = ((/* implicit */unsigned int) arr_110 [i_19] [i_19] [i_24] [i_24] [i_29]);
                        var_48 = ((/* implicit */short) (_Bool)1);
                        arr_113 [i_19] [i_20] [i_24] [3U] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (arr_100 [(unsigned short)3] [(unsigned short)3] [(unsigned short)3] [i_20] [(unsigned short)3] [(unsigned short)3] [i_29])));
                    }
                    for (unsigned int i_30 = 0; i_30 < 24; i_30 += 4) 
                    {
                        arr_117 [i_24] [i_20] [i_20] [i_20] [i_19] [23LL] = ((/* implicit */signed char) ((var_9) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_88 [i_30] [i_28] [i_24] [i_19]))));
                        var_49 = ((/* implicit */long long int) arr_104 [i_19] [i_20] [0LL] [(unsigned short)9]);
                        var_50 = ((/* implicit */unsigned char) ((arr_98 [i_19] [i_19] [15U] [i_19]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_98 [i_19] [i_20] [i_24] [i_28]))));
                    }
                }
                for (unsigned short i_31 = 0; i_31 < 24; i_31 += 3) /* same iter space */
                {
                    arr_122 [i_19] [i_19] [i_24] [i_24] [i_19] [i_24] = ((/* implicit */unsigned short) 1473524805U);
                    var_51 = ((/* implicit */signed char) min((var_51), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_0) / (var_1)))) ? ((-(((/* implicit */int) var_14)))) : (((/* implicit */int) arr_75 [(signed char)4])))))));
                    arr_123 [i_19] [i_19] [i_20] [i_24] [i_31] [i_31] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16380)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) var_6))));
                }
            }
        }
        arr_124 [i_19] = ((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */short) var_11)), ((short)-8260))))));
    }
    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
    {
        var_52 = ((/* implicit */unsigned short) var_9);
        arr_127 [i_32] = ((/* implicit */unsigned short) (~((+(var_1)))));
    }
    var_53 = ((/* implicit */_Bool) max((var_53), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40545)) ? (3172618370U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (766366412U) : (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)0), ((_Bool)1))))))))));
}
