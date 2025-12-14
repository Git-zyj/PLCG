/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(~648399283)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            arr_5 [i_1 - 1] [5] [6] = (((arr_2 [i_0]) >= (arr_2 [i_0 + 1])));
            var_15 -= var_0;
            var_16 *= (((var_7 - var_5) ? (arr_2 [i_0 - 1]) : ((684892600 ? 648399279 : 2147483647))));
        }

        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            arr_8 [i_2] [i_2] = (arr_2 [i_0 + 1]);
            arr_9 [i_2] [8] [8] = (~(arr_1 [i_0 - 2]));
            var_17 = (arr_0 [i_2]);
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 4; i_4 < 7;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        var_18 = ((var_4 / (arr_10 [i_3] [i_4] [i_5])));
                        arr_18 [i_0] [i_4] [2] [i_0] = (-((var_13 ? var_13 : (arr_17 [i_0] [i_3] [i_3] [i_4] [i_0] [1]))));
                        var_19 *= ((var_6 ? (2147483631 - 1) : 15772));
                        var_20 = ((arr_16 [i_0 - 2] [i_0] [i_0 - 2] [i_4]) ? (!0) : (arr_12 [i_0] [i_0 - 2] [i_0]));
                        var_21 = (arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 2]);
                    }
                }
            }
            arr_19 [i_0] [i_0 + 2] [3] = 2941572433349849932;
            arr_20 [i_0 + 2] [i_0 + 2] [i_3] = 53;
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            arr_25 [i_6] = (arr_10 [i_0 + 1] [i_0 + 2] [i_6]);
            var_22 = (arr_0 [3]);
        }
    }
    var_23 = (max(var_1, var_2));
    var_24 = (((15772 ^ var_13) != 2147772388));
    #pragma endscop
}
