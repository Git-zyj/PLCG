/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (82 - 65531);
    var_11 = (min((min((min(var_9, var_5)), ((var_5 ? 173 : var_8)))), var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        var_12 ^= (arr_2 [i_0] [i_0]);
                        var_13 ^= (((arr_11 [i_2] [10] [i_2 - 1]) - (arr_11 [i_3] [22] [i_2 - 1])));
                        var_14 = arr_6 [i_1];
                    }
                    for (int i_4 = 4; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        var_15 *= var_3;
                        arr_16 [i_0] [i_1] [i_0] [i_1] = ((((max((arr_8 [i_1] [i_1] [i_1] [i_2 - 1]), (arr_11 [i_1] [i_1] [i_1])))) >> (arr_4 [i_1] [i_1])));
                    }
                    /* vectorizable */
                    for (int i_5 = 4; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        var_16 = var_7;
                        var_17 = (arr_20 [i_2 + 1] [16] [16] [i_2 - 1]);
                    }
                    var_18 = ((((max(((((arr_6 [i_1]) || var_7))), (29977 ^ var_8)))) ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : ((max((-2147483647 - 1), 29975)))));
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_19 = min((arr_4 [i_6] [i_6]), 123);

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_20 += (((max((arr_12 [i_6] [i_6]), (70 * 0))) == ((((arr_21 [i_6]) / var_2)))));
            var_21 += (arr_8 [12] [i_7] [i_7] [i_7]);
            var_22 = var_2;
            arr_25 [i_6] [i_6] [i_6] = (max(((((-9784 + (arr_2 [i_6] [i_6]))))), (((arr_23 [i_6] [i_6] [i_6]) & (arr_11 [i_7] [i_6] [i_6])))));
            var_23 = (((((arr_5 [i_6] [i_7]) - (arr_8 [i_6] [i_7] [i_7] [i_7]))) << ((min((arr_8 [i_6] [i_7] [i_6] [i_6]), (arr_5 [i_6] [i_7]))))));
        }
        var_24 = (!(arr_18 [i_6] [i_6]));
        var_25 = arr_24 [i_6] [i_6];
    }
    #pragma endscop
}
