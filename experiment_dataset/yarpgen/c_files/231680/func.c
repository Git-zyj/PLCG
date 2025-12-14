/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231680
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
    var_10 = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned int) var_4))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) == (((/* implicit */unsigned int) var_9)))))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_9) | (var_0))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_11 = arr_8 [i_0] [i_1] [i_2] [i_3];
                                var_12 = arr_8 [i_0] [i_1] [i_2] [6U];
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned int) (~(-1187896705)));
                    var_14 = ((/* implicit */int) min((var_14), (((int) arr_1 [i_2] [i_1]))));
                    arr_12 [i_0] [i_0] = 2498730158U;
                }
            } 
        } 
    } 
    var_15 = ((int) ((int) ((((/* implicit */_Bool) var_3)) ? (var_2) : (0U))));
}
