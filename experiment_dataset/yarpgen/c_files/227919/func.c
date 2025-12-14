/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227919
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
    var_13 = ((/* implicit */_Bool) max((var_13), (((_Bool) ((long long int) var_10)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_3] &= min((((((/* implicit */_Bool) var_8)) ? (min((var_0), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) ((var_6) / (var_8)))));
                            var_14 *= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) min((((/* implicit */int) var_4)), (var_6)))) ? (min((((/* implicit */long long int) var_11)), (var_7))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (var_6)))) ? (((/* implicit */unsigned int) min((var_3), (var_8)))) : (min((((/* implicit */unsigned int) var_8)), (var_2)))))) ? (((/* implicit */long long int) min((var_8), (var_3)))) : (max((min((((/* implicit */long long int) var_1)), (var_7))), (((/* implicit */long long int) var_3)))));
            }
        } 
    } 
}
