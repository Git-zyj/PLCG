/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    var_16 = ((((-((max(var_4, var_9))))) * (max((25 < var_9), (~-86)))));
    var_17 = var_13;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] &= ((!(((~(arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] = var_7;

        for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_1] [7] = 1;
            arr_8 [i_0] [i_1] [i_1] = (((~2928083744) ? -120 : ((((((min(var_6, var_8))) + 2147483647)) << (((arr_1 [i_0] [i_1]) - 10287))))));
            arr_9 [i_0] = (min(-690055029, 172));
            arr_10 [i_0] [i_0] [i_0] = ((((var_12 < ((min(var_7, var_6))))) ? (((((4294967291 ? 764346996518608423 : 31))) ? ((1 ? var_0 : 9)) : (!var_3))) : (arr_0 [i_0] [i_0])));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            arr_14 [i_0] [i_2] = (max(27898, 5));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_19 [i_0] [1] [1] [i_4] = var_2;
                        arr_20 [i_0] [i_2] [i_2] = (!1);
                        arr_21 [i_0] [i_0] [i_3] [i_4] = (max((((var_5 != (((arr_6 [1] [i_2] [i_2]) ? (arr_6 [i_0] [i_2] [i_2]) : (arr_6 [i_0] [i_2] [i_3])))))), (max(((var_11 ? -9223372036854775804 : var_10)), 87))));
                        arr_22 [i_0] [i_2] [i_3] [i_4 - 2] [i_0] [i_0] = (((((arr_17 [i_3] [i_2] [i_3] [i_4 - 2] [i_3]) ? (arr_17 [i_0] [3] [i_3] [i_4 - 2] [i_4]) : (arr_17 [i_0] [i_2] [i_0] [i_4 - 2] [1]))) >> (((~1) + 20))));
                    }
                }
            }
            arr_23 [i_0] [16] = (((((1 ? 1088298720 : -14))) ? (((var_4 + 616809734) % (var_10 | var_2))) : (((var_9 ? var_9 : (arr_11 [i_0] [i_2]))))));
        }
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_26 [i_5] [i_5] = (arr_25 [i_5]);
        arr_27 [i_5] [i_5] = (-(((!1610612736) ? (min(var_3, 4294967284)) : (((max(2, 77)))))));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        arr_30 [i_6] = 54304;
        arr_31 [i_6] [i_6] = (((((var_2 ? (~4717) : ((var_14 ^ (arr_28 [i_6])))))) ? (((~(arr_24 [i_6])))) : (((((902941537982084740 ? (arr_25 [i_6]) : -80))) ? (((arr_28 [i_6]) ? -16 : 650789641937836753)) : (arr_28 [i_6])))));
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    arr_37 [21] [21] = (((var_8 ? var_0 : (arr_36 [i_7 + 2]))));
                    arr_38 [16] [i_7 + 1] [i_8] = ((~((min(var_14, var_6)))));
                    arr_39 [i_6] [i_7 + 1] [i_8] = (-20192088620746192 ^ 8285962697767896252);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                {
                    arr_46 [i_6] [i_9] = ((((arr_35 [i_6]) ^ (~36079))));
                    arr_47 [1] [i_9] [i_10] &= ((2147483647 | ((~((var_7 ? var_10 : 65531))))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            {
                                arr_52 [i_6] [i_9] [i_9] = ((24 > (-1 != 27231)));
                                arr_53 [i_6] [i_9] [i_6] [i_11] [i_9] [i_12] = ((((((arr_45 [i_10] [i_10] [i_12]) ? (arr_45 [i_6] [i_9] [i_6]) : 13))) <= (32535 ^ var_11)));
                                arr_54 [i_6] [i_9] [i_10] [i_9] [i_6] [i_9] = (arr_29 [i_6] [i_9]);
                                arr_55 [i_6] [i_9] [i_10] [i_11] [i_11] = var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
