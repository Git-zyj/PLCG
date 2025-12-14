/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_11 = min(-3787818650838803231, -var_3);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = (min(-6744353197332171829, (min(65520, 3787818650838803218))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_12 = (min(var_12, -3787818650838803220));
                        var_13 -= ((((min((min(6789033521100707920, 22988)), (-9223372036854775807 - 1)))) ? ((min(var_7, (!-3434015715465107822)))) : ((max(var_3, 41454)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
