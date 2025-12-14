/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242541
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
    var_20 ^= ((/* implicit */int) min(((~(var_8))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (32767U) : (((/* implicit */unsigned int) -1913328256))))) ? (var_5) : (((unsigned int) var_1))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((/* implicit */unsigned int) -1913328256)) : (((unsigned int) 130816))))) ? (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2] [i_3])) : (((unsigned int) arr_1 [21] [i_0]))));
                                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0])) ? (arr_14 [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_0]) : (arr_14 [10] [i_1 + 1] [i_1 + 1] [10] [i_1 + 1] [i_1] [i_0])))), (var_17))))));
                                var_23 = ((/* implicit */int) var_15);
                            }
                        } 
                    } 
                } 
                var_24 &= ((/* implicit */int) arr_9 [i_0] [i_0]);
            }
        } 
    } 
}
