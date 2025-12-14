/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_17 = ((40 ? 247 : 230));
                        var_18 = ((-1 ? ((max((!var_9), ((~(arr_4 [i_0] [i_0 - 2] [i_0])))))) : (arr_10 [i_1] [8] [i_2 + 1])));
                    }
                    for (int i_4 = 3; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        var_19 = var_8;
                        arr_13 [i_4] [i_2] [i_1] [i_1] [i_0 + 1] [i_0 - 2] = 1902767371;
                        var_20 = max(((!(((25 ? 1 : (arr_5 [i_1])))))), 1);
                    }
                    for (int i_5 = 3; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        var_21 = 24;
                        arr_16 [i_5] [i_2 + 1] [i_2 + 1] [i_1] [i_1] [i_5] = (((((~(~1)))) ? -28 : ((max((arr_9 [i_0 - 2] [i_0 - 2] [14] [i_0] [i_0 - 2] [i_5 - 3]), ((max(1, 44))))))));
                    }

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_22 = (max(((((!(arr_14 [i_0] [i_1] [i_2] [i_2 + 1] [i_0] [i_6]))))), (arr_4 [i_0] [i_0] [i_0 - 2])));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            arr_21 [i_0] [i_1] [i_2] [i_6] [i_7] |= ((288230376151711743 ^ (arr_4 [i_6] [i_2 + 1] [i_0 - 1])));
                            arr_22 [i_7] [i_6] [1] = (arr_14 [i_7] [i_7] [i_6] [i_6] [i_7] [i_2]);
                            arr_23 [i_7] [i_7] [i_7] [i_7] [i_1] [i_0] = (((arr_18 [i_1] [i_1] [i_2] [i_6]) ^ (-241734820 & 1946703601)));
                            arr_24 [i_0] [i_1] [i_7] [i_2] [i_7] = -9223372036854775800;
                        }
                        arr_25 [i_1] [i_2 + 1] [i_1] = (((max((86 + 511), (1126204429460858718 | -16693))) ^ (((55 ^ (arr_11 [i_6] [i_6] [i_2] [i_2 + 1] [i_0 + 1] [i_0]))))));
                        arr_26 [i_0] [i_1] [i_2] [i_0] [i_6] [i_6] = (arr_19 [i_0] [i_2 + 1] [i_2] [i_0 - 2] [i_2]);
                        var_23 = ((-(arr_18 [i_0] [i_1] [i_2] [i_2])));
                    }
                    var_24 = 1767953471;
                }
            }
        }
    }
    var_25 ^= 3;
    var_26 = 72;
    #pragma endscop
}
