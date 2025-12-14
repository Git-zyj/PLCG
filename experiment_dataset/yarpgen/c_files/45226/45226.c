/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((((var_6 ? var_0 : var_8))) ? -30456 : var_2))) ? var_8 : (min(var_10, (~16306)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 -= ((((max(var_9, (arr_0 [2])))) ? (((5 >> 39) ? (((var_2 >> (18446744073709551610 - 18446744073709551597)))) : ((5 ? var_4 : (arr_0 [18]))))) : var_0));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_12 [i_3] [i_3] [i_3] [i_0] |= var_3;
                        var_13 -= var_8;
                        var_14 = (min(var_14, ((min(1, 5)))));
                    }

                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        arr_15 [i_1] [i_1] [i_0] [i_1] = var_8;
                        var_15 = (1 ? (arr_11 [i_0] [i_0] [i_1] [i_2] [i_4 + 1]) : ((((!((((arr_5 [i_0] [i_4]) ? var_3 : 1))))))));
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_16 = 2;
                        var_17 = ((~(~18446744073709551611)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
