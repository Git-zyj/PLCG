/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((-var_8 & var_6) % ((((max(20, var_8))) ? (((var_0 ? var_4 : 1522679832))) : (var_5 + 13)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_12 -= (!(((~(max(var_10, (arr_3 [i_0] [0])))))));
                arr_6 [i_1] [i_1] = var_3;
                var_13 = min(((((((((arr_4 [i_1]) && (arr_2 [i_1]))))) >= (((arr_2 [14]) << (var_0 - 3192751341711061492)))))), ((((var_1 ? var_9 : 3909057597287176242)) * (0 % var_5))));
            }
        }
    }
    var_14 = (max(var_14, ((((var_0 + var_8) ? (max((var_8 + -1), (((var_5 ? 10 : 1587431559))))) : var_10)))));

    /* vectorizable */
    for (int i_2 = 2; i_2 < 8;i_2 += 1)
    {
        var_15 ^= var_6;
        arr_11 [i_2] [i_2] = var_3;
        arr_12 [5] [i_2 + 1] = (((var_5 ? 3799627689502797982 : var_1)));
        arr_13 [1] = var_0;
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_16 = (((3332633930275103999 || 27) >= (min(((var_0 ? var_0 : -264444307)), ((min(var_7, 264444326)))))));
        var_17 = (max(var_17, (((-(((arr_4 [i_3 - 1]) << (var_7 - 7284))))))));
    }
    #pragma endscop
}
