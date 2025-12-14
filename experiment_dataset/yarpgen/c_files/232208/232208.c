/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_18 > 0);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = arr_0 [i_0 + 1];
                arr_6 [i_0] [i_0] [17] = var_5;
                arr_7 [i_1] = ((~(arr_3 [i_0] [i_1 - 2] [i_1])));
                arr_8 [i_1] &= 102;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                var_22 = -9377;

                for (int i_4 = 3; i_4 < 21;i_4 += 1) /* same iter space */
                {
                    var_23 = (max(var_23, (arr_15 [i_2] [21] [i_4])));
                    arr_16 [i_4] [i_2] [i_2] [i_2] = (arr_13 [i_4] [i_4] [i_4 - 3]);
                }
                for (int i_5 = 3; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    arr_21 [i_5] [i_3] [i_2] = var_12;

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_26 [i_2] [i_6] = (((arr_18 [i_5 + 2] [i_5 - 2]) ? 978908762827579039 : ((((arr_18 [i_6] [i_5 + 2]) ? (arr_14 [i_5 + 2] [i_5 - 2] [i_5 - 2] [i_5 - 2]) : (arr_18 [i_6] [i_5 + 2]))))));
                        var_24 = (max(var_24, -var_16));
                    }
                    var_25 = ((((((((3931047371 ? (arr_17 [i_2] [i_2] [i_5]) : (arr_15 [i_2] [i_2] [i_2])))) ? (((arr_9 [i_3]) ? (arr_17 [i_5] [10] [i_2]) : -90)) : ((363919925 ? var_6 : (arr_22 [i_5] [i_5] [i_5] [i_5] [22])))))) ? (~28) : ((((var_19 ? 59 : var_4)) & 3931047371))));
                }
                /* vectorizable */
                for (int i_7 = 3; i_7 < 21;i_7 += 1) /* same iter space */
                {
                    var_26 = (((arr_29 [i_2] [i_2] [i_7]) || (arr_29 [i_3] [i_3] [i_7 + 1])));
                    var_27 = (min(var_27, (((((arr_12 [i_2] [i_3]) != var_5))))));
                }
                var_28 = ((-(((var_1 > 9246558812177222703) ? (arr_19 [i_2] [i_3]) : (((max(1, var_16))))))));
            }
        }
    }
    #pragma endscop
}
