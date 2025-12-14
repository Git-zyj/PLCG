/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199418
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) arr_1 [i_0]);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */short) arr_8 [i_0] [i_1 + 1] [i_2] [i_0]);
                            arr_9 [i_0] [i_0] [i_2] [8U] = ((/* implicit */int) arr_7 [(short)0] [(short)0] [(signed char)7] [i_3] [(short)0] [i_2]);
                            var_15 = ((/* implicit */unsigned char) (~(((unsigned long long int) (_Bool)1))));
                            arr_10 [i_2] [i_2] [0] = ((/* implicit */int) max(((-(arr_7 [i_2] [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 3] [i_2]))), (((((/* implicit */_Bool) var_6)) ? (arr_5 [i_0] [i_3]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)2048)))))))));
                            var_16 = (_Bool)1;
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) min((var_6), (((/* implicit */unsigned long long int) (~(((unsigned int) var_2))))))))));
}
