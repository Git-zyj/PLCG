/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230472
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
    var_19 = ((/* implicit */int) 1588259983U);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 8; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */int) min((((/* implicit */unsigned int) arr_7 [i_2] [i_2] [i_2 - 1] [i_2 + 2] [i_2] [i_2])), ((+(min((var_3), (((/* implicit */unsigned int) 116456985))))))));
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_4))));
                            }
                        } 
                    } 
                    var_22 = ((((((/* implicit */_Bool) arr_3 [i_0])) ? (min((var_7), (var_11))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (var_9) : (var_4)))))) - (((((/* implicit */_Bool) arr_9 [i_2 - 2])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_8) : (541570884U))) : (((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_2])))))));
                    var_23 = ((/* implicit */int) ((unsigned int) ((2029682852U) + (((/* implicit */unsigned int) ((int) arr_8 [i_0] [i_1] [i_1]))))));
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (!(((/* implicit */_Bool) 2818576876U)))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned int) var_9);
}
