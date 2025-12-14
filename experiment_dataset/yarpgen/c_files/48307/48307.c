/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (--17);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = ((arr_1 [i_0]) % (arr_2 [i_0]));
        var_17 = (arr_1 [9]);
        arr_4 [i_0] = var_13;
        var_18 = -0;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_19 = ((var_3 % (arr_5 [i_1])));
        arr_7 [i_1] [i_1] = -9223372036854775800;
        var_20 = (-9223372036854775807 >= 7694505729307764283);
        arr_8 [i_1] [i_1] = (~-7694505729307764283);
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_21 = (max(var_21, ((max((((~(min(1525452559, 335408212))))), (~var_0))))));
        var_22 = ((((max((arr_5 [i_2]), 0))) ? 42279 : ((-(((!(arr_10 [i_2]))))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        var_23 = (min(var_23, ((max(((var_4 ? -1109864576 : var_8)), ((-(arr_6 [i_2] [16]))))))));
                        arr_20 [i_2] [i_3] [i_3] &= ((-(((arr_9 [i_3] [i_4]) + (arr_9 [i_3] [i_5])))));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_24 = -var_4;
                            arr_23 [13] [i_2] [i_5] [i_4] [i_2] [i_2] = ((11 & (arr_15 [4] [i_3] [i_3])));
                        }

                        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            arr_27 [15] [i_2] [i_4] [i_3] [i_3] [i_2] [i_2] = 7694505729307764282;
                            arr_28 [i_2] [i_3] [i_4] [i_2] [i_7] [i_7] = (!7694505729307764283);
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                        {
                            var_25 = 0;
                            var_26 += ((((~(arr_11 [i_2] [i_3] [i_8])))) ? var_13 : var_9);
                        }
                        for (int i_9 = 1; i_9 < 18;i_9 += 1)
                        {
                            var_27 -= (((-272098609 && (((7694505729307764283 ? -7694505729307764283 : 7694505729307764282))))));
                            var_28 = (((max((arr_17 [i_9] [i_2] [i_9] [i_9 + 1] [i_2] [i_3]), (arr_17 [i_9] [i_2] [i_9] [i_9 - 1] [i_2] [i_2]))) | (((arr_17 [i_9] [i_2] [i_2] [i_9 + 1] [i_2] [i_5]) - 65051))));
                        }
                        arr_35 [i_2] [i_3] [i_4] [i_2] = -7694505729307764283;
                    }
                }
            }
        }
        var_29 = (min(var_29, ((((~(arr_6 [i_2] [i_2])))))));
        var_30 = ((~(arr_9 [i_2] [i_2])));
    }
    var_31 = (((((max(16109, var_6)))) ? 120 : (max(0, var_6))));
    #pragma endscop
}
