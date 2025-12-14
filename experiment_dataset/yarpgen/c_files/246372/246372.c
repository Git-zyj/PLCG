/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    var_15 = ((((((min(var_5, var_7))) ? (var_5 / var_2) : ((var_11 ? var_4 : var_9))))) ? (((14223 ? ((min(var_2, var_13))) : 12335))) : ((((var_4 ? var_0 : 10695090175679185781)) / (((min(var_8, 1)))))));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                var_16 |= ((((max(var_13, var_9)))));

                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3 - 2] &= ((var_13 == ((var_11 ? (arr_0 [i_0]) : var_2))));
                    var_17 = ((!(!3175075760068741705)));
                }
                var_18 = 1;
            }
            var_19 = (max(var_19, var_13));
            arr_10 [12] [7] = var_4;
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            arr_13 [i_0] = min((-32767 - 1), (!var_4));
            var_20 = (min(var_20, (((3175075760068741702 ? var_0 : (((var_8 ? var_6 : (arr_2 [i_4] [i_4 - 1] [i_0 - 3])))))))));
            arr_14 [i_4 - 1] [6] = ((var_4 ? (min(var_4, (-32767 - 1))) : (((min((arr_6 [12] [12] [i_4] [i_4]), var_2))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_21 = ((!(arr_1 [i_5])));
            arr_19 [i_0] = (((((var_12 ? (arr_18 [i_0 - 3]) : var_7))) ? ((var_11 ? var_7 : var_0)) : ((var_11 ? var_13 : var_0))));
            arr_20 [i_0] [i_0 - 2] [i_0 - 3] = (((var_10 ? var_13 : var_8)));
            var_22 = 15271668313640809911;
        }
        var_23 &= (max(((0 ? var_8 : (-30 != 1))), var_5));
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        arr_25 [i_6] = 6404963874256526812;
        var_24 -= (max((((arr_22 [i_6] [i_6]) ? var_11 : var_12)), (~var_8)));
    }
    for (int i_7 = 2; i_7 < 12;i_7 += 1)
    {
        arr_28 [i_7] = (max((max((var_2 - var_10), var_9)), 1));
        arr_29 [i_7 + 1] = (arr_1 [i_7 + 1]);
    }
    #pragma endscop
}
