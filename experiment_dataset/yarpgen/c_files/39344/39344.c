/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((max(var_10, var_16)), 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = ((~(arr_2 [i_0] [i_0] [i_0])));
                arr_5 [i_0] = (((688889021 % 4194303) | 0));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_19 = ((~(((arr_6 [i_0] [i_0]) ? 11791 : (arr_3 [i_0] [i_2])))));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_10 [i_1] [i_0] [i_3] = (~(arr_9 [i_1] [i_1 - 2]));
                        var_20 = var_1;
                        var_21 = (min(var_21, ((((arr_0 [i_1]) % 36040)))));
                        var_22 = (arr_4 [i_0] [i_1]);
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        var_23 = (((((~(arr_13 [2] [i_1] [i_1] [2] [i_1])))) ? -var_16 : var_6));
                        arr_14 [i_0] [i_1] [i_2] = ((((arr_3 [i_0] [i_0]) ? -8342614043746985143 : var_12)));
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_0] = var_9;
                        var_24 = (arr_13 [i_0] [i_1 + 1] [i_1 + 1] [i_5] [i_5]);
                        var_25 = ((~(((arr_12 [i_0] [i_0] [i_0]) ? 11804 : (-2147483647 - 1)))));
                        arr_20 [i_0] [i_2] [i_0] = ((!((!(arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    }
                }
            }
        }
    }
    var_26 -= (!var_12);
    #pragma endscop
}
