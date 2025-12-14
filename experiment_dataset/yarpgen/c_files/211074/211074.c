/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (max(var_7, var_19));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0 + 1] [i_0] = (!-177);
        var_21 = (((arr_1 [5]) >= var_6));
        var_22 = -1403315907;
        arr_3 [15] = (arr_0 [i_0 + 1] [i_0]);
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 6;i_2 += 1)
        {
            var_23 = (max(var_23, var_4));

            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_18 [i_5] [i_2] [i_5] [i_2] [i_5] [i_3] [i_2] = (((arr_4 [i_3 + 1]) | (!var_7)));
                            var_24 = var_2;
                        }
                    }
                }
                var_25 = (min(var_25, (13761 >= -51076715)));
                arr_19 [i_1] [i_2] = ((((((arr_5 [i_3 + 1] [i_2 - 2]) < (arr_5 [i_3 - 2] [i_2 - 3])))) | ((((arr_11 [i_1 + 1] [i_1 + 1] [i_1]) < (max(var_9, var_1)))))));
            }
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 8;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        var_26 -= ((!(((((max(-71, var_17))) ? (arr_16 [i_1 + 1] [i_1 - 1] [i_2 - 3] [i_1 - 1] [i_6 + 1] [i_6 + 1]) : (arr_15 [i_1 - 1] [i_2 + 4] [i_6] [i_6] [i_1]))))));
                        var_27 += (((((!((((arr_7 [i_1]) + var_16)))))) & ((-(arr_4 [i_6 + 2])))));
                        arr_25 [i_1] [i_1] [i_7] [i_2] [i_2 + 1] = (((arr_8 [i_1 - 1]) < (arr_8 [i_1 + 1])));
                        var_28 = (max(var_28, (min(((min((arr_4 [i_1 - 1]), (arr_1 [i_1 - 1])))), (max((arr_4 [i_1 - 1]), var_1))))));
                    }
                }
            }
            var_29 = (((-(arr_21 [i_2] [i_2 - 1] [i_1 - 1] [i_1 - 1]))));
            arr_26 [i_2] [i_2] [i_2] = (max(9223372036854775795, 25256));
        }
        var_30 = 65507;
        arr_27 [i_1] = -var_4;
        var_31 = ((+(((arr_20 [i_1 - 1] [i_1]) - (arr_20 [i_1 + 1] [i_1])))));
    }
    #pragma endscop
}
