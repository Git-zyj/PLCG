/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189910
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
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_10 [i_1] [i_1 - 2] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)22177)), (800443605765419117ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-53))))) : (var_15)));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_1 - 4] [i_2] [i_2] [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) max((arr_16 [i_2] [i_3]), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_1)) : ((-(1854393428)))))));
                                arr_19 [i_0] [i_1 - 4] [i_2] [i_3] [i_3] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */unsigned long long int) 1931383343)) : (arr_13 [i_0] [i_0 + 3] [i_2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) var_7);
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_18))) & (((((/* implicit */int) var_7)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
}
