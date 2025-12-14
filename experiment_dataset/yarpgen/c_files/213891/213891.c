/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (((((max(var_1, var_14)))) ? 1480780275 : -var_9));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = ((((~(arr_4 [i_1] [i_0] [i_0]))) >> (((~20) + 23))));

            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                arr_8 [i_0] [i_0] [i_1] [i_2] = ((-144956670 ? 828839746 : (arr_4 [i_0 - 2] [i_0 - 3] [i_0 - 3])));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            var_17 = (((((var_2 ? var_15 : 1480780265))) / var_5));
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] = (arr_15 [i_3 + 2] [i_1 + 1]);
                            var_18 = ((-(((!(arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 + 1]))))));
                            arr_18 [9] = ((-0 ? ((var_13 ? 479505923 : 2814187030)) : ((((var_9 > (arr_3 [i_0])))))));
                        }
                    }
                }
                arr_19 [i_0] [24] [3] [i_2] = var_14;
            }
            arr_20 [i_1] [i_1] [1] = (((!111) | var_13));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            arr_23 [i_5] = (var_2 << 2814187002);
            arr_24 [i_0] [1] = ((-3970710718 ? 86 : 828839746));
            var_19 = (((var_5 && var_12) ^ ((var_2 ? (arr_0 [1]) : var_0))));
        }
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 23;i_8 += 1)
                {
                    {
                        arr_35 [20] [i_6] [i_8] = ((-var_10 ? (arr_14 [i_0] [i_0] [i_0 - 1] [i_6 - 1] [i_8 + 2]) : 97));
                        arr_36 [i_0] [i_8] [i_7] [i_7] = ((-479505931 ? 0 : 111));
                        arr_37 [i_8] [i_8] [i_8] [i_8] [i_6] = ((-(((arr_9 [i_0] [i_6 - 1] [i_7 + 2] [i_8 - 1]) ? (arr_22 [i_0] [i_6]) : (arr_7 [i_0] [23] [i_7] [i_8])))));
                    }
                }
            }
            var_20 = (max(var_20, (-12008941834400152 || 144956669)));
            var_21 = (min(var_21, ((((((arr_1 [i_0] [i_6 - 1]) - var_10)) > ((-(arr_32 [i_0] [i_0] [i_6] [1]))))))));
            var_22 ^= var_12;
            var_23 = (((((-(arr_15 [i_6] [i_6])))) || (arr_4 [7] [7] [i_6])));
        }
        var_24 = (min(var_24, ((-(arr_33 [i_0])))));
    }
    #pragma endscop
}
