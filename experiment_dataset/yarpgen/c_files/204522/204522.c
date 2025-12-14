/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((-(~var_4)));
                var_15 = (min(var_15, ((((-11 ? (arr_1 [i_0] [i_0]) : ((1 ? var_8 : var_0))))))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_16 -= var_3;
                    var_17 = (min(var_17, ((min(((((((arr_0 [i_0]) ? var_13 : var_0))) ? (!var_6) : 2685889616)), (!-29432))))));
                    arr_9 [13] [17] = ((!(((((min((arr_5 [20] [2] [i_0]), 1))) ? (arr_5 [i_1 + 2] [i_1] [i_1 + 1]) : -16)))));
                    var_18 = (max(var_18, ((((arr_8 [24] [i_1 + 1] [1]) ? var_3 : (min((arr_5 [i_2] [i_1 + 2] [10]), (arr_2 [i_1 + 2] [i_1 + 3] [i_1 + 2]))))))));
                    arr_10 [5] [5] [5] [16] = ((((min(3089652502460887886, (((var_10 ? 3097717846 : (-127 - 1))))))) ? (((arr_3 [7] [i_2]) ^ ((var_0 ? (arr_8 [19] [1] [i_2]) : 3089652502460887886)))) : (((1 >> (((~var_1) + 15)))))));
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    var_19 = (min(var_19, -var_12));
                    arr_13 [8] [1] [9] [8] = (arr_11 [23] [23] [23]);
                    var_20 = (((arr_6 [i_1 + 2]) ? (arr_6 [i_1 + 4]) : (arr_6 [i_1 - 1])));
                }
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {

                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        var_21 *= (max((((~(arr_7 [i_1])))), (min((((var_2 << (-3089652502460887886 + 3089652502460887888)))), 6556846747248005875))));
                        var_22 -= (arr_11 [4] [4] [i_0]);
                        arr_19 [i_0] [i_0] [2] [i_4] [2] [i_0] = (min((arr_1 [i_5] [i_1 + 3]), (max((arr_3 [i_5 - 1] [i_1 + 2]), (arr_2 [2] [0] [i_5])))));
                        var_23 = 28178;
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_24 += ((63987 ? ((((var_7 || (!28178))))) : (~2355037230)));
                        var_25 = (max(var_25, 652479826));
                    }
                    var_26 = (max(((((arr_18 [i_1 + 3] [i_1 + 3] [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1 + 3]) ? (arr_3 [i_1 + 3] [i_1 + 2]) : (arr_3 [i_1 + 1] [i_1 + 1])))), (((arr_8 [i_1 + 2] [i_1 - 1] [i_1 + 4]) / 1939930066))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                arr_28 [i_7] [1] [i_4] [i_7 + 1] [18] = (min((~var_12), (arr_15 [i_7 - 2] [9] [i_1 + 4])));
                                arr_29 [i_0] [i_0] [i_1 - 1] [i_8] [0] [i_1 - 1] |= ((!((((((-3089652502460887886 ? var_9 : (arr_6 [i_0])))) ? var_2 : (var_9 - var_10))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
