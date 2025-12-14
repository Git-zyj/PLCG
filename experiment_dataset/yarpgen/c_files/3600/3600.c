/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_12 < var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((var_5 + 2147483647) >> (((((arr_2 [i_0]) ? (arr_2 [i_1]) : (arr_2 [i_0]))) - 16528644415914542579))));
                arr_7 [2] = (((((1175735361677619018 / -107) ? var_2 : (92 && var_3))) + 222));
            }
        }
    }
    var_18 = (min(3759762412, 3759762412));
    var_19 = var_5;
    #pragma endscop
}
