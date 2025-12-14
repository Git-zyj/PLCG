/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (max(var_4, ((((max(var_4, -30))) >> (((~var_15) - 33))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_17 += var_13;
        arr_2 [i_0] [i_0] = ((-(arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_18 ^= (max((arr_0 [i_1] [i_1]), (((var_9 ? ((var_10 ? -26 : 23680)) : var_4)))));
        arr_6 [i_1] = ((1774236679 ? -5 : -68));
        arr_7 [i_1] = -14062;

        /* vectorizable */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_19 = ((((((var_2 + 2147483647) << (((arr_11 [15] [i_1] [6]) - 812598175772216873))))) + (((arr_11 [i_1] [15] [i_2]) ? (arr_10 [i_2]) : (arr_1 [i_2])))));
            arr_12 [i_2] [i_2] = ((40 ? (arr_1 [i_2]) : ((~(arr_8 [i_2] [i_2] [8])))));

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_20 = -26;
                var_21 = (max(var_21, (((~(arr_11 [i_2 - 1] [i_2 + 1] [i_2 + 1]))))));
            }
            for (int i_4 = 1; i_4 < 15;i_4 += 1) /* same iter space */
            {
                arr_17 [i_2] [i_4] [i_4] [i_1] = -40;
                arr_18 [i_2] [i_2] = ((1 ? (34 * -30961) : (arr_15 [i_4 - 1] [i_2 + 2] [i_1] [i_1])));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_22 = (min(var_22, (~45)));
                            arr_24 [i_1] [i_2] [10] [i_5] [i_6] = ((~(~0)));
                        }
                    }
                }
            }
            for (int i_7 = 1; i_7 < 15;i_7 += 1) /* same iter space */
            {
                var_23 = (max(var_23, (var_10 & 26)));
                arr_28 [i_1] [i_2] [5] [i_7] = ((((((-17 + 2147483647) >> (arr_26 [i_1] [i_2] [i_2] [i_2])))) ? -var_14 : ((var_1 ? 3301488816 : 121))));
            }
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
        {
            arr_32 [i_8] = (max(((-(arr_11 [i_1] [i_1] [5]))), ((((arr_5 [i_1]) ? -8 : (arr_5 [i_1]))))));

            /* vectorizable */
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 15;i_11 += 1)
                    {
                        {
                            arr_41 [i_8] [i_8] [i_11] [8] [i_11 - 1] = (((arr_39 [12] [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_1]) ? (arr_39 [i_11] [i_11 - 1] [i_11 + 1] [i_11 + 1] [i_1]) : var_8));
                            arr_42 [i_1] [i_8] = ((var_0 ? (arr_23 [i_11 + 1] [i_11] [i_11 - 1] [i_8] [i_11]) : ((-14059 ? -25 : (arr_10 [i_8])))));
                            var_24 ^= (((arr_22 [i_11 + 1] [i_11] [i_11 - 1] [i_11 + 1] [i_11 - 1] [i_11] [i_11]) ? var_12 : (arr_19 [14] [i_11] [i_11] [i_11 + 1] [14])));
                        }
                    }
                }
                arr_43 [i_1] [i_8] [i_9] = (arr_15 [i_9] [i_9] [i_8] [2]);
                var_25 = ((((-10792 ? 19 : 64945)) == 0));
            }
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
        {
            arr_46 [12] = arr_15 [i_1] [i_1] [i_1] [i_12];
            var_26 = (var_0 + var_8);
        }
    }
    #pragma endscop
}
