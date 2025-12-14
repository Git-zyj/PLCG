/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((~var_2), var_4));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] = (((arr_8 [i_0] [i_1] [i_0] [i_0] [i_1] [i_3]) ? (var_2 / 2818475789) : -81));
                        var_13 = (((((116 ? -116 : 1))) ? ((var_8 ? (arr_8 [i_0] [i_0] [i_2] [i_0] [i_0] [i_2]) : var_6)) : 1863572602));

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            arr_12 [i_0] [i_0] = ((0 ? 682202541198629383 : 291528023));
                            arr_13 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] = (arr_7 [i_4] [i_2] [i_2] [i_1] [i_1] [i_0]);
                            arr_14 [i_3] = ((-81 ? ((((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) / 1))) : (((arr_10 [i_0] [i_2] [i_0] [i_3] [i_4] [i_3]) ^ -100))));
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_14 = (min(var_14, -var_6));
                            var_15 = (min(var_15, 2147483644));
                            arr_17 [i_0] [i_0] [i_5] [i_3] = (((arr_8 [i_0] [i_1] [i_2] [i_3] [i_1] [i_5]) >= (~-28255)));
                            arr_18 [i_5] [i_2] [i_5] [i_5] = 63045;
                            var_16 = ((((var_4 >= (arr_2 [i_0] [i_0]))) || (!var_3)));
                        }
                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            var_17 = (~6791);
                            arr_22 [i_6] [i_6] [i_6] [i_6] [i_6] = ((((arr_8 [i_0] [i_1] [i_1] [i_3] [i_6] [i_6]) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_9)));
                        }
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            arr_26 [i_0] [i_0] [i_2] [i_3] [i_7] = ((((var_11 ? 1 : 1))) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_7]) : 61);
                            var_18 = (max(var_18, -var_10));
                            arr_27 [i_0] [i_1] [i_2] [i_2] [i_0] [i_3] [i_7] = (((((242 ? (arr_23 [i_0] [i_0] [i_2] [i_0] [i_7] [i_7]) : 37466))) % (~var_6)));
                        }
                    }
                }
            }
            var_19 = (max(var_19, 100));
        }
        var_20 -= -14959787859885239928;
    }
    #pragma endscop
}
