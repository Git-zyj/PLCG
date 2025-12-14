/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (((((~(arr_3 [i_1 - 1] [i_1])))) ? (((arr_3 [i_1 - 2] [i_1]) | var_13)) : ((var_5 ? var_6 : (arr_3 [i_1 - 2] [i_1])))));
                var_18 = ((((((-20149 ? 1793768825 : var_4)) ^ (arr_4 [i_1 + 1] [i_0])))) ? (((min(var_6, 307)))) : ((var_10 ? (arr_4 [i_0] [i_1 - 1]) : (((arr_5 [i_1] [i_1 - 2]) ? var_4 : 2035777552)))));
                var_19 = 97;
                var_20 = (max(var_20, (((((min(0, 128))) ? ((((arr_0 [i_1 + 1]) ? var_14 : (arr_0 [i_1 + 1])))) : (var_0 * var_10))))));
                var_21 = (((((16920 ? var_15 : (arr_3 [i_0] [i_1])))) ? ((max(37953, (arr_3 [i_0] [i_1])))) : var_6));
            }
        }
    }
    #pragma endscop
}
