/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = (((!var_15) << (((((min(var_19, 0))) && var_2)))));
                    var_21 = (max((((max(-23789, -6117578926066727140)) & ((min(65531, var_12))))), var_12));
                    var_22 *= ((var_3 ? var_9 : (((((arr_3 [i_1] [i_0]) || var_11))))));
                    var_23 = (max(var_23, 966420005));
                }
            }
        }
    }
    var_24 = 11557;
    #pragma endscop
}
