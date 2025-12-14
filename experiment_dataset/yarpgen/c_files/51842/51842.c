/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((~8275896032002915527) ? ((((27594 ? 3 : 901663119690615794)) ^ (~var_13))) : var_3));

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = var_15;
        var_19 = (min(var_19, (((((((var_8 / (arr_3 [9] [1])))) ? 7388663667535242467 : var_14))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            {
                var_20 = ((-(var_7 / var_16)));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_21 ^= -127;
                    arr_14 [i_1] [i_1] [6] &= ((7 & ((var_11 ? (-2147483647 - 1) : 0))));
                }
                for (int i_4 = 4; i_4 < 20;i_4 += 1)
                {
                    var_22 -= ((-3 | ((min(var_6, 554035361)))));
                    var_23 = ((~(min(var_8, (arr_9 [i_4 - 3] [i_2 + 2])))));
                }
                arr_17 [i_1] [i_2 - 3] = (((((var_7 ? (arr_7 [i_1 - 2]) : (arr_7 [i_1 - 2])))) ? ((((var_7 > (arr_16 [i_1 - 2] [i_1 - 1] [i_2 - 2]))))) : (min(var_15, var_14))));
                var_24 ^= (max(var_9, (10170848041706636089 * 0)));
                var_25 = (min(var_25, (var_5 | var_7)));
            }
        }
    }
    var_26 += (var_10 >= var_5);
    var_27 = var_6;
    #pragma endscop
}
