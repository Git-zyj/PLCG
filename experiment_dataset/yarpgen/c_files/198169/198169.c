/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((var_1 ? ((1 ? var_10 : var_5)) : (max(var_2, var_15)))), var_0));
    var_17 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [16] [i_2] = (arr_5 [i_0] [i_1] [i_0]);
                    arr_9 [i_0] &= (1 + (((arr_4 [8]) ? -3689922992974431269 : (arr_1 [i_0]))));
                }
            }
        }
        var_18 = (((arr_2 [i_0]) ? (arr_2 [i_0]) : 16777215));
        var_19 = (((arr_2 [i_0]) ? (-13616 * 40) : (((1462501055 > (arr_2 [18]))))));
        var_20 = ((((9746 < (arr_7 [5] [i_0]))) ? (((arr_1 [i_0]) ? 0 : 1)) : 79));
        arr_10 [i_0] [17] = (-41 ? ((((arr_3 [i_0] [i_0] [i_0]) + (-127 - 1)))) : 79);
    }
    var_21 = 1;
    #pragma endscop
}
