/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209025
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                arr_4 [(unsigned char)20] [i_1] = arr_1 [i_0] [i_0];
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((unsigned char) var_7)), (((unsigned char) arr_3 [i_0]))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)43)) >= (((/* implicit */int) (unsigned char)43))))), (arr_1 [i_1 - 1] [i_1 - 1])))) : (((/* implicit */int) var_12))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) max(((unsigned char)76), ((unsigned char)148)))) : (((/* implicit */int) (unsigned char)225))));
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (unsigned char i_4 = 2; i_4 < 22; i_4 += 4) 
            {
                {
                    var_15 &= ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (unsigned char)120))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            var_16 = var_10;
                            arr_20 [i_2] [i_2] [i_2] [i_3] [i_2] [(unsigned char)2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min(((unsigned char)11), (arr_10 [i_3] [i_4] [i_3])))) ? (((/* implicit */int) arr_5 [i_2] [i_2])) : (((/* implicit */int) (unsigned char)23)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned char)241), (arr_8 [i_2] [i_2] [i_2])))))))));
                        }
                        for (unsigned char i_7 = 2; i_7 < 21; i_7 += 1) 
                        {
                            var_17 += (unsigned char)84;
                            var_18 &= (unsigned char)234;
                        }
                        arr_23 [i_3] [i_5] = ((unsigned char) min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) (unsigned char)32))))));
                        arr_24 [i_2] [i_2] [(unsigned char)17] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4 - 2] [i_4 + 1])) ? (((/* implicit */int) arr_13 [i_4 - 2] [i_4 + 2])) : (((/* implicit */int) arr_13 [i_4 + 1] [i_4 + 2]))))) ? ((-(((/* implicit */int) arr_13 [i_4 + 1] [i_4 - 1])))) : (((/* implicit */int) min((var_6), (arr_13 [i_4 - 1] [i_4 + 2]))))));
                        arr_25 [i_2] [i_2] [i_3] [i_4 - 1] [i_5] [i_2] = var_6;
                        var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)18))));
                    }
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) / ((+(((/* implicit */int) (unsigned char)14))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 3; i_8 < 21; i_8 += 1) 
                    {
                        arr_29 [i_2] [i_2] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned char)217)))) & (((((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_3] [i_3] [i_8])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)70))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) (unsigned char)190)) : (((((/* implicit */_Bool) arr_18 [(unsigned char)23] [(unsigned char)23] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)132)))))) : (((((/* implicit */_Bool) arr_22 [i_8 + 1] [i_8] [i_8] [(unsigned char)8] [(unsigned char)1] [i_8 - 2] [i_8 + 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) arr_8 [i_8] [i_2] [i_2])) : (((/* implicit */int) (unsigned char)30))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 3; i_9 < 23; i_9 += 3) 
                        {
                            arr_33 [i_2] [i_3] [i_3] [(unsigned char)14] [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) min((var_5), ((unsigned char)0)))))))));
                            arr_34 [i_3] [i_3] [i_3] [i_3] [i_9 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) min((min((var_11), ((unsigned char)34))), (max((var_4), (arr_15 [i_4] [(unsigned char)11] [i_2] [i_3] [(unsigned char)0] [(unsigned char)11])))))) : (((((/* implicit */int) min(((unsigned char)108), (arr_26 [i_3])))) + (((/* implicit */int) var_5))))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            arr_39 [i_2] [i_3] [i_2] [i_3] [i_3] = var_10;
                            var_21 |= min((min((arr_30 [i_8 - 3] [i_8 - 3] [i_8 + 1] [i_8 - 3] [i_2]), ((unsigned char)172))), ((unsigned char)96));
                        }
                        var_22 += ((/* implicit */unsigned char) min((((/* implicit */int) arr_13 [i_3] [(unsigned char)1])), (min((((/* implicit */int) min(((unsigned char)240), ((unsigned char)44)))), (((((/* implicit */int) arr_16 [i_3] [i_3] [i_2] [i_3] [i_3])) * (((/* implicit */int) (unsigned char)254))))))));
                        var_23 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) min((var_12), (var_8))))))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        arr_43 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)156)) * (((/* implicit */int) (unsigned char)83))))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) (unsigned char)41))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)99), (var_11))))))) : (((((/* implicit */int) arr_11 [i_3] [i_2] [i_4 - 2])) + (((/* implicit */int) var_6))))));
                        arr_44 [i_3] [i_3] [i_3] [(unsigned char)15] = ((unsigned char) (!(((/* implicit */_Bool) min(((unsigned char)175), (var_0))))));
                    }
                    for (unsigned char i_12 = 3; i_12 < 22; i_12 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((unsigned char)13), (((/* implicit */unsigned char) ((((/* implicit */int) var_5)) != (((/* implicit */int) arr_10 [i_2] [i_2] [i_3]))))))))));
                            var_25 = (unsigned char)242;
                        }
                        for (unsigned char i_14 = 1; i_14 < 23; i_14 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned char) max((var_26), (min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)75))))), ((unsigned char)231)))));
                            arr_53 [i_2] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_11 [i_3] [i_12 - 2] [i_14 - 1]), (var_11))))));
                        }
                        var_27 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_8 [i_4] [i_4 - 1] [i_4])))) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) ((unsigned char) min((arr_45 [i_2] [i_4] [i_3] [(unsigned char)2] [(unsigned char)20] [(unsigned char)18]), ((unsigned char)156)))))));
                        var_28 = ((unsigned char) ((((/* implicit */int) (unsigned char)15)) * (((/* implicit */int) max(((unsigned char)227), ((unsigned char)240))))));
                        arr_54 [i_3] [i_3] [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_30 [i_2] [(unsigned char)23] [i_12] [i_12 - 2] [i_3]))))) ? (((((/* implicit */_Bool) arr_30 [i_12] [i_12] [i_12] [i_12 + 2] [i_3])) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) arr_30 [i_12] [i_12] [i_12] [i_12 + 2] [i_3])))) : (((((/* implicit */_Bool) arr_30 [i_2] [i_2] [i_4] [i_12 - 1] [i_3])) ? (((/* implicit */int) arr_30 [i_12] [i_12] [i_12 + 2] [i_12 - 3] [i_3])) : (((/* implicit */int) arr_30 [i_4] [i_4] [i_4] [i_12 - 2] [i_3]))))));
                    }
                }
            } 
        } 
    } 
}
