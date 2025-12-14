/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_9 || var_4);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_20 = var_17;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_11 [i_2] = ((((-(arr_6 [i_0] [i_0] [i_0 + 2]))) / ((15689 ? var_16 : 0))));
                        arr_12 [i_2] [i_1 + 1] [i_2] [i_1 + 1] = (((((10169835011210553426 ? 247 : var_4))) ? (((arr_4 [i_0]) + (arr_1 [i_2] [i_3]))) : (var_2 - 192)));
                        arr_13 [i_0 - 2] [i_0] [i_2] [i_2 - 1] [i_3] [i_3] = 15689;
                    }
                }
            }
        }
        var_21 = var_14;
    }
    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        arr_16 [i_4] = (((max((arr_15 [i_4 + 2]), (max((arr_14 [i_4]), var_6)))) >> (max((arr_15 [i_4]), (min(48, 0))))));
        arr_17 [i_4 - 1] = (48 - 3316573594);
    }
    var_22 = (max(var_22, 49855));
    var_23 = (max(var_23, (((((((((var_9 ? var_0 : var_12))) ? var_14 : 229))) && (!var_13))))));
    var_24 = (min(((max(var_7, (220 * -28541)))), (var_9 - var_0)));
    #pragma endscop
}
