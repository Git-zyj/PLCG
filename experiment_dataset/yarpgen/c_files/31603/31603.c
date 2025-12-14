/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((var_3 ? var_13 : var_9)))) ? var_5 : (min(((-18919 ? 243 : 63043)), (var_1 != var_3)))));
    var_15 *= (min(var_11, var_2));
    var_16 = ((var_13 ? var_3 : ((min(1, 1)))));
    var_17 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    {
                        var_18 &= var_5;
                        var_19 = (min(((max(-21414, 2))), (arr_7 [i_2] [i_1] [i_3 + 1] [i_3 - 1])));
                        var_20 = ((((arr_7 [10] [i_1] [10] [i_3 + 2]) ? var_6 : var_2)));
                        var_21 = var_8;
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_13 [i_4] = (arr_12 [i_0] [i_4]);
            arr_14 [i_0] = var_7;
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_22 = min((((var_5 ? (arr_21 [i_8 + 1] [i_8 + 1] [i_8 + 1]) : (arr_21 [i_8 - 1] [i_5] [i_5])))), (min(var_6, (arr_24 [5] [i_8] [i_8 - 1] [i_8 - 2] [i_8] [i_8 - 1] [i_8 - 1]))));
                            var_23 = (min(var_23, ((((((((var_6 ? var_5 : (arr_9 [i_0] [i_0] [i_6])))) ? (arr_3 [i_0] [i_0] [i_5]) : var_9)) > ((((var_2 && (arr_7 [i_0] [i_6] [i_8 + 2] [i_7]))))))))));
                            arr_25 [i_8] [0] [i_6] [i_7] [i_7] = -29142;
                            var_24 = ((((((arr_23 [i_0] [i_0] [i_6] [i_7] [i_8 - 2]) ^ (arr_23 [i_6] [i_8 + 2] [i_8] [i_8 + 2] [i_8 + 1])))) || (((~(arr_15 [i_0] [1] [i_0]))))));
                        }
                    }
                }
            }
            var_25 *= (((min(((min(8649, (arr_10 [i_0])))), var_4)) >= ((((arr_6 [i_0] [i_5]) > (arr_6 [i_0] [i_0]))))));
        }
        var_26 &= var_8;
        var_27 = (((arr_24 [i_0] [6] [i_0] [i_0] [i_0] [i_0] [i_0]) ? ((((arr_9 [i_0] [1] [1]) == ((var_7 ? var_1 : (arr_18 [i_0] [i_0] [i_0] [i_0])))))) : (((arr_15 [i_0] [i_0] [i_0]) / (arr_10 [i_0])))));

        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            var_28 = var_8;
            var_29 = (((max(var_1, (var_4 | var_0))) * (((var_3 ? (arr_4 [i_9]) : var_6)))));
            arr_29 [i_9] [i_9] [i_0] = var_5;
        }
    }
    #pragma endscop
}
