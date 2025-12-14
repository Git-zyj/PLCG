/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((!((max(var_17, var_3))))), var_15));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 -= max(var_13, ((((((max(var_15, 118)))) <= (arr_2 [i_2 - 2])))));
                    var_20 = var_15;
                    var_21 = (min(127, 1));
                }
            }
        }
    }
    var_22 = (~-9489);
    #pragma endscop
}
