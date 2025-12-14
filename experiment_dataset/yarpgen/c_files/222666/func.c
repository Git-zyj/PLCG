/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222666
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (var_4) : (((/* implicit */int) arr_2 [i_0 + 1]))))) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1])))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max((((((/* implicit */int) arr_1 [(short)16])) >> (((((/* implicit */int) (unsigned short)65527)) - (65506))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned char)0]))))))))));
        var_17 -= ((/* implicit */unsigned short) (!(((max((1027340264), (((/* implicit */int) var_8)))) == (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)27118)) : (-1027340264)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */int) ((unsigned short) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)65527)) || (((/* implicit */_Bool) arr_2 [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_14 [(short)3] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (~(max((((((/* implicit */_Bool) (short)-747)) ? (((/* implicit */int) arr_2 [i_0])) : (arr_4 [i_1] [(unsigned short)18]))), (((/* implicit */int) var_11))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((((((/* implicit */int) (short)32761)) % (((/* implicit */int) arr_11 [i_4 + 3] [i_0] [i_4] [(unsigned short)11])))) * (((((/* implicit */int) ((1715166935) <= (((/* implicit */int) arr_9 [i_0 - 1]))))) + (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_1])) <= (((/* implicit */int) (short)14611))))))));
                                var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) (short)-14597)))))));
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_2))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_10 [i_0 + 1] [i_1] [i_2] [(short)16] [i_4])), (arr_8 [i_0 - 1] [i_0] [i_0] [i_0])))) ? ((~(((/* implicit */int) (short)31)))) : (var_4)));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) max((var_21), (var_10)));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) ((unsigned short) (~(((/* implicit */int) (unsigned short)29330)))));
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 759791665)) ? (((/* implicit */int) arr_18 [i_0 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) || (((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_13 [i_1] [i_5] [i_2] [i_1] [i_1] [i_1])))))))))))));
                                var_24 = ((/* implicit */unsigned short) 1715166953);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            for (int i_8 = 3; i_8 < 18; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_9 = 1; i_9 < 16; i_9 += 3) 
                    {
                        for (short i_10 = 0; i_10 < 19; i_10 += 4) 
                        {
                            {
                                arr_32 [i_0] [i_7] [i_8] [(unsigned short)1] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)27507))));
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_31 [(unsigned short)2] [i_9] [5] [i_9] [i_9 + 2] [i_9 - 1])) << (((((/* implicit */int) (unsigned short)40333)) - (40321)))));
                                var_26 += (((!(((/* implicit */_Bool) max((462413802), (((/* implicit */int) (short)-7827))))))) ? (((/* implicit */int) ((unsigned char) min((var_3), (((/* implicit */int) (unsigned char)187)))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_0))))))));
                                var_27 = ((((int) ((int) (short)-7827))) / ((((((~(((/* implicit */int) (unsigned char)255)))) + (2147483647))) >> (((min((arr_5 [(unsigned char)15] [i_7] [i_9 + 2] [i_9]), (((/* implicit */int) arr_9 [i_9])))) + (470606449))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_6 [i_0] [i_0 - 1] [i_8 - 2]), (arr_6 [i_0] [i_0 - 1] [i_8 - 3])))) <= (((/* implicit */int) min((arr_16 [i_8 - 1] [i_0] [i_8 - 3] [i_7]), (((/* implicit */unsigned short) ((((/* implicit */int) (short)-23562)) >= (((/* implicit */int) (short)-32762))))))))));
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) min((((/* implicit */unsigned short) (short)-14624)), (arr_2 [1]))))) ? (((((/* implicit */int) ((((/* implicit */int) arr_9 [i_7])) >= (((/* implicit */int) (unsigned short)47843))))) | (min((-2024776751), (((/* implicit */int) (unsigned short)53534)))))) : (((/* implicit */int) ((unsigned short) arr_16 [i_8 + 1] [(short)15] [i_0 - 1] [(short)17])))));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        for (short i_12 = 3; i_12 < 17; i_12 += 3) 
                        {
                            {
                                arr_38 [i_0] [i_7] [(unsigned short)1] [i_11] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1])) ? (max((var_3), (((/* implicit */int) arr_23 [i_0])))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)4655)), (var_9)))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                                arr_39 [i_12] [i_0] [i_8] [i_0] [i_0] = ((/* implicit */unsigned short) ((max((((/* implicit */int) (unsigned short)47953)), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_16 [i_0] [i_7] [i_8 + 1] [i_11])) : (((/* implicit */int) (unsigned char)5)))))) ^ (min((((/* implicit */int) var_9)), (arr_25 [i_0 - 1])))));
                                var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) ((short) arr_22 [i_0]))))));
                                arr_40 [i_0] [(unsigned short)12] [i_8] [(unsigned short)16] [i_7] |= ((short) var_6);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 19; i_13 += 2) 
                    {
                        for (int i_14 = 2; i_14 < 16; i_14 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) var_3))));
                                arr_49 [i_0] [i_14] = ((/* implicit */short) ((unsigned char) ((short) (unsigned short)65532)));
                                var_32 = ((/* implicit */int) max((var_32), (((int) 523150482))));
                                var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) (short)30829))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_15 = 1; i_15 < 18; i_15 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_16 = 1; i_16 < 18; i_16 += 3) 
        {
            for (unsigned char i_17 = 4; i_17 < 18; i_17 += 3) 
            {
                for (short i_18 = 0; i_18 < 19; i_18 += 2) 
                {
                    {
                        var_34 -= ((/* implicit */unsigned char) max((((int) arr_55 [i_15 - 1])), (((((/* implicit */_Bool) 1715166927)) ? ((~(((/* implicit */int) (unsigned short)34138)))) : (((/* implicit */int) (unsigned char)6))))));
                        var_35 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)65523)), (((((/* implicit */int) (unsigned char)202)) % (((/* implicit */int) (unsigned short)960))))));
                        arr_62 [i_15] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_15] [i_15 + 1] [i_15 + 1] [(unsigned short)5] [i_18] [i_18])) | (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_18])) : (arr_58 [(unsigned char)3] [i_17 - 4] [i_17]))))))));
                    }
                } 
            } 
        } 
        arr_63 [i_15] = ((/* implicit */short) ((((((/* implicit */_Bool) min(((unsigned short)17692), ((unsigned short)47836)))) ? (((/* implicit */int) arr_26 [i_15 + 1] [i_15])) : (((/* implicit */int) var_2)))) >= ((~(((/* implicit */int) arr_59 [i_15] [i_15 + 1] [i_15 + 1] [(unsigned char)0] [i_15 + 1]))))));
        /* LoopNest 3 */
        for (short i_19 = 1; i_19 < 18; i_19 += 3) 
        {
            for (short i_20 = 1; i_20 < 16; i_20 += 2) 
            {
                for (int i_21 = 1; i_21 < 18; i_21 += 2) 
                {
                    {
                        var_36 = ((/* implicit */int) arr_23 [(unsigned char)8]);
                        var_37 = ((/* implicit */unsigned char) (~(min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65532))))), (((((/* implicit */int) (unsigned char)184)) / (((/* implicit */int) (unsigned short)26496))))))));
                    }
                } 
            } 
        } 
        arr_70 [(short)16] [i_15 - 1] = max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_13 [(unsigned short)2] [i_15] [i_15 - 1] [i_15 + 1] [i_15] [i_15 - 1]))))), (min((arr_13 [(short)0] [(unsigned char)16] [i_15 + 1] [i_15 - 1] [(short)6] [16]), ((unsigned short)11993))));
    }
    for (unsigned char i_22 = 1; i_22 < 18; i_22 += 1) /* same iter space */
    {
        arr_73 [i_22] [i_22] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) max(((unsigned short)48), (((/* implicit */unsigned short) arr_44 [i_22] [i_22]))))))), (((((/* implicit */_Bool) (unsigned short)33573)) ? (((/* implicit */int) arr_34 [10] [i_22] [10])) : (((/* implicit */int) arr_34 [(unsigned short)16] [i_22] [(unsigned short)16]))))));
        /* LoopNest 2 */
        for (unsigned short i_23 = 0; i_23 < 19; i_23 += 3) 
        {
            for (unsigned char i_24 = 0; i_24 < 19; i_24 += 2) 
            {
                {
                    var_38 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_33 [i_24] [i_24] [i_24] [i_23]))))) && (((/* implicit */_Bool) min((((/* implicit */int) arr_57 [i_22])), (arr_4 [i_22] [i_23]))))))) >> (((max((((/* implicit */int) max((((/* implicit */unsigned short) (short)32765)), (arr_10 [(short)9] [i_22] [i_23] [i_23] [i_24])))), (((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) arr_57 [i_23])))))) - (68973)))));
                    var_39 = ((/* implicit */unsigned short) max((var_39), (((unsigned short) (-(((/* implicit */int) max(((unsigned short)32603), (((/* implicit */unsigned short) var_5))))))))));
                    /* LoopNest 2 */
                    for (short i_25 = 0; i_25 < 19; i_25 += 2) 
                    {
                        for (unsigned short i_26 = 2; i_26 < 18; i_26 += 4) 
                        {
                            {
                                var_40 = ((/* implicit */short) min(((unsigned short)32921), ((unsigned short)26496)));
                                arr_88 [(unsigned short)18] [i_23] [i_24] [i_25] [i_26] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65527)) ? (((((/* implicit */int) (unsigned short)12004)) >> (((max((1493547778), (((/* implicit */int) (short)22454)))) - (1493547759))))) : (((((/* implicit */int) arr_22 [i_25])) * (((/* implicit */int) arr_22 [i_25]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_27 = 1; i_27 < 18; i_27 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_28 = 2; i_28 < 18; i_28 += 4) 
            {
                for (unsigned short i_29 = 0; i_29 < 19; i_29 += 3) 
                {
                    {
                        var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1352099688)) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)17689)))))));
                        var_42 = var_8;
                    }
                } 
            } 
            var_43 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_47 [i_22] [i_22] [i_22] [i_22] [i_22] [8] [i_22])), ((~(((/* implicit */int) arr_26 [i_22 + 1] [i_22 - 1]))))));
            var_44 = ((/* implicit */unsigned short) min((min((((/* implicit */int) arr_13 [2] [i_22] [i_22 - 1] [i_27] [i_27] [i_27 - 1])), ((~(((/* implicit */int) arr_24 [i_22] [i_22] [(short)15] [i_22])))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [(unsigned char)8] [i_22 + 1] [(unsigned short)12] [i_22])) && (((/* implicit */_Bool) (unsigned short)39035)))))));
        }
    }
    var_45 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) % (var_13))))))) & (((/* implicit */int) var_14))));
}
