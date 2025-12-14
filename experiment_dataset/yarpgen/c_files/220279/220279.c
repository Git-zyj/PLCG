/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [1] [10] [9] = ((var_15 ? (arr_3 [i_0 - 2]) : (var_4 && 18446744073709551600)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        arr_10 [12] [5] [i_2] [9] = (!(arr_5 [i_0 - 2] [i_0 + 1]));
                        arr_11 [i_0] [i_3] = var_4;
                        var_18 = -40;
                        var_19 = (((arr_6 [6] [i_1] [9]) & ((var_10 ? (arr_1 [i_0 + 1]) : var_15))));
                        var_20 = -3083;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        var_21 = (arr_13 [6] [i_2]);
                        var_22 = arr_2 [i_4];
                        var_23 ^= (40 && (arr_12 [i_0] [1] [i_2] [6] [1]));
                    }
                    arr_14 [i_0] [9] [i_2] |= ((max(-1357802118, ((var_2 ? (arr_1 [i_0 - 2]) : 2305842940494217216)))));
                }
            }
        }
    }
    var_24 = (var_7 ? var_11 : (var_11 << 13928015347177246608));
    var_25 = var_5;
    #pragma endscop
}
