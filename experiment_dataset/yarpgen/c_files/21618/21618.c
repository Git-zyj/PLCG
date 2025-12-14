/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (!var_16);
        arr_4 [i_0] [i_0] = (!var_2);
        arr_5 [i_0] [i_0] = -926619725678055811;
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    arr_15 [i_3] [i_2] [i_3] &= ((!((!(arr_0 [i_1 + 1] [i_1])))));
                    arr_16 [i_1] [i_2] = (~2147483647);
                    arr_17 [i_1] [i_1] [i_2] [i_3] = (!0);
                }
            }
        }
        arr_18 [i_1] = -4403816219766963240;
        arr_19 [0] = ((~((~(~var_17)))));
    }
    var_18 = var_6;

    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        arr_23 [i_4] = var_2;
        arr_24 [i_4] [i_4] = ((-(!var_0)));

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            arr_28 [i_4] [i_5] = (arr_1 [i_4]);
            arr_29 [i_4] [i_4] = (!-var_1);
            arr_30 [i_5] [i_4] |= (!4294967292);
        }
    }
    #pragma endscop
}
