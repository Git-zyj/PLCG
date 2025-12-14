/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {
            var_18 = (-((var_1 ? (arr_3 [i_0]) : var_15)));
            arr_4 [i_0] = ((var_5 ? var_9 : 1));

            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                arr_7 [17] [i_0] [9] [i_2] = ((arr_6 [i_2 + 1] [i_2 + 2] [i_2]) * (arr_0 [i_0] [i_1]));
                var_19 = (arr_6 [i_0] [i_1] [i_0]);
            }
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
        {
            var_20 = ((101 ? ((1160319247199549729 ? (arr_10 [i_0]) : (arr_5 [i_0] [6] [i_3]))) : var_1));

            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                arr_13 [i_3] = ((~((var_1 ? var_10 : var_14))));
                var_21 = (~-4342118533680142661);
            }
            var_22 = ((-2252272802205101551 | (~var_2)));
        }
        for (int i_5 = 3; i_5 < 20;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                arr_22 [i_0] [i_6] = (((arr_18 [i_0] [i_0] [i_6] [i_5 - 1]) != ((-1160319247199549735 ? var_3 : var_3))));
                var_23 = (max(var_23, (arr_21 [i_5 - 1] [i_6] [i_6])));
                arr_23 [i_6] [i_5] [i_5] = (arr_10 [i_5 - 1]);
            }
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                arr_26 [i_0] [i_5] [i_7] [6] |= ((-(arr_19 [i_5])));
                var_24 = (arr_0 [i_0] [i_0]);
            }
            arr_27 [i_0] [i_0] [i_0] = arr_14 [i_5] [i_5] [i_5 - 1];
        }
        arr_28 [i_0] [i_0] = var_13;
    }
    var_25 = (((~var_6) ? (((~var_8) ? ((21 ? 42 : 15387106556789055297)) : (((43 >> (var_15 - 585730974)))))) : ((max((var_7 >> var_13), (~var_17))))));
    #pragma endscop
}
