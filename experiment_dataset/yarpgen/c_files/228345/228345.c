/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((0 ? ((var_3 ? var_7 : var_3)) : (max(((1 ? var_3 : var_0)), (((var_0 ? var_10 : var_2)))))));
    var_17 = ((((((var_8 ? var_4 : 1833632801) < ((1833632801 ? var_11 : var_2)))))));

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_18 ^= 255;
        var_19 = (((((((4294967295 ? var_8 : var_2))) ? (arr_1 [7]) : (max(1, 3690188195))))) ? (max((arr_1 [i_0 + 1]), ((min(var_10, var_3))))) : ((var_2 ? (arr_0 [i_0 + 1]) : (((max(var_10, var_3)))))));
        var_20 ^= ((((max(67076096, 2461334495)) < (((arr_0 [i_0]) ? 250 : (arr_0 [i_0]))))));
        var_21 = arr_0 [i_0];
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            arr_6 [i_2] [i_1] = ((1144511585 < (max((max(604779109, 1)), 1833632801))));
            arr_7 [i_1] [20] [i_1] = var_4;
            arr_8 [i_1] = ((((max((arr_4 [i_1 + 1]), (arr_2 [i_1 - 1])))) ? (((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1]))) : (~var_6)));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_22 = min(((max((arr_11 [i_2 + 4] [i_2 + 4] [i_2] [i_2] [i_2] [i_2 + 4]), (arr_11 [i_2 + 1] [i_2] [i_2] [i_2] [i_2] [i_2 + 1])))), (max(1, 0)));
                            arr_18 [i_1] [i_1] [i_2] [i_3] [i_4] [2] = var_10;
                            arr_19 [i_1] = ((((max((~var_4), (arr_5 [i_1])))) ? 0 : ((189 ? 159893102 : -0))));
                            var_23 = (!((!(arr_3 [i_1]))));
                        }
                    }
                }
                arr_20 [i_1] [i_1] [i_3] = (min((((4294967295 ? (arr_9 [1]) : (arr_12 [i_1] [i_1] [i_1] [7])))), ((var_12 ? var_4 : (((arr_13 [i_1] [i_2] [i_3] [i_3]) ? 1 : var_5))))));
                arr_21 [i_1] [i_1] [i_3] [i_3] = (min((((~0) ? ((~(arr_3 [i_1]))) : (var_8 & 255))), 1372919120));
            }
        }
        arr_22 [i_1] = ((((((((104 ? var_0 : 1))) ? ((((arr_13 [14] [i_1] [i_1] [i_1]) * (arr_12 [i_1] [i_1] [i_1] [i_1])))) : (max(1509159546, (arr_14 [i_1 - 1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))) ? (((arr_14 [i_1 - 1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? var_9 : (arr_14 [i_1 - 1] [1] [i_1] [i_1] [19] [i_1] [20]))) : var_0));
        var_24 = (arr_2 [i_1]);
        var_25 = (max(var_25, (((((min(((((arr_4 [15]) ? 1 : (arr_12 [i_1] [i_1] [i_1] [i_1])))), (max(var_11, (arr_16 [i_1])))))) ? var_13 : 1)))));
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        var_26 = (min(var_26, (arr_23 [18])));
        var_27 = ((((max((arr_26 [i_6] [i_6]), ((max(0, (arr_24 [i_6]))))))) ? (max((max((arr_26 [i_6 - 1] [i_6 - 1]), 0)), (((53 ? 11 : 4))))) : ((((arr_24 [i_6]) ? (arr_24 [i_6]) : (arr_24 [i_6]))))));
    }
    var_28 = var_15;
    var_29 = ((var_4 ? var_3 : ((var_9 ? (62 + var_15) : 0))));
    #pragma endscop
}
