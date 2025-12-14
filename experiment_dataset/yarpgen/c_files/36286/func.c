/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36286
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_2] [i_1] = min((arr_0 [i_1 + 1] [i_3 + 1]), (((unsigned short) arr_11 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 - 1])));
                                var_15 *= arr_3 [i_0] [i_1] [(unsigned short)1];
                            }
                        } 
                    } 
                    var_16 *= min((var_4), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) > (((/* implicit */int) (unsigned short)22469))))));
                }
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 23; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 4; i_7 < 24; i_7 += 2) 
                        {
                            {
                                var_17 = arr_8 [i_1] [i_1];
                                var_18 *= (unsigned short)22457;
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [(unsigned short)8] [i_5])) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_0] [i_1 - 1])) : (((/* implicit */int) var_6))));
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)51603)) / (((/* implicit */int) var_6)))))));
                        arr_25 [i_0] [i_1] [(unsigned short)7] [i_1] [i_5] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */int) (unsigned short)65024)) : (((/* implicit */int) arr_9 [(unsigned short)14] [(unsigned short)14] [(unsigned short)14] [i_1 + 1]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 2; i_9 < 23; i_9 += 1) 
                        {
                            var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)22464)) : (((/* implicit */int) (unsigned short)29525))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((unsigned short) (-(((/* implicit */int) var_8)))))));
                            var_23 += ((unsigned short) ((unsigned short) arr_18 [i_0] [(unsigned short)22] [i_0] [(unsigned short)22] [(unsigned short)17] [i_9]));
                        }
                        arr_29 [i_1] [i_0] [i_8] [i_8] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_8] [i_1 - 1] [i_1 - 1] [i_8])) ? (((/* implicit */int) (unsigned short)43059)) : (((/* implicit */int) (unsigned short)12))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) min((arr_30 [i_0] [i_0] [i_5] [(unsigned short)4]), ((unsigned short)62139)))) || (((/* implicit */_Bool) ((((/* implicit */int) var_4)) % (((/* implicit */int) var_13)))))))));
                        var_25 = (unsigned short)62139;
                        var_26 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_24 [i_0] [i_0] [i_5])) + (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [(unsigned short)20] [(unsigned short)12] [i_0] [i_0] [i_0])) ? (((((/* implicit */int) (unsigned short)42193)) & (((/* implicit */int) var_1)))) : (((/* implicit */int) var_0))))));
                        var_27 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)24)))) == (((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_5] [(unsigned short)7] [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_27 [i_0] [i_0] [(unsigned short)1] [i_0] [i_5] [i_5] [(unsigned short)18])) : (((/* implicit */int) arr_27 [i_0] [i_0] [i_1] [i_0] [i_0] [i_10] [i_10]))))));
                    }
                }
                for (unsigned short i_11 = 0; i_11 < 25; i_11 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1])) / (((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned short)29505))))))));
                    var_29 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_9 [i_11] [(unsigned short)19] [i_0] [i_0]))) == (((/* implicit */int) var_12)))))));
                }
                var_30 += (unsigned short)27073;
                var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)51045)) ? (((/* implicit */int) (unsigned short)4699)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)128))))))), (((/* implicit */int) (unsigned short)32825)))))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 2; i_12 < 23; i_12 += 2) 
                {
                    for (unsigned short i_13 = 0; i_13 < 25; i_13 += 1) 
                    {
                        {
                            arr_40 [i_1] [i_12 + 2] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)38463)) > (((/* implicit */int) arr_31 [i_12] [i_1] [i_1] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)34797)) >= (((/* implicit */int) arr_31 [i_1 + 1] [i_1] [i_1] [i_0]))))) : (((/* implicit */int) arr_28 [i_12 + 1] [i_1] [(unsigned short)7] [i_1 - 1] [i_1] [i_1]))));
                            arr_41 [i_13] [i_13] [i_13] [i_13] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min(((unsigned short)12696), (var_2)))) ? (((/* implicit */int) (unsigned short)44286)) : (((/* implicit */int) min(((unsigned short)65524), (arr_28 [i_0] [i_0] [i_0] [i_1] [i_1] [i_13])))))) + (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned short)27073)) ? (((/* implicit */int) (unsigned short)448)) : (((/* implicit */int) arr_5 [(unsigned short)15] [i_1])))) : (((/* implicit */int) ((((/* implicit */int) arr_17 [i_0] [i_0] [(unsigned short)6] [(unsigned short)11])) > (((/* implicit */int) var_8)))))))));
                            arr_42 [i_0] [(unsigned short)14] [i_1] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_1] [(unsigned short)23] [i_1] [i_1 - 1] [(unsigned short)0])) | (((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1] [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_4 [i_12 + 2] [(unsigned short)2] [(unsigned short)9] [i_12 + 2])) : (((/* implicit */int) arr_4 [i_12 - 2] [i_13] [i_13] [i_13]))))));
                            var_32 ^= min((((unsigned short) (unsigned short)54624)), (max(((unsigned short)65532), (min((arr_17 [i_0] [(unsigned short)4] [(unsigned short)4] [i_13]), ((unsigned short)22469))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) < (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) (unsigned short)14329)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)14)))) : (((/* implicit */int) var_4))))));
    var_34 = var_8;
}
