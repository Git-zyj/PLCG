/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_14 = (min(var_14, (arr_3 [i_3] [12] [i_1])));
                        arr_8 [i_0] [i_1] [i_2] [i_1] [i_0] [i_3] = 18433;
                        arr_9 [i_1] [i_1 + 1] [i_1] [i_1] [i_1] = max((max((arr_7 [i_1 - 1] [i_1 + 3] [i_1 + 1] [i_1] [i_1 - 1]), (min((arr_1 [i_0]), -2119)))), (((!((max(6517, (arr_0 [i_1] [i_1]))))))));
                    }
                }
            }
        }
        arr_10 [i_0] [i_0] = var_3;
    }
    var_15 |= ((~((max(-13104, var_0)))));
    var_16 = (max(var_16, (((((((var_3 ? -13113 : var_4)) ? (-13132 % var_12) : -13104)))))));
    var_17 = ((-7908 ? ((var_3 ? var_10 : var_10)) : (((((var_11 ? 13088 : var_0))) ? -2 : -13089))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            {
                arr_17 [i_5] [i_4] [i_4] = var_2;
                var_18 = ((((((min(-8818, 6892))) ^ ((var_1 ? (arr_2 [i_4]) : 7908)))) * ((-(-20047 / var_7)))));
                arr_18 [i_4] = (max(((min((arr_3 [i_5] [i_4] [i_5 + 2]), (arr_13 [i_5] [i_5 + 1])))), (((arr_15 [i_4] [i_4]) ? var_5 : (arr_13 [i_5] [i_5 + 2])))));
                var_19 = (min(var_19, (((((((((arr_12 [2]) ? var_6 : (arr_3 [i_5 - 1] [4] [i_4])))) && -21006)) ? var_4 : 4359)))));
                arr_19 [i_4] = (((min(((27099 - (arr_13 [i_4] [i_4]))), -13089)) <= -1));
            }
        }
    }
    #pragma endscop
}
