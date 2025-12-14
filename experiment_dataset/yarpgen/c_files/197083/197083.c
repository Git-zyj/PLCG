/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_10 = 5207;
                var_11 = (max(var_11, (((((min(var_0, 10350)))) | ((((min(var_9, var_9))) ? var_2 : (min(var_5, var_3))))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_12 &= (min((min(-10354, (var_6 - var_1))), (((var_4 && var_6) / -1))));
                    var_13 = (max(var_13, var_0));
                    var_14 = ((((max(-1524, var_1))) ? ((min(var_7, 10350))) : (min(-229116268, var_5))));
                }
                var_15 = (min((var_7 >= -10350), (min((((var_2 ? var_5 : var_1))), (var_4 / 20807)))));
            }
        }
    }
    var_16 = var_3;
    #pragma endscop
}
