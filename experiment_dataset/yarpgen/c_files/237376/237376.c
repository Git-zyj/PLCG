/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = var_0;
                var_20 |= var_2;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_21 = (min(var_21, (((var_10 ? (0 & var_6) : (((arr_2 [i_2 - 2]) ? (arr_11 [i_2 - 1] [i_2 - 2] [i_3]) : (arr_2 [i_2 - 1]))))))));
                var_22 = (min(var_22, var_3));
            }
        }
    }
    var_23 = ((var_5 ? (-1 / 35357) : (((((0 ? var_16 : var_7))) ? var_11 : (95 <= 52078)))));
    #pragma endscop
}
