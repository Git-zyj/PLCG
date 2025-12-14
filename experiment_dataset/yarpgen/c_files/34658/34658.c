/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (max(var_20, ((min(-var_2, ((max((118 * 185128451), -10))))))));
                var_21 |= ((-(((!(((arr_0 [i_0] [1]) >= var_5)))))));
                var_22 = var_3;
                var_23 |= ((~((max(var_10, var_14)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_24 = var_14;
                            var_25 = ((17743424946764601435 % (var_4 + var_19)));
                            var_26 = var_9;
                        }
                    }
                }
                var_27 = (min(var_27, (((((max(36, var_14))) << ((((var_15 ? var_2 : var_1)) + 4245532679866485474)))))));
            }
        }
    }
    #pragma endscop
}
