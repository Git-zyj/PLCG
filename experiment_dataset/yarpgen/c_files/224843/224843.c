/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 -= (arr_1 [i_0] [i_0]);
        var_20 |= ((((1 ? 109 : 1)) * (5 | var_13)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 = (min(var_21, var_8));

        for (int i_2 = 4; i_2 < 8;i_2 += 1)
        {
            arr_6 [i_1] [i_1] = ((~(!1)));

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                arr_9 [i_3] [i_3] [i_1] [i_2] = (((arr_1 [i_2 - 4] [i_2 - 4]) ? 128 : (arr_3 [i_2 - 4] [i_2 - 2])));
                arr_10 [i_1] [i_1] [i_1] = (((arr_8 [i_1] [i_1]) | (arr_8 [i_3] [i_1])));
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_22 = 1;
                    var_23 = (min(var_23, -8));
                }
                arr_17 [i_1] [i_2] [i_1] = (1 & 7);
            }
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_24 += 1;
        arr_21 [i_6] [i_6] = 1;
        arr_22 [i_6] [i_6] = ((var_14 >> ((1 ? 1 : (arr_19 [i_6])))));
        var_25 += ((var_5 + (-var_4 > 19)));
        var_26 = 1;
    }
    #pragma endscop
}
