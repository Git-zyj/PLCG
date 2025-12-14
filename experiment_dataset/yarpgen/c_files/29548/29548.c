/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_18 *= (((((((min(var_11, (arr_3 [i_1] [i_1] [i_0 + 3])))) ? (((arr_3 [i_0] [2] [i_1]) / var_13)) : 0))) ? (((arr_1 [i_1] [i_1 - 4]) | (arr_2 [i_0 - 3]))) : -84));
                var_19 *= 28;
                var_20 = (((arr_0 [i_0 + 3]) ? (((arr_3 [i_0 + 2] [i_0 + 1] [i_1 + 1]) ? (arr_3 [i_0 - 1] [i_0 - 3] [i_1 + 1]) : -102)) : (((((2147483647 ? 31439 : (arr_0 [i_0])))) ? ((max(27, 3))) : (((arr_1 [i_1] [i_0]) / -115))))));
            }
        }
    }
    var_21 = ((var_16 ? var_9 : (52401 | var_11)));
    var_22 = 536805376;
    var_23 = ((var_9 ? (((-var_8 ? 3357525216 : (((536854528 ? var_8 : 31439)))))) : (8647147129549920245 + var_7)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                arr_10 [i_2] = (min(((21 ? ((var_16 ? 18446744073709551605 : var_7)) : ((0 ? var_0 : 18446744073709551602)))), (((2284296457 ? 65011712 : 17586)))));
                arr_11 [i_2] [i_3] = 15047;
            }
        }
    }
    #pragma endscop
}
