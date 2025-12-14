/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39258
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
    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) var_16)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-24172)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_6 [i_0] [i_1] [i_1] [i_1]);
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24189)) ? (((/* implicit */int) (short)24171)) : (((/* implicit */int) var_7))))))))));
                    arr_10 [i_0] [i_0] = (unsigned char)13;
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) var_17);
        /* LoopSeq 3 */
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            arr_14 [i_0] = ((/* implicit */unsigned int) (+(((2400260006879234440LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))));
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) max((var_3), (arr_2 [i_0 + 1])))) != (((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */int) (short)24019)) : (var_10))))))));
        }
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
        {
            var_23 -= ((/* implicit */short) var_1);
            var_24 *= ((/* implicit */short) var_0);
            arr_19 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (min((((/* implicit */long long int) (signed char)61)), (-7459025673979248290LL))) : (((/* implicit */long long int) var_18))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (short i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */short) arr_7 [i_0 + 2] [i_4] [i_5]);
                            var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_22 [i_7] [i_7] [i_7] [i_7]))));
                            arr_27 [i_7] [i_0] [i_7] [i_5] [i_5] [i_0] [i_0] = (short)18398;
                            var_27 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)237))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
                {
                    arr_30 [i_0] [i_0] [i_8] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                    var_28 = var_0;
                    arr_31 [i_8] [i_0] [i_5] [i_0] [i_0 + 2] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_5] [i_0]))));
                    /* LoopSeq 4 */
                    for (int i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        arr_35 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_3 [i_0]);
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) arr_16 [i_0] [i_4]))));
                        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (unsigned char)56)))))) : (((((/* implicit */_Bool) (short)-9008)) ? (arr_13 [i_9] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                        arr_36 [i_0] [i_0] [i_5] [i_0] [i_5] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_17 [i_0]))))));
                    }
                    for (signed char i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        arr_40 [i_0] [i_4] [i_5] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)7)) : (var_10)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)242))))) : (arr_15 [i_0 + 2])));
                        var_31 &= ((/* implicit */unsigned char) ((arr_16 [i_0 - 1] [i_8]) <= (arr_16 [i_0] [i_10])));
                        arr_41 [i_5] [i_5] [i_5] [i_5] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (short)-24195))));
                    }
                    for (short i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        arr_45 [i_8] [i_4] &= ((/* implicit */short) ((((/* implicit */_Bool) -7459025673979248290LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (short)18032)))))) : (65011712U)));
                        var_32 *= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)40))) ? (var_0) : (((((/* implicit */_Bool) 2301339409586323456LL)) ? (arr_3 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                        var_33 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)114))) <= ((-(65011712U)))));
                    }
                    for (short i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        var_34 = ((/* implicit */long long int) max((var_34), (((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) -386535413)) : (2301339409586323456LL)))));
                        var_35 = ((/* implicit */short) (~((~(((/* implicit */int) arr_2 [i_4]))))));
                    }
                    var_36 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_38 [i_0] [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_8]))));
                }
                for (unsigned int i_13 = 0; i_13 < 22; i_13 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        arr_57 [i_0] [i_0] [i_0] [i_0] [i_5] [i_13] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_13 [i_0] [i_14]) + (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)50)) : (var_11)))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) var_10)) : (var_13)))));
                        arr_58 [i_0] [i_0] [i_5] [i_0] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) (short)24194)) ? (((/* implicit */int) arr_20 [i_0] [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)56)))))));
                    }
                    for (int i_15 = 0; i_15 < 22; i_15 += 1) 
                    {
                        arr_63 [i_0] [i_15] [i_4] [i_15] [i_0] [i_0] = ((/* implicit */unsigned int) arr_54 [i_0] [i_4] [i_5] [i_13] [i_15]);
                        var_37 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-115))))) < ((~(var_14)))));
                        arr_64 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)73)) >> (((-2301339409586323456LL) + (2301339409586323480LL)))));
                        var_38 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_60 [i_0] [i_0] [i_0] [i_0 + 1] [i_0])) ? (((/* implicit */int) var_12)) : (var_11))) >= (((/* implicit */int) arr_28 [i_0 + 2] [i_0]))));
                    }
                    var_39 = ((/* implicit */short) min((var_39), ((short)124)));
                }
                for (unsigned int i_16 = 0; i_16 < 22; i_16 += 2) /* same iter space */
                {
                    arr_68 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */signed char) 264828211);
                    var_40 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-3954)) ? (((/* implicit */int) (short)-6719)) : (((/* implicit */int) (unsigned short)65535)))) > (((/* implicit */int) var_3))));
                }
            }
            for (short i_17 = 2; i_17 < 21; i_17 += 2) 
            {
                arr_72 [i_0] [i_4] [i_4] [i_0] = ((/* implicit */long long int) (((-(var_10))) % (((((/* implicit */_Bool) max((4108350456811418326LL), (((/* implicit */long long int) (unsigned short)37025))))) ? (((/* implicit */int) arr_33 [i_17 - 2] [i_17 - 2] [i_17] [i_17 - 2] [i_17 - 2])) : (((/* implicit */int) arr_21 [i_0]))))));
                var_41 = ((/* implicit */unsigned char) ((0U) != ((+(arr_52 [i_0 + 1] [i_4] [i_0 + 1] [i_0 + 1])))));
            }
            /* vectorizable */
            for (unsigned short i_18 = 0; i_18 < 22; i_18 += 1) 
            {
                arr_75 [i_0 + 2] [i_0] [i_0 + 2] = ((/* implicit */long long int) (+(((/* implicit */int) var_7))));
                var_42 = ((/* implicit */short) (~(arr_32 [i_0] [i_0 - 1] [i_18])));
            }
            for (unsigned int i_19 = 0; i_19 < 22; i_19 += 2) 
            {
                var_43 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_0] [i_0 + 2] [i_4] [i_4] [i_19])))))));
                arr_78 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) var_12)))))));
                /* LoopNest 2 */
                for (unsigned char i_20 = 0; i_20 < 22; i_20 += 2) 
                {
                    for (short i_21 = 0; i_21 < 22; i_21 += 4) 
                    {
                        {
                            arr_84 [i_21] [i_0] [i_19] [i_0] [i_0] = ((/* implicit */short) var_13);
                            arr_85 [i_19] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(264828211)))) ? (((/* implicit */int) ((unsigned char) arr_65 [i_0 + 2] [i_0] [i_0 + 2] [i_0]))) : ((-(((/* implicit */int) var_6))))));
                            var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) ((((/* implicit */_Bool) (+(arr_8 [i_0] [i_0])))) || (((/* implicit */_Bool) min((var_3), (arr_2 [i_0 + 2])))))))));
                        }
                    } 
                } 
            }
            arr_86 [i_4] [i_0] = ((/* implicit */short) (!((!(((((/* implicit */int) var_6)) > (((/* implicit */int) var_3))))))));
        }
        for (unsigned char i_22 = 0; i_22 < 22; i_22 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_23 = 0; i_23 < 22; i_23 += 1) 
            {
                for (long long int i_24 = 0; i_24 < 22; i_24 += 3) 
                {
                    {
                        arr_93 [i_0] [i_22] [i_22] [i_24] [i_22] = ((/* implicit */unsigned char) var_17);
                        arr_94 [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_90 [i_0] [i_0] [i_0 + 1] [i_23])) ? (arr_52 [i_0] [i_22] [i_23] [i_24]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_24] [i_23] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)28510)))))))));
                    }
                } 
            } 
            var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_82 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_82 [i_0] [i_22] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4229955583U))))) : (((/* implicit */int) (unsigned short)65535)))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-14255)), (var_17)))) ? ((-(arr_43 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0 - 1]))) : (((/* implicit */int) var_12))))));
        }
    }
    var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) var_8))));
    var_47 = ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (var_5)))) || (((((/* implicit */_Bool) (short)31852)) || (((/* implicit */_Bool) (signed char)-39)))))) && ((!(((/* implicit */_Bool) 0LL))))));
}
