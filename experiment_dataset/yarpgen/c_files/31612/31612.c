/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~(4546 - var_13)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((!(!23)));
        arr_3 [i_0] [i_0] = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? ((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])))) : 1781810313));
        arr_4 [i_0] = (max(((((arr_1 [i_0]) ? -9 : ((max((arr_1 [i_0]), (arr_0 [i_0]))))))), (max(1, var_17))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (1 * (arr_0 [i_1]));
        var_19 = (((((arr_5 [i_1]) ? -43 : 56257)) <= (arr_1 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_20 = ((arr_12 [i_2] [i_3 + 1] [i_3]) <= (arr_16 [i_4] [7] [7]));
                    arr_17 [i_4] [i_2] [i_3] [i_2] = var_11;
                }
            }
        }
        var_21 = (((((-(arr_11 [i_2])))) ? (arr_1 [i_2]) : (arr_13 [i_2] [i_2] [i_2])));
        arr_18 [i_2] = -6476;
        var_22 = var_14;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_23 = 50804;
        arr_21 [22] &= ((~(min((((-25 ? -24 : 30053))), 4955111436084358738))));
    }
    var_24 = var_1;
    #pragma endscop
}
