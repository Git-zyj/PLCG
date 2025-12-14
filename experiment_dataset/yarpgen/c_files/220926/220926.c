/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_13 = var_4;
                                var_14 = (min(var_14, (arr_3 [i_0])));
                            }
                        }
                    }
                    var_15 -= (((((((arr_1 [i_1]) ? -1068265237 : (arr_3 [i_2 + 1])))) ? (((var_2 ? 27112 : 25260))) : var_4)));
                    var_16 = (~var_9);
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            {
                                var_17 = (((arr_18 [i_0] [i_1 - 2] [i_5] [i_6] [i_7 + 1]) / 22277));
                                arr_23 [i_0] [14] [i_5] = 125;
                                var_18 = (min(((((min(0, 10775886048919648774)) > (((((arr_4 [i_7]) < 43259))))))), -4102285202));
                            }
                        }
                    }
                    var_19 = var_4;
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_20 = (((((((max(17051055818933926676, -6410460971032724760))) ? (((arr_17 [i_8]) ? var_2 : var_0)) : (1068265241 != var_10)))) ? (min(var_4, (((arr_21 [i_8] [i_1]) ? var_0 : 86)))) : (arr_9 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1])));
                    arr_28 [i_0] [i_1] [i_0] = 1446231093;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_21 ^= (((((var_9 ? var_9 : (arr_8 [i_0] [1] [i_1 - 1] [i_9] [i_10])))) ? -26164 : ((~(min(22277, var_11))))));
                                var_22 += (!9);
                            }
                        }
                    }
                }
                var_23 = ((29723 ? ((((!(arr_7 [i_0] [i_0] [i_0] [i_1 + 1]))))) : ((~(arr_2 [i_0] [i_1])))));
            }
        }
    }

    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        var_24 ^= max(((max((arr_30 [11] [i_11] [i_11]), 49))), ((~((10249 ? 18446744073709551593 : 97)))));

        for (int i_12 = 1; i_12 < 8;i_12 += 1)
        {
            /* LoopNest 3 */
            for (int i_13 = 3; i_13 < 9;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        {
                            arr_44 [i_14] [i_14] [i_14] [i_14] [i_14] = (arr_22 [i_11] [i_11] [7] [i_12 + 1] [i_13 - 1] [i_15]);
                            var_25 = ((!((((arr_16 [i_12 + 1] [i_12] [i_12] [i_12 + 1] [i_12 + 1] [i_12 - 1]) ^ (arr_16 [i_12 + 1] [i_12] [i_12 + 2] [i_12 + 1] [i_12 + 1] [i_12]))))));
                        }
                    }
                }
            }
            arr_45 [i_12] = ((((((var_8 ? (arr_31 [i_12] [i_12] [i_11] [i_12] [i_12]) : var_5)) != (arr_35 [i_12] [i_12 + 2]))) && (arr_11 [i_11] [i_11] [i_11] [i_12] [i_12 + 1] [i_12 - 1])));
        }
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            var_26 = (min((((min((arr_4 [i_16]), 32768)))), -98));
            var_27 = (((((((var_1 ? 226 : 1)) >> ((((var_9 << (1 - 1))) - 1913268178))))) ? ((var_0 ? (arr_14 [i_11] [i_16]) : (arr_0 [i_11] [i_16]))) : ((min((~var_10), (arr_9 [i_11] [i_11] [i_11] [i_11] [i_11] [i_16]))))));
        }
        for (int i_17 = 0; i_17 < 10;i_17 += 1)
        {
            arr_51 [i_11] [i_17] = -1446231093;
            arr_52 [i_11] [i_17] = ((((((max(var_5, 1)) / -13396))) ? (((((min(var_8, 1))) | -1813181166))) : (max((max((arr_6 [i_11] [i_11] [i_11] [i_11]), (arr_20 [i_17] [i_17] [i_17] [4] [i_17] [1]))), (arr_35 [i_11] [i_11])))));
        }
    }
    #pragma endscop
}
