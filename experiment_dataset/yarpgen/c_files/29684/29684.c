/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_11 = (min(var_11, var_10));
        arr_2 [i_0] = (((((((arr_0 [10] [i_0 + 2]) ? (arr_0 [i_0] [i_0 + 2]) : (arr_0 [1] [i_0 + 2]))) + 2147483647)) << (((min(var_5, (arr_0 [10] [i_0 + 2]))) - 11612563722299538617))));
        var_12 = ((-(!var_5)));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [9] = ((((((((var_9 ? var_1 : 133))) ? ((var_7 ? var_5 : var_8)) : ((((arr_6 [i_0] [i_0 + 2] [i_0]) ? var_9 : (arr_3 [0] [0]))))))) ? (((var_0 % (arr_8 [2] [i_1 - 4] [17] [i_1 - 1])))) : (min(var_5, var_5))));
                        arr_13 [16] = (((((arr_11 [i_0] [i_0] [2] [1] [i_0 + 2]) + 9223372036854775807)) << (((((var_8 ? 1 : (arr_9 [i_0] [i_0] [i_0] [i_3]))) < var_1)))));
                        var_13 = (((!(arr_9 [i_0 + 2] [i_1 + 1] [i_2] [i_3]))) ? (!var_3) : (((!((var_0 && (arr_4 [i_0] [i_0 + 1])))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
    {
        var_14 = (min(var_14, (~var_0)));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    arr_20 [i_4] [i_4] [i_4] [i_4] = ((((((((arr_1 [i_4] [i_4]) ? (arr_10 [i_4 + 2] [i_4] [i_4] [i_4] [i_4 + 2] [i_4 + 2]) : (arr_10 [i_4] [5] [7] [5] [8] [i_6])))) || (((var_6 ? 16279534577025206595 : (arr_4 [i_4 + 1] [i_4])))))) ? ((min(var_2, (arr_9 [i_4 - 1] [13] [i_6] [i_4])))) : var_6));
                    var_15 = (arr_15 [i_5]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
    {
        var_16 = (min(var_16, -0));
        var_17 -= ((var_1 ? (arr_18 [i_7] [i_7 + 2] [i_7]) : 912901756799434450));
    }
    var_18 = 254;
    #pragma endscop
}
