/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    var_19 = (min(var_15, (((!(((-101 ? -1702395621 : 3084968130))))))));
    var_20 = (max(var_20, var_4));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = (~(arr_6 [i_0]));
                    arr_10 [i_0] [i_0] [2] [i_1] = (i_0 % 2 == 0) ? ((((((min((((arr_0 [24] [i_1]) ? var_9 : var_17)), var_6)) + 2147483647)) << (((arr_1 [i_0] [i_0]) - 316169622))))) : ((((((min((((arr_0 [24] [i_1]) ? var_9 : var_17)), var_6)) + 2147483647)) << (((((((arr_1 [i_0] [i_0]) - 316169622)) + 449922380)) - 25)))));
                }
            }
        }
    }
    #pragma endscop
}
