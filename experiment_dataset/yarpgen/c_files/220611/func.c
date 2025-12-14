/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220611
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
    var_13 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((_Bool) arr_4 [i_1 - 1] [i_1])))));
                arr_5 [i_0] = ((/* implicit */_Bool) ((unsigned short) (~(arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */signed char) arr_4 [i_2] [i_0]);
                            var_15 = ((/* implicit */int) var_4);
                            var_16 = ((/* implicit */_Bool) (signed char)31);
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1]))));
            }
        } 
    } 
}
