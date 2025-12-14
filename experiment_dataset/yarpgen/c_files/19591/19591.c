/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, 210));
    var_14 -= ((16450739208860899733 && ((max(16450739208860899748, 1)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = 210;
        arr_4 [i_0] = (max(1, ((((max((arr_0 [i_0] [i_0]), (-32767 - 1)))) ? 1996004864848651871 : 23664))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [i_1] = (1 ? 210 : 2542796197);
            arr_8 [i_0] [i_0] = -6714167263617594227;
            var_15 = 13234;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_16 = (max(var_16, (arr_11 [i_0] [i_0] [i_2])));
            var_17 += (((arr_12 [i_0] [i_2] [i_2]) || -602099074));
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_18 = -1436142560;
                            arr_20 [i_2] [i_2] [i_2] [i_3 - 2] [i_4] [i_5] [i_5] = 4278934732654355696;
                        }
                    }
                }
            }
            arr_21 [i_0] [i_0] [10] |= ((-(arr_17 [0] [i_0] [i_0] [i_0] [i_2])));
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 24;i_6 += 1)
    {
        var_19 -= (arr_22 [i_6] [i_6]);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                {
                    arr_29 [i_6] [i_6] = (-600199584 / -1);
                    arr_30 [i_6 + 1] [16] [21] = ((!(((16450739208860899733 ? 156189101 : 9440189)))));
                    var_20 = arr_26 [i_6 - 1];
                    arr_31 [i_8] = (arr_26 [i_6]);
                    var_21 = (arr_27 [i_6 - 1]);
                }
            }
        }
        var_22 = (var_12 ? 156189101 : (arr_22 [i_6] [i_6]));
        var_23 = var_1;
    }
    #pragma endscop
}
