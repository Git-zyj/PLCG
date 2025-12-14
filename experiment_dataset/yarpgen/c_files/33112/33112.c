/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = ((!((min(0, 61962)))));
                var_12 &= arr_1 [i_1] [i_1];
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] = var_3;
        var_13 -= (~var_3);
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 22;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            arr_22 [i_3] [i_3 - 1] [i_6] = ((var_7 ? (-1 || 31527) : ((((arr_13 [23] [i_4] [23] [i_7]) > var_0)))));
                            var_14 = (((((0 > (arr_11 [i_4] [i_6] [i_7])))) ^ var_8));
                        }
                        for (int i_8 = 1; i_8 < 24;i_8 += 1)
                        {
                            var_15 = 0;
                            var_16 = (min(var_16, -1));
                            arr_27 [i_3 - 1] [i_4] [i_6] [i_5] [i_5] [i_6] [i_8 - 1] = (((arr_25 [i_5] [i_5 + 1] [i_4] [i_3] [i_3]) ? (162 || var_1) : var_6));
                            var_17 = (((arr_5 [i_3 - 1] [i_6 + 3]) >= 19));
                        }
                        arr_28 [i_6 - 1] [i_6] [i_6] [i_3] = (arr_25 [i_6] [i_6] [i_6] [i_6 - 3] [i_6 + 2]);
                    }
                }
            }
        }
        var_18 = (min(var_18, (((!((((arr_26 [i_3 - 1] [16] [18] [16] [i_3 - 1]) ? -31528 : (arr_24 [i_3 - 1] [i_3 - 1] [i_3] [18] [i_3 - 1])))))))));
    }
    #pragma endscop
}
