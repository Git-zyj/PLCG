/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((-(max((arr_1 [i_1 + 1]), (arr_3 [i_1 - 1] [i_1 - 1])))));
                var_14 -= (!var_1);

                /* vectorizable */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    var_15 = ((var_0 ? (((arr_3 [i_0] [i_2]) ? -28058 : var_7)) : var_5));

                    for (int i_3 = 2; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        var_16 = (!(arr_3 [i_0] [i_3]));
                        var_17 -= (~-28058);
                        arr_11 [i_0] [i_1] [i_2] [i_0] [i_2] = (arr_6 [i_1] [i_3 - 2]);
                    }
                    for (int i_4 = 2; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_18 = ((~((~(arr_7 [i_0] [i_2] [7])))));
                        var_19 = -9199418310766170671;
                    }
                }
                /* vectorizable */
                for (int i_5 = 3; i_5 < 16;i_5 += 1)
                {
                    var_20 = 36027697507336192;
                    arr_16 [i_1] [i_5] = (((arr_6 [i_0] [i_1 - 1]) ? (arr_6 [1] [i_1 + 1]) : (arr_6 [i_1] [i_1 - 1])));
                }
            }
        }
    }
    var_21 = var_5;
    #pragma endscop
}
