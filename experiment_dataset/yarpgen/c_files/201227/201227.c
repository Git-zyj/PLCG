/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_17 = (arr_0 [i_0 + 2]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_1] [i_1] [i_1] = (arr_0 [i_0]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_18 = 1;
                        var_19 = var_3;
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_20 = (arr_5 [i_0 - 2] [i_0 - 1]);
            var_21 = (-20 ? 0 : 3758096384);
            arr_16 [i_4] = var_10;
        }
    }
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 9;i_7 += 1)
            {
                {
                    arr_26 [i_5] [i_6] [i_7] = var_6;
                    arr_27 [i_5] [i_5] [i_7] = var_14;
                    var_22 = ((!((max((max(var_11, (arr_24 [i_5] [i_6]))), (arr_23 [i_5]))))));
                    arr_28 [i_5] [i_5] [i_5] [i_7] = (arr_20 [i_5] [i_6] [i_5]);
                    var_23 = (arr_2 [i_5] [10]);
                }
            }
        }
        var_24 = 27;
    }
    var_25 = ((var_5 ? var_9 : (min(var_10, (min(3758096385, 1))))));
    var_26 = var_5;
    #pragma endscop
}
