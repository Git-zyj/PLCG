/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!((max((max(var_8, var_6)), ((max(-21, 8))))))));
    var_14 *= ((var_4 >= ((var_10 & (var_0 ^ var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((max((arr_1 [i_0]), var_0))) ? ((~(arr_3 [i_0] [i_1 - 1] [i_0]))) : (((arr_3 [i_1] [i_1] [0]) >> (var_9 + 589303886)))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    var_15 = (((((var_11 ^ (arr_7 [i_2 + 1])))) ? (arr_2 [1] [i_2]) : (arr_4 [i_0] [i_0])));

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_16 = (min(var_16, (arr_11 [i_1] [1] [i_1])));
                        arr_13 [i_3 - 1] [i_3] [i_2] [i_3] [i_0] = arr_10 [i_3] [5] [i_0 - 1];
                        var_17 = (arr_9 [i_3] [i_2 + 2] [i_0] [i_0]);
                    }

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_17 [i_1 - 3] [i_1 - 3] = (arr_4 [i_2] [i_2]);
                        var_18 = ((((((arr_9 [i_0 - 1] [i_1 + 1] [i_2] [i_2]) / var_6))) ? 4294967274 : (arr_9 [i_0] [i_1] [i_1] [i_0])));
                    }
                }
                for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
                {
                    arr_20 [i_0 - 1] [i_1] [15] [i_5] = (max((arr_14 [i_0 + 1] [i_1] [i_0 + 1] [i_5]), var_7));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_19 = ((15 ? (max(((min((arr_19 [i_0] [i_1 - 2] [i_5]), var_11))), (arr_4 [i_5] [i_1]))) : (((((arr_21 [i_0] [i_1] [i_5] [i_6] [i_0] [i_6]) <= (var_11 >= 250)))))));
                                var_20 = (max(var_0, 8191));
                            }
                        }
                    }
                    var_21 -= ((-2147483647 - 1) ? 46616 : 1);
                }
                arr_25 [i_1 - 2] [i_0] = ((!(((var_9 < (arr_7 [i_0]))))));
            }
        }
    }
    var_22 = var_1;
    var_23 = var_12;
    #pragma endscop
}
