/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211967
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
    var_20 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */short) ((unsigned int) ((((/* implicit */unsigned int) ((int) var_19))) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_18))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */int) var_18);
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) & (((/* implicit */int) var_4))));
                        }
                    } 
                } 
                arr_16 [i_0] [i_0] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)255))))) ? (((/* implicit */int) ((_Bool) var_10))) : (((/* implicit */int) var_4)))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_7))));
}
