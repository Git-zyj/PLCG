/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = var_2;
                    var_15 = (max(var_15, ((((var_12 + 2147483647) >> ((((min(var_0, var_2)) < (arr_3 [i_0 + 1] [i_2 + 1])))))))));
                    arr_6 [i_0 + 1] [i_1] [i_2 + 1] = (min(((min((arr_0 [i_0 - 3] [i_1 + 1]), (arr_0 [i_0 - 3] [i_2 - 1])))), 19));
                }
            }
        }
    }

    for (int i_3 = 3; i_3 < 16;i_3 += 1)
    {
        var_16 = (max(var_16, (((~(max((arr_3 [i_3 - 1] [i_3 + 2]), (arr_9 [i_3 + 2] [i_3 - 2]))))))));
        arr_11 [i_3 - 1] = (arr_5 [i_3 + 1] [i_3 - 2] [i_3 + 2]);
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_17 += ((((max((((arr_13 [i_4]) + (-9223372036854775807 - 1))), var_4))) ? (arr_3 [i_4] [i_4]) : ((-(arr_0 [i_4] [i_4])))));
        arr_14 [i_4] = 9223372036854775807;
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        arr_22 [i_5] [i_4] [i_4] [i_4] = var_4;
                        arr_23 [i_6] [i_5] [i_6] [i_7] = var_10;
                    }
                }
            }
        }
        var_18 = (max(var_18, (((!((min((arr_19 [i_4]), (arr_13 [i_4])))))))));
        var_19 = max(var_6, (max((arr_15 [i_4] [i_4]), var_6)));
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
    {
        var_20 = (min((!var_0), var_8));
        arr_26 [i_8] = ((5 && (((min(-21898, (arr_17 [i_8] [i_8] [i_8] [i_8]))) <= (max((arr_16 [i_8] [i_8]), (arr_10 [i_8])))))));
    }
    #pragma endscop
}
