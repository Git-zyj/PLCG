/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4247
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_1] [(signed char)2] [i_1] = ((/* implicit */short) arr_4 [i_0] [i_1]);
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((int) var_9))) : (arr_4 [i_1] [i_1])))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */short) arr_12 [(_Bool)1] [i_2] [i_2 - 1] [i_2]);
                            arr_15 [i_0] [7LL] [i_1] [(unsigned short)19] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((var_2) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0]))))) : ((-(var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_0 [i_2 - 1] [i_2]))))));
                            arr_16 [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_13);
    var_18 = ((/* implicit */_Bool) (-(var_10)));
}
