/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = 48692;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_16 = var_9;
                            var_17 = (max(((max((arr_10 [i_2 + 1] [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_10 [i_2 + 1] [i_2] [i_2] [i_2] [9] [i_2 - 1])))), (arr_7 [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_2 + 1] [i_2 + 1])));
                        }
                    }
                }
                var_18 = ((!(arr_5 [i_0] [i_2 + 1] [i_0])));
            }
            var_19 = (min(var_19, (((~((((arr_4 [i_0] [i_1]) || (arr_4 [i_0] [i_0])))))))));
            var_20 ^= ((((min((~var_11), 1))) ? (arr_9 [i_0] [14]) : (max(16810224086797712587, (arr_8 [i_0] [i_0] [i_1])))));
            arr_12 [i_0] [10] [i_0] = (min((((((~(arr_11 [i_0] [i_1])))) ? (1 / 1) : -41)), (~var_14)));
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_21 = -26558;
            var_22 = 15926327248152120568;
            var_23 = ((1 ? ((((max((arr_11 [i_0] [i_5]), 62145))) ? (min((arr_3 [i_0]), 0)) : (((max(3385, var_10)))))) : (arr_5 [i_0] [i_5] [i_0])));
            var_24 = (min(1636519986911839038, 0));
        }
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 18;i_9 += 1)
                {
                    {
                        var_25 = (arr_19 [i_9 + 2]);
                        var_26 = ((~(min(((min((arr_26 [i_6] [i_6] [1] [i_6]), var_14))), (min(var_13, (arr_17 [i_6])))))));
                        arr_30 [i_6] [i_6] [i_6] [i_6] [i_6] = ((+(((arr_19 [i_9 - 1]) - (arr_19 [i_9 + 2])))));
                    }
                }
            }
            var_27 = ((!((((!(arr_24 [i_6] [i_6] [i_7] [i_7]))) && (arr_22 [i_6] [i_7])))));
        }
        var_28 = arr_19 [i_6];
    }
    var_29 = var_4;
    var_30 = (max(var_30, ((min(-13914, -81)))));
    var_31 = (max((((max(var_3, 255)))), (min((-9223372036854775807 - 1), var_0))));

    for (int i_10 = 4; i_10 < 11;i_10 += 1)
    {
        var_32 = ((min(1636519986911839023, (arr_6 [i_10 + 1]))));
        var_33 = (min(((((14323728226689224925 ? 16810224086797712589 : 16320)) << ((((arr_4 [i_10] [i_10]) >= var_14))))), 1));
        var_34 = (min(123, ((~(arr_3 [4])))));
        var_35 = (max(((((max((arr_19 [i_10]), 1367129747367886528))) ? ((var_6 ? var_2 : (-9223372036854775807 - 1))) : (((max(44618, 1)))))), (((~(arr_14 [i_10]))))));
    }
    #pragma endscop
}
