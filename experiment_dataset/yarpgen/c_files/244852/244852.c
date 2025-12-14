/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_1] [i_4] = (min(4611686018427387903, ((((((-(arr_4 [i_1] [2] [i_3])))) ? -4907810937372086518 : ((13835058055282163707 ? (arr_12 [13] [13] [i_2] [13] [i_4]) : 222)))))));
                                var_14 = 8;
                                arr_14 [i_3] = 8323072;
                                arr_15 [i_0] [i_0] [i_2] [i_0] [i_3] = ((!((min((((arr_9 [i_0 - 1] [i_1] [i_2 - 1] [i_4]) ? (arr_5 [i_0 - 1] [i_0 - 1] [i_0]) : 13835058055282163712)), (arr_9 [i_0] [8] [i_2] [i_3 + 1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_15 -= (var_0 < 3196741166373860167);
                                var_16 = (max(4611686018427387900, ((min(188, (arr_17 [i_5] [i_2 - 1] [i_0 - 1] [i_0 - 1]))))));
                            }
                        }
                    }
                    var_17 = 1;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_28 [i_9] [i_7] [i_7] [i_7] = ((((!(arr_22 [i_8 - 1] [i_8 + 1]))) ? (arr_22 [i_8 + 1] [i_8 - 1]) : (arr_22 [i_8 + 1] [i_8 - 1])));
                    arr_29 [21] [i_8] = ((!((((((var_4 ? -37 : var_7))) % var_6)))));
                    var_18 ^= ((((((min(-33, var_7))))) + (((48 ? var_6 : var_12)))));
                    var_19 = (min((arr_22 [i_8 + 1] [i_8]), (((arr_22 [i_8 + 1] [i_8 - 1]) ? (arr_22 [i_8 + 1] [i_8 + 1]) : (arr_22 [i_8 + 1] [i_8 - 1])))));
                    arr_30 [i_7] [i_8 - 2] [i_9] [13] |= (((!var_5) > -54));
                }
            }
        }
    }
    #pragma endscop
}
