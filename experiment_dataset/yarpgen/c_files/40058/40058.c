/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((1920663511 | 0) ^ 0)));
    var_17 = ((var_13 * (((((2147483647 - var_5) || var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (((((min(186, var_5)))) * (((18446744073709551605 <= 69) * var_10))));
                var_18 = (arr_4 [i_0]);
            }
        }
    }
    var_19 = var_8;
    #pragma endscop
}
