/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((min(((((30516 & var_0) | (-2147483647 - 1)))), var_10)))));
    var_13 = 34651;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        var_14 -= var_6;
                        var_15 = var_7;
                        arr_13 [i_3] [i_2] [1] [i_2] [1] = (((arr_6 [i_0] [i_2] [i_0] [11]) * (var_2 >> var_9)));
                    }
                    var_16 = (1 & 2147483647);
                }
            }
        }
    }
    #pragma endscop
}
