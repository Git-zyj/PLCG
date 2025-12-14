/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (((var_12 / (((var_5 ? 8221 : var_1))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = (((max(-8222, 0))));
        arr_4 [i_0] [i_0] = (min(var_14, (arr_0 [i_0])));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_21 = (max(137958770294975152, -21086));
        var_22 = ((((((-17179869184 ? var_10 : var_1)))) <= (97 || var_17)));
        arr_7 [i_1 + 1] [3] = ((!((((arr_2 [i_1 - 1] [i_1 + 1]) / ((var_16 ? var_16 : var_13)))))));
        var_23 = (min(var_7, (arr_6 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_24 &= (-15472 != -17179869178);
        arr_12 [8] = ((-(arr_9 [i_2])));
        var_25 = (max(var_25, (arr_3 [i_2])));

        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            var_26 -= 0;
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        var_27 = var_16;
                        var_28 = (32 & var_6);
                        var_29 ^= ((var_17 ? ((-8221 ? var_15 : var_7)) : (arr_19 [i_2] [i_4 - 2] [i_3] [i_3] [i_2])));
                    }
                }
            }
        }
        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            arr_23 [i_6] [i_6] = (var_6 ^ var_11);
            var_30 = (((var_14 + 2147483647) >> (var_2 + 4530125302804577815)));
        }
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_31 = (var_11 / var_16);

        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            var_32 += (((((var_14 ? var_7 : (((arr_27 [i_7]) / var_9))))) ^ var_7));
            var_33 = ((!((((((1125350151028736 ? -19032 : 0))) ? ((var_5 ? var_5 : var_4)) : var_5)))));
            arr_29 [i_7] = 8971;
        }
        arr_30 [i_7] [i_7] = var_15;
    }
    /* LoopNest 3 */
    for (int i_9 = 1; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 15;i_11 += 1)
            {
                {
                    arr_42 [i_10] [i_9] [i_9] [i_9] = 9160;
                    var_34 = ((~(!159)));
                    var_35 *= (min((((((var_4 ? 83 : (arr_10 [i_11 + 1])))) ? ((max(var_8, var_9))) : var_11)), (arr_24 [i_11])));
                    var_36 = (min(var_36, (((((((((var_2 ? var_12 : 1610612736))) ? var_15 : (((arr_13 [i_9] [i_10]) ? var_18 : 18445618723558522879))))) ? (((var_10 ? var_16 : var_8))) : ((var_5 ? var_10 : (((arr_26 [i_9]) & var_2)))))))));
                    var_37 = (max(var_37, (((-(arr_3 [i_9 + 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
