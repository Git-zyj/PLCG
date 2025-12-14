/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246190
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            arr_7 [i_1] = ((/* implicit */long long int) ((arr_4 [i_0] [i_0 + 1] [i_1]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_1]))));
            arr_8 [i_0] [(short)7] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))) : (var_16)));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))));
            arr_9 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) != ((-(1340148319U)))));
        }
        arr_10 [i_0] = ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0]);
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [(unsigned char)2] [i_0 - 1])) >> (((((/* implicit */int) var_1)) + (118)))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 3; i_2 < 10; i_2 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) var_1);
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2 - 3]))) : (var_14)));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967294U)) || (var_10)));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 3) 
    {
        arr_16 [15U] = ((/* implicit */long long int) var_4);
        var_22 -= ((((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_6))))) != (((((/* implicit */int) var_0)) & (((/* implicit */int) var_9)))));
        var_23 = ((/* implicit */unsigned short) (-(var_14)));
    }
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        for (int i_5 = 1; i_5 < 17; i_5 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_6 = 2; i_6 < 14; i_6 += 1) 
                {
                    for (long long int i_7 = 1; i_7 < 17; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            {
                                arr_29 [i_5] [(short)6] = ((/* implicit */long long int) arr_15 [i_5 - 1] [i_5 - 1]);
                                var_24 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) 2LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) var_0)))))) & ((~(((/* implicit */int) (unsigned char)15))))));
                                var_25 -= ((/* implicit */short) min(((((~(arr_24 [(short)12] [i_6] [(short)12]))) | (((((/* implicit */_Bool) arr_26 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13)))))), ((~(((((/* implicit */int) (unsigned char)226)) & (((/* implicit */int) var_17))))))));
                                arr_30 [i_5] [i_5] = var_16;
                            }
                        } 
                    } 
                } 
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (((/* implicit */int) arr_21 [i_4] [i_5 - 1]))))) ? (min((((/* implicit */long long int) var_5)), (min((-5748606550856691068LL), (((/* implicit */long long int) var_7)))))) : (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_18 [i_5]))))) - (((((/* implicit */_Bool) arr_25 [i_5 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))))))));
                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) (unsigned char)107))))) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_0))))))))))));
                var_28 = (unsigned char)218;
            }
        } 
    } 
}
