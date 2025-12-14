/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((min(113, -17))) ? ((max(var_3, var_15))) : var_0)) / (((var_6 ? -113 : var_15)))));
    var_18 = (max(var_18, ((((113 * ((var_4 ? var_0 : var_6))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((-(((arr_1 [i_0]) ? (arr_1 [i_1]) : 0))));
                arr_5 [i_1] [i_1] [i_0] = ((((((var_15 ? (arr_3 [i_0 - 2] [i_0 - 1] [i_0 - 1]) : var_7)) + 2147483647)) << (((((((arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1]) ? (arr_3 [i_0 - 2] [i_0 - 1] [i_0 - 1]) : (arr_3 [i_0 - 2] [i_0 - 2] [i_0 - 1]))) + 126)) - 13))));
                var_19 = (((arr_2 [i_0 - 2]) ? ((((49 ? -107 : var_16)) & (arr_2 [i_1]))) : (((~(arr_0 [11]))))));
                arr_6 [i_1] [i_1] [i_0] = arr_1 [i_0];
            }
        }
    }
    var_20 = min(58, -104);
    var_21 = (max(var_21, (((0 ? ((((max(var_11, var_2))) << (((var_12 + 76) - 13)))) : (~var_13))))));
    #pragma endscop
}
