/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_15 -= -29709;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = 37371;
                    var_17 = 14105;
                }
            }
        }
        arr_7 [i_0] = (max((arr_4 [i_0 - 1] [i_0]), ((((arr_0 [i_0]) > var_10)))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_18 = 925;
            arr_11 [i_0] = (arr_8 [i_0 + 1] [i_0 + 1]);
            arr_12 [i_0] [i_0] = 3119345952;
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {
                        var_19 = (((arr_15 [i_0] [i_4] [i_4] [i_6]) ? ((((arr_5 [i_0 + 1] [i_0] [i_0] [i_0 - 1]) >= var_13))) : ((var_3 ? 61897 : (((!(arr_1 [i_0] [i_4]))))))));
                        arr_19 [i_0] [i_0] = (!925);
                        arr_20 [7] [7] [i_0] [i_6] = (((-var_2 + 1722316901) + var_2));
                        var_20 -= ((~((((((arr_4 [i_0] [i_5]) % var_13))) ? 925 : 6536))));
                    }
                }
            }
            var_21 += var_2;
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {

        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {
            arr_25 [i_7] [i_7] [i_7] = 3930744575;
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    {
                        var_22 = (((arr_22 [i_8 + 1] [i_8 + 1]) ? 29558 : (arr_22 [i_8 + 1] [i_8])));
                        var_23 += 35978;
                        var_24 = var_4;
                    }
                }
            }
        }

        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            arr_34 [i_7] [i_7] = (((arr_6 [i_7] [i_11] [i_11]) ? (arr_6 [4] [i_11] [i_7]) : 61934));
            var_25 = -var_9;
            arr_35 [i_7] [i_11] = (((arr_15 [i_7] [i_7] [i_11] [i_11]) * (arr_15 [i_7] [i_11] [i_7] [i_7])));
            arr_36 [i_7] [14] [i_11] &= 4294967269;
        }
        var_26 = 7;
    }
    var_27 = var_2;
    #pragma endscop
}
