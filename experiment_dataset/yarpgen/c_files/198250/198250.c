/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_7 [i_0] [19] = var_3;
            var_11 = (arr_2 [i_0]);
            var_12 = ((arr_3 [i_1]) + 32767);
        }
        var_13 = ((arr_0 [i_0] [i_0]) != (arr_0 [i_0] [i_0]));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    {
                        var_14 = (32767 >> (-8556600098714911949 + 8556600098714911975));
                        var_15 *= ((544402948 ? (arr_18 [i_2] [i_2] [i_4 + 3] [i_4] [1]) : (arr_1 [i_3])));
                        var_16 = (((arr_18 [i_0] [i_4 + 3] [10] [1] [i_4 + 1]) >> var_0));
                        arr_19 [i_0] [i_4] [i_3] [i_0] [i_2] [i_0] = (((arr_18 [i_4] [i_0] [i_0] [i_4 + 2] [i_0]) ? var_2 : (arr_18 [i_4 + 2] [i_4 + 2] [15] [i_4 + 2] [15])));
                        arr_20 [20] [20] [i_2] [i_0] [20] [i_4] = (arr_18 [i_4] [i_4] [i_4] [i_4] [i_4]);
                    }
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        var_17 = var_1;
        var_18 = ((~(!7669435338537751574)));
        arr_24 [i_5] = min(9223372036854775807, 5767803080896506815);
    }
    for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
    {
        var_19 = (arr_11 [i_6]);
        var_20 = (max(var_20, (((((!((((arr_9 [i_6] [i_6]) / var_2))))) ? (((9223372036854775807 ? 3288742208 : var_0))) : (max((arr_10 [i_6 - 1]), var_8)))))));
    }
    for (int i_7 = 1; i_7 < 14;i_7 += 1) /* same iter space */
    {
        var_21 = (~var_0);
        /* LoopNest 3 */
        for (int i_8 = 4; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    {
                        var_22 = ((min(var_2, 5345231230834891530)));

                        for (int i_11 = 3; i_11 < 13;i_11 += 1)
                        {
                            var_23 = (arr_36 [10] [i_9] [i_8] [i_7]);
                            var_24 = ((!((max((arr_5 [i_11] [i_11]), (arr_5 [i_10] [i_11]))))));
                        }
                        arr_40 [i_8] [i_8] [i_8] [i_8] = (4289578469 ^ var_8);
                        var_25 = (max(var_25, -8091045213717696388));
                        var_26 = (arr_27 [i_7]);
                    }
                }
            }
        }
        var_27 = var_2;
        var_28 = (+-9);
        arr_41 [i_7 - 1] [3] = ((((((max(-4109597539133680046, var_7))) ? 5388826 : (-5105982436888051179 - -8091045213717696388))) / 9));
    }
    var_29 = ((~(((1756250396 >= -6049344755255538388) / -var_5))));
    #pragma endscop
}
