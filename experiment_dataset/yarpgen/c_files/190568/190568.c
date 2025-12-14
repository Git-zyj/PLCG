/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = var_8;

        for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
        {
            var_15 = -233;
            var_16 = (min(((min((((arr_0 [i_0]) ? (arr_3 [i_1] [i_1]) : 1)), ((~(arr_2 [i_0] [2])))))), ((((((arr_1 [0]) ? var_13 : (arr_1 [i_0])))) ? (23467 | 233) : 16934))));
            arr_5 [3] = (!(((~(arr_1 [i_0])))));
            arr_6 [5] [i_1] [i_1] = ((((arr_3 [i_1 + 1] [i_1 + 1]) ? (arr_3 [i_1 + 1] [i_1 + 1]) : (arr_3 [i_1 + 1] [i_1 + 1]))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_17 = ((((((arr_10 [i_3] [i_3]) ? 9223372036854775744 : 2))) ? (((arr_11 [i_0] [i_2 + 1] [i_3 + 1]) ? 65535 : -201343783)) : 35837));
                        arr_15 [i_0] [i_4] = ((!(arr_3 [i_2 + 1] [i_2 + 1])));
                    }
                }
            }
            var_18 = (((arr_14 [i_0] [i_2] [12] [i_2 + 1] [i_2]) ? (arr_14 [4] [i_2 + 1] [i_2] [i_2 + 1] [1]) : (arr_14 [13] [12] [i_0] [i_2 + 1] [i_2])));
            var_19 &= (arr_10 [i_2 + 1] [i_2]);
            var_20 = ((!(((arr_4 [i_0] [i_2]) >= (arr_8 [i_0] [i_2])))));
        }
        arr_16 [i_0] = (((arr_8 [i_0] [i_0]) != (arr_8 [8] [i_0])));
    }
    var_21 += (var_10 * (min(-1, 19439)));
    var_22 = ((!(!-1)));
    var_23 = 0;
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                {
                    arr_24 [17] [i_6] = ((min(14160026649448558992, (arr_19 [i_5]))));
                    var_24 = (arr_19 [i_5]);
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_25 = (arr_23 [4] [i_6] [i_6] [15]);
                                arr_29 [i_5] [i_8] [i_9] [i_8] [i_9] = (arr_21 [i_5] [i_6] [i_5]);
                                var_26 += (arr_25 [i_8] [i_8] [i_8]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
