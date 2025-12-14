/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_17 = (((arr_0 [i_0]) - ((1 ? -731715294384426943 : 731715294384426953))));
            var_18 = 4294967295;
            var_19 = (arr_3 [i_0] [i_1]);
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_20 = (max(((((var_4 & (arr_7 [i_0] [i_1] [i_2] [i_2] [i_3]))) ^ ((max((arr_0 [i_3]), (arr_7 [i_0] [i_1] [i_1] [i_2] [i_3])))))), var_13));
                        arr_8 [i_0] [i_1] [i_2 + 1] [i_3] = ((((min(1, -731715294384426949))) ? (arr_5 [i_1] [i_2 + 2] [i_3] [i_3]) : (min((arr_5 [i_2 - 1] [i_2 - 1] [i_2] [i_2]), 2091787551557733894))));
                        var_21 = ((((-6070190024648954649 ? 7 : 2600559949)) * (-107 - 1)));
                    }
                }
            }
        }
        for (int i_4 = 3; i_4 < 21;i_4 += 1)
        {
            var_22 = (min((((var_14 + (((arr_12 [i_0] [i_4]) ? (arr_7 [i_0] [i_0] [i_4] [i_4] [i_4]) : 181))))), ((144115188042301440 ? -3710999381358470950 : ((-9223372036854775794 ? 1 : 731715294384426953))))));
            var_23 = ((((min(var_2, 126))) / var_11));
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_24 = (max((((((var_16 ? (arr_10 [i_5]) : 152))) ? var_4 : ((((!(arr_12 [i_0] [i_5]))))))), var_11));
            arr_15 [i_0] = (max((max((103 - var_2), (max(4294967295, 817207489)))), (max(1334703100, 166))));
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            arr_19 [i_6] = max((min(((~(arr_6 [i_0] [i_0] [i_0] [i_6] [i_6] [i_6]))), (var_9 - 38))), (((-(arr_5 [i_0] [i_0] [i_6] [i_6])))));
            var_25 = ((((max((((arr_10 [i_0]) & (arr_13 [i_0] [i_6]))), (~var_9)))) & (arr_17 [i_6])));
            arr_20 [i_6] = -var_8;
            var_26 = (max(var_11, (((arr_18 [i_6]) / var_6))));
        }
        arr_21 [i_0] = var_13;
        var_27 = ((((((arr_3 [i_0] [i_0]) ? var_2 : var_15))) ? ((max(((var_7 ? var_9 : -88)), ((3150565084113232838 ? (arr_4 [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (arr_18 [i_0])));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_28 = var_9;
                            var_29 = var_1;
                            var_30 = (arr_5 [i_0] [i_7] [i_8] [i_10]);
                            arr_33 [i_0] [i_7] [i_8] [i_9] [i_10] [i_9] [i_10] = var_8;
                        }
                    }
                }
            }
            var_31 = (((arr_28 [i_0] [i_0] [i_0] [i_7] [i_7]) * (arr_26 [i_0] [i_7] [i_7] [i_7])));
        }
    }
    var_32 = 705848818734874939;
    #pragma endscop
}
