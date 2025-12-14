/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] = (arr_0 [i_0]);
                var_12 ^= ((var_10 < ((max((((arr_2 [5]) + 1126983496)), 1479594805)))));
                arr_7 [i_0] [i_1] = (!-31);
                var_13 |= (!61133);
                var_14 = var_4;
            }
        }
    }

    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_3 + 1] [i_3] [i_4] = (arr_8 [i_2]);
                    arr_15 [i_4] [i_3 - 1] [i_4] = (max(2131359223, (arr_9 [i_3 + 1])));
                }
            }
        }
        arr_16 [8] = var_3;
        var_15 += var_9;
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] = 1180479904;
        var_16 |= (max((((!(arr_10 [i_5])))), 33694));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
    {
        var_17 = 65535;
        arr_23 [i_6] = -9344;
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        var_18 -= (~var_11);
        var_19 = var_8;
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        {

                            for (int i_12 = 0; i_12 < 13;i_12 += 1)
                            {
                                arr_37 [i_8] [i_9] [i_8] [8] [2] = ((!(((136 ^ (!var_3))))));
                                arr_38 [i_12] [i_8] [i_10 + 1] [i_8] [i_8] = var_8;
                            }
                            var_20 = (min(var_20, ((((var_2 > -35) ? (min(-1603132129, 136)) : (~9335))))));
                        }
                    }
                }
                var_21 = (((((16990 ? (arr_3 [i_8]) : (arr_3 [i_8])))) ? (((9362 != (arr_3 [i_9])))) : ((((arr_3 [i_9]) == (arr_3 [i_8]))))));
            }
        }
    }
    var_22 = (min((min(var_6, var_3)), (max(var_6, 1))));
    var_23 = var_2;
    #pragma endscop
}
