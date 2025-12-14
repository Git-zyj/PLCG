/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((((!((min(var_4, var_2)))))), ((~(var_0 & var_9)))));
    var_14 = ((((min((var_11 / var_0), (var_6 >= var_1)))) <= (min(-16116, 4294967295))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (max(((max((var_5 * var_10), var_3))), ((((max(var_8, var_10))) + (min(var_6, var_2))))));

                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    arr_8 [i_0 + 3] [i_1] [i_2] = (min(var_8, (min(var_6, (min(var_11, var_1))))));
                    var_16 |= min(((max((max(var_7, var_8)), ((var_5 ? var_0 : var_7))))), (max((max(var_9, 163)), 63890)));
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    arr_12 [i_3] [i_1] [i_3] [i_3] = ((-9641 && 63890) && ((!(!var_7))));
                    arr_13 [i_0] [i_1] [i_3] [i_3] = (~(max(((max(var_5, var_4))), (max(var_7, var_12)))));
                    var_17 = var_7;
                }
                arr_14 [i_0] [i_0] [i_1] = ((!(((var_8 < var_8) != var_2))));
                arr_15 [i_0] [i_0] [i_0] = (max(((((~var_0) & (min(var_8, var_10))))), (((min(var_2, var_12)) - ((min(var_10, var_11)))))));
                var_18 = (((((var_6 * var_1) ? var_2 : (var_12 + var_10))) + (max(((var_1 ? var_2 : var_5)), (!var_5)))));
            }
        }
    }
    var_19 = ((min((min(var_10, var_3), -var_5))));

    /* vectorizable */
    for (int i_4 = 2; i_4 < 19;i_4 += 1) /* same iter space */
    {
        arr_19 [i_4 - 2] = ((((var_4 ? var_2 : var_8)) < var_10));
        arr_20 [i_4] = (((var_2 / var_11) / (((var_5 ? var_6 : var_10)))));
        arr_21 [i_4] = ((((var_12 ? var_5 : var_10)) / (var_11 < var_3)));
    }
    for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
    {
        var_20 = ((!((((min(var_0, var_7))) && (!var_6)))));
        arr_24 [i_5] = ((min(-16116, 1216845772)));
    }
    for (int i_6 = 2; i_6 < 9;i_6 += 1)
    {
        var_21 += (((((((min(var_11, var_1))) ? (max(var_12, var_12)) : (~var_10)))) & (max((min(var_2, var_9)), (~var_3)))));
        arr_27 [7] = (max(16116, -16116));
        arr_28 [i_6] [i_6] = ((((min((~var_6), (min(var_7, var_0))))) && ((((1 & 18826) ? (var_1 || var_11) : (min(var_3, var_11)))))));
        arr_29 [i_6] = (((max(var_11, (var_2 + var_6))) < ((min((min(var_11, var_0)), (max(var_11, var_0)))))));
        var_22 = (min((min((min(var_10, var_9)), (min(var_8, var_2)))), ((min(var_7, var_9)))));
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_23 = ((!(!var_4)));

        for (int i_8 = 1; i_8 < 23;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    {
                        var_24 ^= (max((((~(max(var_11, var_3))))), (min((var_3 & var_5), (min(var_5, var_9))))));
                        var_25 = ((max((max(var_10, var_4), (max(var_4, var_10))))));
                        arr_40 [i_9] [1] [i_8 + 1] [i_8] [1] [i_9] = (-((((max(var_0, var_0)) == (var_1 <= var_12)))));
                        arr_41 [i_9] [5] [i_8 - 1] [i_9] = (max((((((max(var_11, var_8))) ? (max(var_5, var_0)) : (var_2 >= var_4)))), (max(var_2, ((((var_12 + 9223372036854775807) << (((var_12 + 942961784201173122) - 30)))))))));
                    }
                }
            }
            var_26 = (max(((((max(var_10, var_8)) & (~var_3)))), ((((var_2 << (var_2 - 11861121955912793434))) ^ var_10))));
            var_27 -= ((((var_7 && (((var_9 ? var_1 : var_7))))) && (max((!var_10), (!var_5)))));
            arr_42 [i_7] [i_8 - 1] [i_7] = var_0;
        }
    }
    #pragma endscop
}
