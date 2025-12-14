/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224599
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
    var_19 = ((/* implicit */_Bool) var_8);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)63))) + (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3]))) + (arr_2 [i_1])))))) + (((unsigned long long int) ((7336027437149768160LL) + (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))))));
                                var_21 *= ((/* implicit */_Bool) max((((/* implicit */short) arr_9 [i_0] [i_1] [i_2] [i_3])), (arr_3 [i_3] [i_2] [i_1])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_1] [i_5] [i_1] [i_6] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_2)) & ((-(var_3)))))), (arr_17 [i_0] [i_1] [i_2] [i_5] [9LL])));
                                var_22 ^= ((/* implicit */unsigned long long int) var_7);
                                var_23 += ((/* implicit */short) (~(((int) arr_6 [i_0] [(short)14]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
