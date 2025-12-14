/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    var_19 = (20897 * 0);

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_20 = ((-((-(max(var_16, var_12))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 18;i_3 += 1)
                {
                    {
                        var_21 = (arr_8 [i_0] [i_1] [i_2]);
                        var_22 += 0;
                        arr_12 [i_0 + 1] [i_2] [i_2] [i_2] = ((((((-1303286811 ? (arr_1 [i_0]) : 11))) ? var_8 : (!var_16))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_23 = (max(((~(~4294967295))), (((!((min((arr_5 [i_4] [i_4]), var_16))))))));
        arr_16 [i_4] = ((~((((((arr_11 [i_4]) & var_1))) ? ((((arr_13 [i_4]) * (arr_9 [i_4] [i_4] [i_4] [i_4])))) : (~4294967295)))));
        var_24 = (min(((var_14 ? var_5 : (arr_2 [i_4]))), 4294967295));

        for (int i_5 = 4; i_5 < 11;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                arr_21 [i_5] [i_5] = ((!(!var_10)));
                arr_22 [i_5] [i_5 + 1] [i_6] = ((var_12 ? (((arr_5 [i_4] [i_6]) * (2414778419147408944 * var_4))) : ((max(32758, 4294967295)))));
            }
            arr_23 [i_5] [i_5 + 1] [i_5] = ((((!((min(3598514990, (arr_6 [i_4] [i_5] [i_5 - 2] [i_5])))))) ? (((!var_7) ? (((arr_5 [i_4] [i_5]) ? 1 : 6)) : var_4)) : (((arr_17 [i_5 - 3] [i_5]) ? var_4 : 4294967282))));
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    {
                        arr_31 [i_4] [i_7] [i_8] [i_9] = min((((var_0 ? (arr_6 [i_4] [i_7] [i_8] [i_9]) : (arr_6 [i_4] [i_9] [i_8] [i_9])))), ((2769223883364978274 + (((0 ? var_12 : -1))))));
                        var_25 = ((~((((var_0 ? var_0 : var_5))))));
                        var_26 = ((!((((var_7 << (31257 - 31247)))))));
                    }
                }
            }
        }
    }
    var_27 = (min(var_27, 172704204));
    #pragma endscop
}
