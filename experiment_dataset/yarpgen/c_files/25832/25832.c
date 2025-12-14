/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_12 = var_11;
        var_13 = (2046 | 63505);
        var_14 = (!(((((min(2046, var_9))) ? 2042 : var_7))));
    }
    for (int i_1 = 3; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_15 = (((((1 ? 0 : (max(var_3, 2046))))) ? 63534 : 1470886857));
        arr_6 [i_1] [i_1] = 253;
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                {
                    var_16 = (((arr_4 [i_2 + 1] [i_3 - 2]) ? (2048 - 268427264) : var_11));
                    var_17 = var_2;
                    var_18 = var_8;
                }
            }
        }
    }
    var_19 *= var_5;
    var_20 = var_0;
    #pragma endscop
}
