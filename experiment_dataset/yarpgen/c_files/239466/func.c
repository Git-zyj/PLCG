/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239466
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 20; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_16 ^= ((/* implicit */long long int) arr_5 [i_3] [(signed char)10] [i_0]);
                            arr_9 [i_1] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) max(((-(((/* implicit */int) var_10)))), ((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)94))))));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) + (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_0)))) : (((var_4) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))))))));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((unsigned int) (-((-(((/* implicit */int) arr_3 [i_2])))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) min((var_19), (((1885655649U) << (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_20 += ((/* implicit */unsigned char) (-(((/* implicit */int) var_13))));
    var_21 = (((_Bool)1) ? (((long long int) var_14)) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-2459))))), ((unsigned short)28025))))));
}
