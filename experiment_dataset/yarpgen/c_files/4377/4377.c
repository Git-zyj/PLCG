/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (((((~((1901207299 ? (arr_2 [i_0] [i_0]) : 18446744073709551615))))) ? (((arr_5 [i_0] [i_0 - 1] [i_0 - 2]) ^ (((arr_3 [14] [i_1]) ? (arr_5 [i_0] [i_0] [i_0]) : 0)))) : (arr_3 [i_0] [i_0])));
                arr_6 [i_0] [i_1] [i_1] = ((~(arr_5 [i_1] [i_0 + 1] [15])));
            }
        }
    }
    var_12 = ((var_6 ? ((~((var_4 ? -7282107745325360832 : var_10)))) : (~-2021543610080138504)));
    #pragma endscop
}
