/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    var_19 = ((239 * (((var_11 / var_7) ? (var_16 * var_8) : var_10))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 163;
        var_20 = ((((((arr_1 [i_0]) ? ((max(var_2, 17))) : ((min(32768, var_2)))))) ? 251 : (((-6527671280075794135 & var_5) & (arr_2 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            arr_10 [i_1] [i_2] = (~-4695763712018535830);
            var_21 = (((var_10 & 65535) >> ((((arr_2 [i_1]) && var_9)))));
            var_22 = ((!(((7096 ? 255 : (arr_5 [i_1 - 1]))))));
        }
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            arr_14 [i_1] [8] [i_3 + 3] = (((arr_11 [i_1]) > (((arr_12 [i_1]) % var_5))));
            arr_15 [i_3 - 1] = -18;
            arr_16 [i_3] = ((-(arr_5 [i_1 + 4])));
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            arr_21 [i_1] [18] &= (arr_12 [i_1 + 4]);
            var_23 = ((255 / (arr_12 [i_1 - 3])));
            arr_22 [i_4] = arr_0 [i_4];
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 21;i_7 += 1)
                {
                    {
                        var_24 = (arr_27 [i_7 - 3] [i_7] [i_7 - 2] [i_7]);
                        var_25 += ((var_14 ? (arr_18 [i_7 + 1] [11]) : (arr_18 [i_7 - 1] [i_5])));
                        arr_30 [i_1] [i_6] [2] &= (((arr_1 [i_1 + 3]) ? (arr_27 [i_7] [i_7 - 3] [i_1 + 3] [i_1 + 3]) : (arr_1 [i_1 + 2])));
                    }
                }
            }
        }
        arr_31 [i_1] [i_1] = ((!(arr_8 [3] [i_1 + 4])));
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 3; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    {
                        var_26 = ((((max(((8 ? var_7 : (arr_38 [i_9] [i_9] [i_9]))), (arr_40 [i_10] [i_10] [i_10] [i_10])))) ? (((min(var_17, 212)))) : (((1237642166 ? 26 : (arr_38 [i_9] [i_10] [i_11]))))));
                        var_27 = (min(var_27, 278673535));
                        var_28 -= (min((max((arr_34 [6] [6]), var_1)), ((-((min(255, (arr_35 [18]))))))));
                    }
                }
            }
        }
        var_29 ^= ((min(6659, (arr_33 [i_8]))));
        var_30 = var_0;
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        var_31 = (min(var_31, ((((arr_43 [i_12]) ? -627772463816859161 : var_15)))));
        var_32 += ((!(arr_43 [i_12])));
        arr_44 [i_12] |= (((((arr_42 [i_12]) ? var_5 : var_16)) != 174));
        arr_45 [i_12] = (!-2004614070260622086);
        var_33 = ((82 ? ((-5355871397580724829 & (arr_43 [i_12]))) : (((arr_42 [11]) ? (arr_42 [i_12]) : (arr_42 [i_12])))));
    }
    #pragma endscop
}
