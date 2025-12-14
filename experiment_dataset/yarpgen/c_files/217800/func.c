/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217800
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */int) (-(arr_2 [18LL])));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1 - 2] [i_2] [i_4] [i_1 - 2] [i_3] [i_1 - 2] = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) arr_4 [9] [i_3] [i_3])), (((arr_0 [i_0] [i_0]) >> (((((/* implicit */int) var_14)) - (8380)))))))));
                                var_16 = (!(((/* implicit */_Bool) max((arr_5 [i_1 - 1] [i_4 + 1]), (((/* implicit */short) ((((/* implicit */_Bool) arr_13 [(short)6] [i_3] [i_3] [i_0] [i_3] [i_1] [i_0])) || (((/* implicit */_Bool) (unsigned char)0)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            var_17 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) arr_18 [2U]))))) ? (((long long int) var_12)) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)0)))));
                            var_18 = ((unsigned int) arr_20 [i_1 - 2] [i_6] [i_1 - 2] [i_6] [i_1 - 1]);
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            var_19 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (short)-21872))))))), (((18ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)14)), ((short)6259)))))))));
                            arr_23 [i_6] [i_6] = ((/* implicit */signed char) (-(arr_19 [i_0] [(short)19] [i_1] [i_5] [i_6] [i_8])));
                            var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((1008203564) | (16777216)))), (arr_11 [7ULL] [i_1 + 1] [i_1] [i_6] [i_1] [i_1 - 2])));
                            var_21 ^= ((/* implicit */unsigned int) (((~(6097605181978277265ULL))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)107)))))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            arr_26 [i_1 - 2] [i_1 - 2] [i_6] [(short)6] = ((/* implicit */unsigned long long int) arr_4 [(short)17] [i_5] [(_Bool)1]);
                            arr_27 [i_6] [11] = ((/* implicit */unsigned int) ((short) (+(16777216))));
                        }
                        var_22 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-10804))))), (((unsigned long long int) arr_3 [i_1 + 1] [i_1] [i_1 + 1]))));
                    }
                    var_23 = ((/* implicit */short) max((((arr_17 [i_0] [i_1] [i_0] [i_1 - 1]) | (((/* implicit */unsigned long long int) -147546335535393520LL)))), (((/* implicit */unsigned long long int) max(((~(var_2))), (((/* implicit */unsigned int) (~(16777237)))))))));
                }
                var_24 ^= ((/* implicit */short) (~(min((4161533721455653311ULL), (((/* implicit */unsigned long long int) ((0) >> (((((/* implicit */int) var_14)) - (8371))))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))));
}
