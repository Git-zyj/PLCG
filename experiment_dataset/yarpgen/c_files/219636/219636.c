/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_2] = ((((min(var_6, (arr_8 [i_0] [i_1])))) ? (((((arr_8 [i_1] [i_1]) + var_7)) + (((var_4 ? var_14 : var_11))))) : var_0));
                    arr_10 [i_1] = ((((((arr_2 [i_0]) / (arr_2 [i_0])))) && (arr_2 [i_2])));
                    arr_11 [i_0] [i_1] [i_1] [i_1] = (min(((((arr_7 [i_1] [13] [i_1] [i_1]) < (arr_8 [i_2] [i_0])))), ((1717800141 ? (arr_7 [i_2] [i_2] [i_1] [i_0]) : var_13))));
                    var_20 = var_13;
                    var_21 = (((((-(((arr_0 [i_2]) ? var_9 : (arr_8 [i_0] [18]))))) + 2147483647)) << (((((((~2147483647) - -2147483624)) + 30)) - 6)));
                }
            }
        }
    }
    var_22 = ((((((((-1132327931173110634 ? var_14 : var_12)) + 2147483647)) >> ((((max(var_3, var_11))) - 24589))))) ? var_1 : var_12);
    var_23 = var_8;
    var_24 = var_14;
    #pragma endscop
}
