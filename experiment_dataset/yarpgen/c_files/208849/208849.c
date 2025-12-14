/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = var_6;
    var_16 = (max(var_3, var_9));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (min((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), (min(6, (arr_0 [i_0] [i_0])))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                arr_9 [i_0] [i_0] [i_2] [i_0] = var_12;

                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_17 = var_9;
                    arr_14 [i_3] [i_0] [i_2] [i_0] [i_0] = -9;
                    var_18 = arr_12 [i_3];
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_19 [i_0] [i_2] [i_1] [i_0] = 1;
                    arr_20 [i_0] [i_2] [i_0] [i_0] [i_0] = (((arr_12 [i_0]) ? var_11 : (arr_12 [i_0])));
                }
                var_19 = var_5;
            }
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                arr_23 [i_5] [i_0] [i_0] = (arr_13 [i_5] [i_5] [i_5 + 1]);
                arr_24 [i_0] = var_8;
            }
            arr_25 [i_0] [i_0] = (arr_17 [i_0]);
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                arr_30 [i_0] [i_6] [i_6] [i_0] = 1;
                arr_31 [i_0] [i_0] = (arr_22 [i_6] [i_0]);
            }
            for (int i_8 = 3; i_8 < 20;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            var_20 = (max(0, 0));
                            var_21 = ((max((max(0, 1)), (arr_18 [i_0] [i_0] [i_8] [i_0]))));
                            arr_40 [i_0] [i_0] [i_0] [i_0] [i_10] = (arr_11 [i_0] [i_0] [i_8] [i_9] [i_8] [i_0]);
                        }
                    }
                }
                var_22 = (((arr_27 [i_6] [i_0]) ? ((((min(3749927162137645426, (-127 - 1)))))) : (min(-8108576458358133802, 0))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 20;i_12 += 1)
                    {
                        {
                            arr_45 [i_12] [i_11] [i_0] [i_0] [i_6] [i_0] = (arr_35 [i_0] [i_6] [i_8] [i_11]);
                            var_23 = (16777184 ? ((min(7, 0))) : ((min(var_11, var_9))));
                            var_24 = (max(((((min((arr_0 [i_0] [i_0]), var_3))) ? var_6 : (arr_2 [i_12 + 1] [i_12 + 1]))), var_0));
                            var_25 = (min(1846172800, (arr_8 [i_0] [i_6] [i_8] [i_11])));
                        }
                    }
                }
            }
            arr_46 [i_0] = (min((arr_1 [i_0]), (arr_1 [i_6])));
            arr_47 [i_0] [i_0] [i_0] = (max(var_6, ((min((-2147483647 - 1), (arr_39 [i_6] [i_6] [i_0] [i_6] [i_0]))))));
            var_26 = (min((min(((max(3888667628, var_13))), (min(3749927162137645431, var_12)))), 0));
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            var_27 = (arr_4 [i_13] [i_13] [i_0]);
            var_28 = var_13;
            var_29 = 406299668;
            var_30 = (arr_48 [i_0] [i_0] [i_0]);
        }
        arr_50 [i_0] [i_0] = (max(((min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), 43))), (min(var_12, (arr_6 [i_0] [i_0] [i_0])))));
        arr_51 [i_0] [i_0] = -1;
    }
    var_31 = (min((max(var_4, ((min(var_3, -2147483636))))), 4227858432));
    #pragma endscop
}
