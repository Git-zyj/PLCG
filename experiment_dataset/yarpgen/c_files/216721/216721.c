/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_20 = (min(var_18, (((var_0 - 57) ? -1 : 17532))));
                            var_21 = ((!(arr_3 [14])));
                        }
                    }
                }
                var_22 = (max(var_22, ((((arr_9 [i_1] [i_1] [i_1] [i_0 - 2] [i_0]) ? var_8 : (~8654))))));
            }
        }
    }
    var_23 = ((var_0 ? (min((~213), -851147925)) : -1731006389));
    var_24 = -var_16;
    var_25 = (((((-((1731006388 ? var_8 : var_5))))) ? (max(((var_14 ? 136 : 1731006388)), (1731006388 & 119))) : ((-var_4 ? var_19 : -1731006361))));
    #pragma endscop
}
