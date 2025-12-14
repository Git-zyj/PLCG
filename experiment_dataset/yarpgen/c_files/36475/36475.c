/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((max((((var_3 ? var_6 : var_7))), (max(1278131692, 9223372036854775807))))), var_4));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_11 = -5195262699253738169;
        var_12 = (max((((((min(var_7, (arr_1 [i_0])))) || ((min((arr_2 [i_0]), (arr_2 [i_0 - 1]))))))), (max((arr_2 [i_0]), (arr_0 [i_0 + 1])))));
        arr_4 [i_0 - 1] [5] = ((!((!((!(arr_0 [i_0])))))));
        var_13 = (((((((min((arr_2 [i_0]), (arr_2 [i_0])))) ? ((((arr_1 [i_0]) << (((-20534 + 20550) - 14))))) : (arr_2 [i_0])))) ? ((max(0, (arr_1 [i_0 - 1])))) : (min(((((arr_0 [i_0]) ? 1886672582 : 150))), (max((arr_2 [i_0]), (arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_14 |= 144115188075855871;
                        arr_16 [i_1] [4] [i_1] [i_4] = (arr_12 [i_3 - 1]);
                        arr_17 [i_4] [i_1] [i_1] [i_1] = (-1990918406 >= -var_1);
                    }
                }
            }
        }
        arr_18 [i_1] = (arr_7 [2]);
        arr_19 [i_1] [i_1] = (arr_14 [i_1] [i_1] [8] [i_1] [i_1]);
    }
    var_15 = var_0;

    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        var_16 = (min(var_16, ((max(var_6, ((+(max((arr_22 [5]), 20531)))))))));
        var_17 = arr_21 [i_5] [i_5];
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
    {
        var_18 = (min(var_18, var_7));
        var_19 = ((var_8 >= (max((((arr_21 [i_6] [6]) ? 13 : var_5)), (arr_23 [i_6])))));
        var_20 = (min(((max((arr_23 [i_6]), (arr_23 [i_6])))), var_3));
        arr_25 [i_6] = -20534;
    }
    #pragma endscop
}
