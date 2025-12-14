/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = 193;
                var_18 = ((~((min(var_7, 178)))));
                var_19 = (max(var_19, (11500582908490975458 ^ var_5)));
                arr_6 [17] = 11500582908490975458;
            }
        }
    }
    var_20 = ((var_13 & (((max(197, 27))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                var_21 = ((((((arr_9 [i_3]) ? (arr_9 [i_3]) : 11500582908490975458))) ? (((min(229, 201)))) : var_3));
                arr_15 [i_3] = 55;
            }
        }
    }
    var_22 = var_16;
    var_23 = ((var_12 ? (((193 + ((min(193, 50)))))) : var_11));
    #pragma endscop
}
