/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5175
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
    var_12 = min((var_8), (((unsigned short) var_3)));
    var_13 = (((((!(((/* implicit */_Bool) (unsigned short)65508)))) && (((/* implicit */_Bool) var_0)))) ? (max((((/* implicit */int) var_11)), (min((var_2), (((/* implicit */int) var_10)))))) : (((/* implicit */int) min((var_3), (var_3)))));
    var_14 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    var_15 = arr_1 [i_0] [i_0];
                    arr_6 [i_2] [i_1] = ((/* implicit */int) arr_4 [i_2] [i_1] [i_1]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    var_16 = arr_5 [i_0] [i_0] [i_1] [i_3];
                    arr_9 [i_0] [i_0] [i_3] = ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65534))))) & (((/* implicit */int) arr_8 [i_3])));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            {
                                var_17 = arr_10 [i_0] [i_1] [i_3] [i_5];
                                var_18 = ((((/* implicit */int) arr_2 [(unsigned short)7] [i_3])) << (((((/* implicit */int) arr_2 [i_4] [i_5])) - (40650))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_0] [i_1] [i_3] [i_6]))));
                        var_20 = arr_0 [i_3] [i_1];
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 4; i_7 < 16; i_7 += 4) 
                        {
                            arr_21 [i_1] [i_3] [i_3] [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_7 - 4] [i_7 + 1])) ? (((arr_19 [i_0] [i_0] [i_3] [i_0] [i_0]) / (((/* implicit */int) (unsigned short)15028)))) : ((+(((/* implicit */int) (unsigned short)34))))));
                            arr_22 [i_3] [i_6] [i_3] [i_1] [i_3] = arr_8 [i_3];
                            var_21 = ((((/* implicit */_Bool) arr_1 [i_7 - 3] [i_7 + 2])) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) arr_16 [i_7 + 2] [i_7 - 1] [i_7 + 2] [i_7 + 2] [i_7 - 2] [i_7 - 2])));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_7] [i_7] [i_7] [i_7 + 1] [i_7 - 2])) > (((/* implicit */int) arr_17 [i_7] [i_7] [i_7 - 1] [i_7 + 1] [i_7 - 3]))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65508)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) arr_16 [3] [i_6] [i_3] [i_3] [i_1] [i_0])))) : (((arr_19 [i_7 - 4] [(unsigned short)12] [i_3] [i_1] [i_0]) ^ (((/* implicit */int) (unsigned short)65532))))));
                        }
                        var_24 = ((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) arr_14 [i_6] [i_6] [i_3] [i_6] [i_6])) : (((/* implicit */int) var_7)));
                        arr_23 [i_1] [i_1] [i_3] [i_1] [13] [i_1] = var_0;
                    }
                    for (int i_8 = 0; i_8 < 19; i_8 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = (unsigned short)62478;
                        arr_27 [i_3] [i_3] [(unsigned short)12] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_3] [i_8] [(unsigned short)4]))))) * ((+(((/* implicit */int) var_3))))));
                    }
                    for (int i_9 = 0; i_9 < 19; i_9 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((((/* implicit */int) var_6)) & (((/* implicit */int) var_5))))));
                        var_26 = ((/* implicit */int) ((((((/* implicit */_Bool) 633950484)) && (((/* implicit */_Bool) arr_7 [i_0] [i_3])))) || (((/* implicit */_Bool) var_9))));
                        arr_30 [i_3] = ((/* implicit */int) arr_13 [i_0] [i_3] [i_1] [i_3] [i_9]);
                    }
                    for (int i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned short) var_2);
                        var_28 = ((((/* implicit */_Bool) arr_34 [i_3] [i_1] [i_1] [i_1])) ? ((~(((/* implicit */int) (unsigned short)65485)))) : (((/* implicit */int) ((arr_31 [i_3]) != (((/* implicit */int) (unsigned short)28))))));
                        var_29 = ((/* implicit */unsigned short) arr_24 [i_1] [i_1] [i_3] [i_1]);
                        var_30 = ((arr_3 [i_1] [i_10]) / (((/* implicit */int) var_0)));
                    }
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 17; i_11 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        for (int i_13 = 2; i_13 < 17; i_13 += 2) 
                        {
                            {
                                arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_13 + 2] [i_11 - 1] [i_11 + 1] [i_11 + 2] [i_11 + 2])) * (((/* implicit */int) arr_17 [i_13 - 2] [i_11 + 2] [i_11] [i_11] [i_11 + 2]))));
                                var_31 = ((((/* implicit */_Bool) arr_39 [i_12] [i_11 + 1] [i_13 - 2] [i_12] [i_0])) ? (((/* implicit */int) arr_39 [i_1] [i_11 - 1] [i_13 - 2] [i_12] [i_13 - 1])) : (((/* implicit */int) arr_39 [i_0] [i_11 - 1] [i_13 - 1] [i_12] [i_12])));
                            }
                        } 
                    } 
                    var_32 = ((((/* implicit */_Bool) arr_39 [i_11] [i_11 + 2] [i_11 + 2] [i_11 + 1] [i_11 + 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_11 + 2] [i_11 + 2] [i_11 + 2] [i_11 + 1])));
                }
                /* LoopNest 2 */
                for (unsigned short i_14 = 4; i_14 < 16; i_14 += 4) 
                {
                    for (unsigned short i_15 = 0; i_15 < 19; i_15 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) -1938948184)) || (((/* implicit */_Bool) (unsigned short)65525)))) || (((/* implicit */_Bool) arr_40 [i_14 + 2] [i_14 - 3] [i_14 + 1] [i_14] [i_14 + 3])))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */int) (unsigned short)4))))) || (((/* implicit */_Bool) (unsigned short)21713))))) : (((/* implicit */int) (unsigned short)65499))));
                            arr_46 [i_0] [i_15] [i_0] = max((max((var_1), (min((arr_25 [i_1] [i_14] [i_1] [i_15] [i_1]), (var_7))))), (((unsigned short) max((arr_25 [i_0] [i_0] [i_0] [i_14 + 1] [i_0]), (arr_44 [i_0] [i_0] [i_14 - 4] [i_15] [i_15])))));
                            var_34 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_43 [i_1] [i_1] [i_14 + 3])) ? (((/* implicit */int) arr_43 [i_14] [i_14 + 3] [i_14 - 2])) : (((/* implicit */int) arr_43 [i_14 + 2] [i_14 + 2] [i_14 - 1])))), ((-(((/* implicit */int) arr_43 [i_0] [(unsigned short)17] [i_14 + 2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
