/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231954
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
    var_16 = ((/* implicit */unsigned char) var_8);
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) var_14)), (max((var_11), (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) var_9)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned int) max((max((arr_4 [i_1]), (arr_4 [i_0]))), (max((arr_4 [i_1]), (arr_4 [i_1])))));
                arr_5 [i_0] = ((/* implicit */_Bool) min((max((arr_0 [i_1]), (((/* implicit */long long int) arr_4 [i_0])))), (max((((/* implicit */long long int) max((arr_4 [i_1]), (arr_4 [i_0])))), (arr_0 [i_0])))));
                var_19 &= ((/* implicit */unsigned char) arr_4 [i_0]);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned char i_3 = 4; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_11 [i_3 - 3] [i_3 - 3] [i_3 - 3]))));
                                var_21 = ((/* implicit */int) arr_6 [i_2] [i_3 - 1] [i_2]);
                                var_22 *= ((/* implicit */signed char) arr_16 [i_3] [i_1] [i_1] [i_3] [i_4]);
                            }
                        } 
                    } 
                } 
                var_23 = arr_13 [i_0] [i_1] [i_1] [i_1];
            }
        } 
    } 
}
