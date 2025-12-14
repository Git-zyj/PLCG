/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_8;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_21 += ((!(((arr_0 [i_0 + 1] [i_0 - 2]) || (arr_0 [i_0 + 1] [i_0 - 3])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = (min(var_9, ((+((var_13 ? (-9223372036854775807 - 1) : var_17))))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0 - 2] = (min((arr_9 [i_3] [i_2] [i_1] [i_0] [i_0]), 17266));
                        var_22 = ((2196538394 < var_12) ? (min(var_4, (min(8191, 65535)))) : var_6);
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_23 += ((-((~((2196538387 ? var_16 : -1))))));
                        var_24 = var_9;
                    }
                    arr_16 [i_0] [i_1] [i_2] = (min(169, -111));
                    var_25 = (min(var_25, (((1959203591 ? -17511 : var_2)))));
                }
            }
        }
    }
    var_26 = (((-((var_8 ? 34 : var_0)))));
    var_27 = var_16;
    #pragma endscop
}
