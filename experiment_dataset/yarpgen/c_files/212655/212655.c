/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~(min(14720245588248989332, (min(0, 1248188749771946910)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (((((var_9 || var_11) ? (arr_3 [4] [i_1] [i_1]) : (((arr_2 [i_0]) ? var_4 : 1)))) << (((arr_1 [7] [i_1 - 2]) - 2258))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] [i_0] = (~var_7);
                    arr_11 [i_0] [9] [i_0] [i_2] = 91;
                    var_17 *= (((!(arr_6 [i_0] [10] [2]))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    arr_14 [i_0] [i_1 - 1] [i_0] [i_1] = (0 ? var_4 : var_1);
                    var_18 = (arr_3 [i_1 - 2] [i_1 + 1] [i_1 - 1]);
                    var_19 -= 11441;
                }
                var_20 &= (arr_12 [i_1] [6] [i_0]);
            }
        }
    }
    #pragma endscop
}
