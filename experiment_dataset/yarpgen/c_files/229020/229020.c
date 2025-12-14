/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((~(~var_8)))) ? ((~(var_15 >= var_4))) : var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((((min(var_3, (var_15 - var_1)))) ? 420065263 : -420065263)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_3] &= ((((!((min(0, 112))))) ? (min(var_4, (arr_10 [i_0] [i_0] [i_2] [12]))) : ((min(-420065278, 420065262)))));
                            var_21 = ((~(((!var_3) ^ ((var_16 ? -1 : 144894442))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
