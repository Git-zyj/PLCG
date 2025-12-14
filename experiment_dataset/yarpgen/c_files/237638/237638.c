/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 2251799813685247;
    var_20 = (max(var_20, var_18));
    var_21 = 4466062504951763114;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_22 = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_3] = (arr_1 [i_0]);
                        var_23 = (arr_5 [i_3]);
                    }
                }
            }
            arr_13 [i_0] [i_0] [i_0] = ((((max((arr_4 [i_1]), 17472343097398208481))) ? (arr_5 [i_0]) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])));
        }
        arr_14 [i_0] = (min((min(((min((arr_3 [i_0]), (arr_8 [i_0] [i_0])))), (1 % var_14))), ((-(arr_8 [i_0 - 1] [i_0 - 1])))));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_24 ^= (arr_3 [i_4]);
        var_25 = ((var_15 <= (arr_6 [i_4] [i_4] [i_4])));
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_26 = ((((-(arr_25 [i_7])))) <= var_17);
                        arr_28 [i_8] [i_7] [i_5] [i_8] = (((min((arr_17 [i_5] [i_5]), ((((arr_2 [i_6]) <= (arr_3 [i_5]))))))) ? 1 : (((-7649541224896390219 ? 1 : var_16))));
                        arr_29 [i_8] = (((((1388272097 + (arr_24 [i_6 + 1] [i_6] [i_6 - 3] [i_6 + 1])))) ? var_13 : (arr_4 [i_8])));

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_27 = (min(var_27, ((((var_8 == var_14) ? (((min(var_2, (!var_18))))) : (((arr_31 [i_5] [i_6 + 1] [i_7] [i_7] [i_8] [i_8] [i_5]) ? (arr_24 [i_8] [i_8] [i_8] [i_8]) : -var_7)))))));
                            arr_34 [i_8] [i_8] = (((((((arr_7 [i_6] [i_6] [i_6]) | (arr_21 [i_9] [i_9] [i_8]))))) ? ((max(((28672 ? 17141 : 21824)), (48101 >= 9753)))) : (arr_24 [i_5] [i_6] [i_7] [i_8])));
                        }
                    }
                    var_28 = var_11;
                    var_29 ^= var_14;
                    var_30 = (max(var_30, (arr_20 [i_5])));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_31 = var_16;
                                arr_42 [i_10] [i_10] [i_10] [i_10] [i_10] = (arr_19 [i_5] [i_6] [i_6]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
