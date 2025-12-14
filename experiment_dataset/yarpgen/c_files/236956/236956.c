/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = (max(var_15, 1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 *= ((1 ? (arr_7 [i_0] [i_0]) : (arr_2 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = ((!((max((((arr_7 [i_0] [i_3 - 1]) * var_3)), (((var_10 ? (arr_4 [i_1]) : (arr_8 [i_0] [0] [0])))))))));
                                var_18 = (min(var_18, ((((((var_9 ? var_4 : var_9))) ? (max(((min(1, (arr_1 [i_1])))), (((arr_13 [i_0] [i_3] [i_3]) | var_12)))) : (arr_14 [i_3 - 1] [i_3 - 1] [i_2] [i_0] [i_0] [i_2] [i_2]))))));
                                arr_15 [i_3] = var_13;
                                arr_16 [i_0] [i_1] = (arr_6 [i_3] [i_3] [i_3]);
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        arr_19 [i_0] [i_2] = var_8;

                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            arr_22 [i_0] [i_6] [i_0] [i_0] [i_0] = 1;
                            arr_23 [i_6] = (15413610582441942646 - 1);
                            arr_24 [i_0] [i_1] [i_6] [i_5 + 1] [i_6 - 2] = var_7;
                        }
                        arr_25 [i_0] [i_1] [i_2] [i_5] = -19331;
                    }
                    arr_26 [i_2] [i_1] [i_0] = ((var_5 ? ((min(var_3, (arr_14 [20] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) : (arr_3 [1] [1])));
                    arr_27 [i_2] [i_1] = (1 + 3784291878);
                }
            }
        }
        var_19 += var_4;
        arr_28 [i_0] = 9223372036854775806;
    }
    var_20 = (!var_7);
    var_21 = ((((!(((var_9 ? var_10 : var_10))))) ? 33404 : var_1));
    #pragma endscop
}
