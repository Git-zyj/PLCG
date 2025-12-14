/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 &= (arr_1 [16]);
        arr_2 [12] |= (((arr_0 [i_0]) <= var_0));

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0] = (arr_4 [i_0] [i_0] [i_0]);

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_19 *= (max((arr_0 [i_2]), (arr_3 [i_2])));
                arr_9 [i_0] [i_0] [4] [i_2] &= ((((8 ? 18446744073709551612 : -27)) == ((((min(-17, (arr_1 [i_2]))))))));
            }
        }
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 23;i_5 += 1)
            {
                {
                    var_20 *= ((((((~var_14) <= (min(var_1, (arr_11 [i_4 + 2])))))) <= (arr_18 [i_3] [i_3] [i_3])));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        arr_23 [i_5] = (arr_18 [i_4 - 1] [i_5 + 1] [i_5 - 1]);
                        var_21 = (arr_21 [i_5] [i_5]);
                    }
                    arr_24 [i_3] [i_5] = (arr_15 [6]);
                }
            }
        }
        var_22 = ((min((arr_4 [i_3] [i_3] [12]), (arr_8 [22] [22]))) - (((((min((arr_17 [i_3] [18] [i_3] [i_3]), (arr_8 [6] [6])))) ? ((-(arr_1 [2]))) : (min((arr_12 [9] [9]), var_6))))));
    }
    var_23 = var_12;
    #pragma endscop
}
