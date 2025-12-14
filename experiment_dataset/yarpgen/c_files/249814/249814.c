/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min(var_0, 166);
    var_14 = (max(var_14, var_7));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [3] [i_1] = (max((88 == -89), (1 && 6862687677568426175)));
                    var_15 = (min(var_15, ((((((((!1) <= (arr_1 [i_0] [i_0]))))) <= (max((((arr_1 [i_0] [i_1]) ? 233 : var_6)), (var_9 & -88))))))));
                }
            }
        }
    }
    var_16 = var_0;
    #pragma endscop
}
