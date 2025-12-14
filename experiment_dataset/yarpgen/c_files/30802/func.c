/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30802
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1] [i_2])) ? (arr_4 [i_0] [i_1] [i_1] [i_2]) : (arr_4 [i_0] [i_1] [i_2] [i_1])));
                    var_19 |= ((/* implicit */signed char) arr_3 [i_0]);
                    var_20 = ((/* implicit */_Bool) ((short) arr_0 [i_0] [i_2]));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                var_21 = ((/* implicit */unsigned int) (unsigned short)2542);
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((arr_9 [i_0] [i_3] [i_4]) < (arr_9 [i_0] [i_3] [i_4]))))));
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_3])) >> (((/* implicit */int) arr_0 [i_0] [i_6]))));
                        var_24 = ((/* implicit */_Bool) ((arr_2 [i_0] [i_3]) ? (((/* implicit */long long int) ((arr_11 [i_3] [i_5] [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_9)))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_4] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_14)))));
                    }
                }
            }
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_12 [i_0] [i_3] [i_0] [i_3] [i_3] [i_3])))) ? (arr_12 [i_0] [i_3] [i_3] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            arr_18 [i_0] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_3])) * (((/* implicit */int) (_Bool)1))));
            var_26 = ((/* implicit */short) (-(((/* implicit */int) arr_5 [i_3] [i_3] [i_0]))));
        }
        for (long long int i_7 = 0; i_7 < 14; i_7 += 4) 
        {
            arr_21 [i_0] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_7] [i_7])) ? (((/* implicit */int) arr_2 [i_0] [i_7])) : (((/* implicit */int) arr_6 [i_7] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_7] [i_7]))) : (arr_13 [i_0] [i_0] [i_7] [i_7])));
            var_27 = ((/* implicit */_Bool) ((7687951685793648221ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        }
        arr_22 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0])))));
        arr_23 [i_0] = (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])))))) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) + (arr_17 [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_28 -= arr_0 [i_8] [i_8];
        arr_27 [i_8] = ((/* implicit */short) arr_11 [i_8] [i_8] [i_8]);
    }
    var_29 = var_13;
}
