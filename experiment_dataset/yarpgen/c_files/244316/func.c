/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244316
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [(_Bool)1] = ((/* implicit */short) ((_Bool) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) (_Bool)1)))));
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) min((((/* implicit */short) var_8)), ((short)10276)))) ? (((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0]))) : (((arr_0 [i_0] [i_0]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))) : ((~(((/* implicit */int) arr_3 [i_0])))))))));
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_15 = (((_Bool)1) || (((/* implicit */_Bool) (short)-16178)));
                    arr_10 [i_0] [i_1 + 2] [i_2 + 1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_3 [i_2 + 1]), (((/* implicit */short) var_4))))) || (((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)1)))) * (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_6 [i_1] [i_2])))))))));
                    var_16 = ((/* implicit */short) max((var_16), (((short) max(((_Bool)1), ((!((_Bool)0))))))));
                    var_17 = ((/* implicit */short) (+(((var_4) ? (((/* implicit */int) arr_6 [i_1 - 3] [i_2 + 1])) : (((/* implicit */int) arr_6 [i_1 - 3] [i_2 + 1]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_18 = ((short) (_Bool)1);
                        arr_20 [i_0] [i_0] [i_4] [i_4] [i_5] [i_5] = arr_5 [i_0] [i_4 + 1] [i_5];
                        /* LoopSeq 1 */
                        for (short i_6 = 1; i_6 < 11; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (-(((((/* implicit */int) arr_15 [i_5 - 1] [i_6 - 1])) / (((/* implicit */int) (short)27165)))))))));
                            arr_23 [i_4] [i_0] [i_0] [i_4] [i_5] [i_5 - 1] [i_6 + 3] = ((/* implicit */_Bool) ((((((arr_16 [i_0] [i_3] [i_0] [i_5 - 1] [i_0] [(_Bool)1]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))) & (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)4603)))))) + ((~(((/* implicit */int) (_Bool)1))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_5])) ? (((((/* implicit */int) (short)2194)) + (((/* implicit */int) (short)27)))) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_12 [i_4 + 1] [(short)1] [i_5]))))));
                            var_21 |= ((/* implicit */short) ((_Bool) min((((/* implicit */short) arr_5 [i_0] [i_3 + 1] [i_6 + 3])), (var_5))));
                        }
                        arr_24 [(short)6] [i_3] [i_3] [i_4 + 1] [i_4] = ((/* implicit */_Bool) (+((~(((/* implicit */int) max(((short)15774), (((/* implicit */short) (_Bool)1)))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_29 [i_0] [i_7] [i_7] [i_8] = ((/* implicit */_Bool) arr_2 [i_0]);
                    /* LoopSeq 1 */
                    for (short i_9 = 1; i_9 < 11; i_9 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            arr_35 [i_10] [i_10] = ((/* implicit */_Bool) (short)-27170);
                            arr_36 [i_10] = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_2 [i_8])) ^ (((/* implicit */int) arr_33 [i_9 + 3] [i_9 + 1] [i_9 + 1] [i_9 + 3] [i_9] [i_9] [i_9]))))));
                        }
                        /* vectorizable */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            arr_39 [i_0] [i_11] [i_8] [i_8] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)1299)) * (((/* implicit */int) (short)-6817))))) ? (((/* implicit */int) (short)6024)) : (((/* implicit */int) (!(var_6))))));
                            arr_40 [i_0] [i_0] [i_8] [i_0] [i_11] [i_11] = ((/* implicit */_Bool) arr_34 [(short)13] [i_0] [i_0] [i_8] [(short)3] [(_Bool)1]);
                        }
                        /* vectorizable */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            arr_43 [i_0] [i_7] [i_7] [i_7] [i_12] = var_7;
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)-30725))));
                            arr_44 [(_Bool)1] [i_8] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_9 - 1] [i_9 + 2] [i_9 + 3])) ? (((((((/* implicit */int) arr_30 [i_0] [i_8] [i_0] [i_0])) + (2147483647))) << (((((/* implicit */int) var_12)) - (1))))) : (((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) != (((/* implicit */int) (_Bool)0)))))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_37 [i_8] [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_9 - 1])) ? (((((/* implicit */int) var_1)) / (((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_0] [i_8] [i_9 + 1] [i_13])))) : ((((_Bool)0) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))))), (((/* implicit */int) (((_Bool)1) || ((_Bool)1))))));
                            arr_49 [i_0] [i_7] [i_13] [i_9] [i_13] = (!(((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) arr_14 [i_7] [i_8])) <= (((/* implicit */int) (short)27409))))), (((arr_16 [i_0] [i_7] [i_0] [i_9] [i_9] [i_13]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))))));
                            var_24 *= ((/* implicit */short) min((((((/* implicit */int) arr_34 [i_9 + 1] [i_9 + 3] [(short)6] [i_9 + 2] [i_9] [i_9 + 1])) + (((/* implicit */int) var_13)))), (max(((~(((/* implicit */int) (short)-29550)))), (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_22 [i_0]))))))));
                            var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4751)) ? (((/* implicit */int) (short)4)) : (((/* implicit */int) var_7))))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) (short)-27166)))) & (((((/* implicit */int) arr_27 [i_0] [i_9 + 3] [i_0])) + (((((/* implicit */_Bool) (short)-7634)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_17 [i_0] [i_7] [i_8] [i_0] [i_13]))))))));
                        }
                        var_26 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_30 [(_Bool)1] [i_7] [i_8] [i_7])) % (((/* implicit */int) arr_14 [i_0] [i_9]))))))) ? (((((/* implicit */_Bool) max((arr_30 [i_0] [i_7] [i_7] [i_9 - 1]), (((/* implicit */short) arr_46 [i_0] [i_7] [i_7] [i_8] [i_8] [i_9 + 3]))))) ? (((/* implicit */int) min((var_12), (var_2)))) : (((/* implicit */int) arr_33 [i_0] [i_7] [i_7] [i_8] [i_8] [i_8] [i_9 + 2])))) : (((/* implicit */int) ((arr_21 [i_9 + 2] [i_9] [i_9 - 1] [i_9 + 1] [i_9 + 1]) && (((/* implicit */_Bool) arr_27 [i_9 + 3] [i_9 + 2] [i_9 - 1])))))));
                        /* LoopSeq 1 */
                        for (short i_14 = 0; i_14 < 14; i_14 += 2) 
                        {
                            var_27 = ((/* implicit */short) min(((((+(((/* implicit */int) (_Bool)0)))) | (((/* implicit */int) ((_Bool) (short)2207))))), (((((/* implicit */int) (_Bool)1)) + (((((/* implicit */int) arr_9 [i_0] [i_8] [i_9 + 1] [i_14])) + (((/* implicit */int) var_11))))))));
                            arr_53 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) ((short) arr_22 [i_7]))), (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)-12533)) + (12540)))))))) ? (((((/* implicit */int) max(((short)-10204), (((/* implicit */short) var_9))))) - ((((_Bool)0) ? (((/* implicit */int) arr_12 [i_0] [i_7] [i_14])) : (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) (short)15086))))) << (((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) (short)15077)))))))));
                            var_28 = ((/* implicit */_Bool) (~(max((((/* implicit */int) (short)21462)), (((((/* implicit */int) (short)-17520)) / (((/* implicit */int) var_0))))))));
                        }
                        arr_54 [i_0] [i_7] [i_8] [i_9] = arr_13 [i_8] [i_9];
                    }
                }
            } 
        } 
    }
    var_29 = ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) var_8)), (var_10)))) % (max((((/* implicit */int) max(((short)23020), (var_5)))), ((+(((/* implicit */int) (short)-15087))))))));
    /* LoopNest 3 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
        {
            for (short i_17 = 0; i_17 < 19; i_17 += 2) 
            {
                {
                    var_30 = ((/* implicit */_Bool) ((max(((_Bool)1), ((!(arr_59 [i_15] [i_16 + 1] [i_15]))))) ? (((/* implicit */int) (!(arr_57 [i_16 + 1])))) : (((/* implicit */int) ((((var_12) || (((/* implicit */_Bool) var_11)))) || (((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_10)))))))));
                    /* LoopNest 2 */
                    for (short i_18 = 1; i_18 < 16; i_18 += 4) 
                    {
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            {
                                arr_69 [i_15] [i_15] [i_15] [i_18 + 2] [i_15] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_60 [i_16 + 1] [i_18 + 1] [i_18])))))));
                                arr_70 [i_15] [i_15] [i_15] [i_16 + 1] [i_17] [i_15] [(_Bool)1] = arr_63 [i_15] [i_15] [i_17] [i_18] [i_15];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
