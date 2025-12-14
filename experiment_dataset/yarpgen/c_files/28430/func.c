/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28430
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
    var_18 = ((/* implicit */short) ((unsigned int) var_6));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 8; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) (short)21831);
                                arr_15 [i_2 - 2] [i_3] [i_2 - 2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) ((short) max((((/* implicit */unsigned int) (short)21808)), (arr_6 [i_3] [i_1]))))) : ((+(((((/* implicit */int) var_14)) ^ (((/* implicit */int) arr_12 [i_0] [i_1] [i_4] [i_1]))))))));
                            }
                        } 
                    } 
                } 
                arr_16 [(short)0] [i_0] &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1 + 2] [i_1])) : (((/* implicit */int) arr_11 [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 2])))), ((-(((/* implicit */int) (unsigned char)249))))));
            }
        } 
    } 
    var_20 &= ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_9))));
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        for (unsigned short i_6 = 1; i_6 < 7; i_6 += 4) 
        {
            {
                var_22 -= ((/* implicit */_Bool) var_10);
                arr_22 [i_5] [i_6] [i_6] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_9 [i_6 + 3] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_9 [i_6 - 1] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_11 [i_6 + 3] [i_6] [0ULL] [i_6])))), (((((/* implicit */_Bool) arr_11 [i_6 + 2] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_9 [i_6 + 3] [i_6 + 2] [i_6 + 2] [i_5])) : (((/* implicit */int) arr_11 [i_6 + 2] [i_6] [i_6] [7]))))));
                var_23 = ((/* implicit */long long int) (((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
}
