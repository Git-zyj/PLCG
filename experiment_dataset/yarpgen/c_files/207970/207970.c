/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_5;
    var_16 = var_6;
    var_17 = -var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (((((arr_0 [i_0] [i_0]) + (max((arr_6 [i_2] [i_1]), 255)))) << (((((((var_4 ? (arr_8 [i_0] [i_1] [i_0]) : var_3))) & (5823775171014959187 | 0))) - 2417369050))));
                    var_19 += ((((arr_2 [i_2]) ? (var_5 && var_9) : (arr_8 [i_2] [i_1] [i_0]))));
                    arr_9 [i_0] [i_1] [i_0] [i_1] = ((((((arr_3 [i_1]) + (arr_4 [i_0] [i_1])))) ? ((((max((arr_0 [i_0] [i_1]), var_9))) + var_0)) : var_2));
                }
            }
        }
    }
    #pragma endscop
}
