/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32969
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_18 = arr_2 [i_0] [i_0];
                                arr_13 [i_2] [i_1 - 1] [i_2 - 3] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((((/* implicit */_Bool) arr_4 [i_3] [i_1 + 2] [i_2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_5 [i_0] [(unsigned char)13] [(unsigned char)4])))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_10 [i_3])) : (((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) arr_6 [i_3] [i_3] [(unsigned short)11] [i_0]))))))));
                                arr_14 [i_0] [i_0] [i_2] [(unsigned char)15] [(unsigned char)15] [(unsigned char)15] [i_0] = arr_11 [i_2 + 3];
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((((/* implicit */_Bool) (unsigned short)61571)) ? (((/* implicit */int) (unsigned short)2999)) : (((/* implicit */int) (unsigned short)61571)))))))));
                    arr_15 [i_2 + 3] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [(unsigned char)16] [(unsigned char)13] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_2])) : (((/* implicit */int) arr_2 [i_0] [i_2])))) : (((/* implicit */int) arr_11 [i_2]))));
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) (unsigned short)20969)) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) (unsigned short)18096)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))))) : (((/* implicit */int) var_16))));
}
