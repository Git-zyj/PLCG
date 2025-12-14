/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2541
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        var_10 = ((/* implicit */int) min((0U), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)39175)))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            var_11 = (~((~(min((arr_5 [i_0] [8U]), (arr_5 [i_0] [i_0]))))));
                            var_12 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned char)28)), (0U)));
                            arr_12 [i_0] [i_1] [i_2] [i_3 - 1] [i_4] [i_1] = ((/* implicit */unsigned int) (((-(arr_0 [i_1 - 2] [i_3 + 1]))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_3]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [(unsigned char)4] [i_2] [i_3]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1] [i_4])) || (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1 + 1] [i_2] [i_3] [i_4]))))))))));
                            arr_13 [i_0] [i_1] [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) arr_10 [7U] [i_1 - 2] [i_1 - 2])) ? (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))) * (arr_1 [i_1] [i_3]))), (arr_0 [i_1 - 2] [i_1]))) : (arr_7 [i_4]));
                        }
                    }
                    var_13 = ((/* implicit */unsigned char) max((min((arr_2 [i_0]), (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned int) min((arr_10 [i_0] [i_1] [i_2]), (arr_6 [i_0] [i_0] [i_1 + 1] [i_2]))))));
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_9 [i_0] [i_2] [(unsigned char)10] [i_1] [i_2]) : ((+(4294967295U)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 3; i_5 < 20; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 20; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_9 = 3; i_9 < 20; i_9 += 1) 
                            {
                                arr_28 [i_5] [i_5] [i_5] [i_9 + 1] = ((/* implicit */unsigned short) min((max((min((((/* implicit */unsigned int) arr_18 [i_5] [i_5] [i_5] [i_5])), (arr_23 [i_5 + 1] [5U] [i_7 - 1]))), ((~(arr_15 [i_5 - 2]))))), (((4294967295U) - (4294967295U)))));
                                var_15 ^= ((/* implicit */short) ((((/* implicit */int) arr_27 [i_5])) / ((+(((/* implicit */int) max((((/* implicit */short) (unsigned char)1)), ((short)-30771))))))));
                                arr_29 [i_5 - 2] [i_6] [i_7] [i_5] [i_5] = ((/* implicit */unsigned int) (((-((+(arr_21 [i_5] [i_6]))))) <= ((((~(arr_19 [i_5]))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_5] [i_6] [i_5 - 3] [i_9 - 1])))))));
                            }
                            /* vectorizable */
                            for (unsigned int i_10 = 1; i_10 < 18; i_10 += 3) 
                            {
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((((/* implicit */_Bool) arr_14 [i_8] [i_10])) ? (arr_23 [i_5] [i_6] [i_7]) : (arr_21 [i_6] [i_6]))) * (((((/* implicit */_Bool) arr_22 [(unsigned short)19] [i_6] [i_7])) ? (arr_19 [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_8] [i_6] [i_6] [i_6]))))))))));
                                var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_20 [i_5 - 2] [i_5 - 2] [i_5 - 1]))));
                                arr_32 [i_5] [i_6] [i_5] [i_7] [i_8] [i_5] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_5] [i_5] [i_5]))))) > (((/* implicit */int) arr_27 [0U]))));
                            }
                            arr_33 [i_5] = ((/* implicit */unsigned char) ((arr_21 [i_5] [i_7]) << (((((/* implicit */_Bool) min((arr_15 [i_5]), (arr_21 [i_5] [i_6])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_30 [i_5] [i_6] [7U] [i_5] [i_7 + 1] [i_7] [i_8]), (arr_30 [i_5] [i_6] [i_6] [i_6] [i_7 - 1] [i_8] [i_6]))))) : (max((arr_23 [i_5 - 3] [i_5 - 3] [i_7]), (((/* implicit */unsigned int) arr_27 [i_5]))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) arr_27 [i_5])), (arr_23 [i_5] [i_5] [i_5]))) == (((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_5] [8U] [i_6] [i_6])) | (((/* implicit */int) arr_20 [i_5] [i_6] [i_5 - 3])))))))), (min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_5] [i_6]))))), (min((arr_22 [i_5] [i_5 + 1] [i_5 - 3]), (((/* implicit */unsigned int) arr_30 [i_5] [i_5] [i_5 - 2] [i_5] [i_5] [i_5] [i_5 - 2]))))))));
            }
        } 
    } 
}
