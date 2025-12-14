/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (max(var_7, (173 + -var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = (arr_1 [i_0]);
                var_15 = var_12;
            }
        }
    }

    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_18 [i_5] [18] [i_4] [12] [i_5] = 1514514998;
                        arr_19 [i_2] [i_5] = 1514514998;
                    }
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        arr_22 [i_6] [i_6] [i_6] [i_2] = var_6;
                        var_16 *= ((!((((arr_14 [i_2] [i_2] [i_4] [i_6 - 2]) ? (arr_14 [i_3] [i_4] [i_4] [i_6 - 2]) : (arr_14 [i_6] [i_6] [i_6] [i_6 - 2]))))));
                        var_17 = var_12;
                        var_18 = (arr_4 [i_6] [i_4] [i_6]);
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        arr_26 [i_2] = (max((((arr_2 [i_4]) ? 1514514998 : (((67 ? -67 : 1519313934))))), (((~(29127 || 1514515016))))));
                        arr_27 [i_2 - 2] [i_2] [i_2 - 2] [i_2 + 1] [i_2 + 1] = (max(var_5, (min((arr_16 [i_7] [i_7] [1] [i_2] [i_2] [i_2]), (min(7711898327479807778, 61))))));
                    }
                    var_19 = (((~(arr_15 [10]))));
                    var_20 = (min((+-4371294786681611111), 20154));
                }
            }
        }

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_21 = (max(var_21, (((66 | (min(var_12, -1849400261580368339)))))));
            arr_30 [i_8] [i_8] [i_8] = (arr_8 [i_8]);
        }
        /* vectorizable */
        for (int i_9 = 2; i_9 < 19;i_9 += 1)
        {
            arr_34 [i_9] = (((-2147483647 - 1) | ((var_3 ? (arr_13 [i_2]) : var_0))));
            var_22 = (min(var_22, (((562949953421311 ? -91 : 1)))));
            arr_35 [i_9] [i_9] = var_7;
        }
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_23 = (max(var_23, -0));
            arr_43 [i_10] [i_10] [i_10] = 13752;
        }
        arr_44 [i_10] = ((((((var_7 * var_1) >> 4))) ? ((((arr_2 [12]) * (var_4 || 4)))) : (((((arr_2 [i_10]) != 879087953)) ? (arr_41 [i_10] [i_10]) : ((((arr_21 [i_10]) | var_9)))))));
        arr_45 [2] &= (((((15681827171900071438 ? 13214151518740332739 : 1))) || 3305010427));
        var_24 -= (min((!var_2), 2147483647));
    }
    var_25 = 1;
    #pragma endscop
}
