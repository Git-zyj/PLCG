/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215726
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
    var_20 = var_7;
    var_21 = max(((((!(((/* implicit */_Bool) var_15)))) ? (var_5) : (var_13))), (0U));
    var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_11)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (4U) : (arr_1 [i_0]));
                var_24 -= 2157456205U;
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) max((var_25), (2321459277U)));
                            var_26 ^= arr_6 [i_0] [i_0] [i_0] [i_0];
                            var_27 = var_6;
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned int) max((var_28), (2321459277U)));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_17))));
}
