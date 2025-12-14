/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (((-(!-10236))))));
                var_15 = (max(var_15, ((((arr_3 [i_0] [i_1 + 1]) | (arr_3 [i_0] [i_1 - 1]))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        var_16 ^= var_7;
                        arr_17 [i_2] = var_10;
                        arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] = ((-((max((((var_2 == (arr_14 [i_2])))), (arr_2 [i_5]))))));
                        arr_19 [i_2] [i_5] [i_5] [i_5] = (((arr_5 [i_4] [i_2]) | ((((3098965073 == (arr_13 [i_2] [i_2]))) ? (((~(arr_6 [i_2])))) : (((arr_15 [i_5]) ? 255 : (arr_13 [i_5] [i_2])))))));
                    }
                }
            }
        }
        arr_20 [i_2] = var_7;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
    {
        var_17 = (arr_11 [i_6] [i_6] [i_6] [i_6]);
        var_18 = (arr_15 [i_6]);
    }
    var_19 = (max((((~var_6) & (~var_6))), -var_12));

    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        arr_28 [i_7] = (((!-var_13) & var_13));
        var_20 = (~9);
        var_21 = ((var_3 % (1196002232 <= var_1)));
        var_22 = 184;
        var_23 = (max(var_23, ((min(var_1, (((((!(arr_0 [i_7] [i_7])))) << ((((var_9 ? (arr_13 [i_7] [i_7]) : (arr_7 [i_7]))) - 765958058)))))))));
    }
    var_24 = var_5;
    #pragma endscop
}
