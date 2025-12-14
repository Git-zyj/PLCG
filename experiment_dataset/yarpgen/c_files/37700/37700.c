/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_2;
    var_16 = (var_7 ^ var_2);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0 - 1]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 *= (18143356531667894418 - 46604);

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_13 [i_0] [2] [i_1] [i_0 + 1] = (69 + 3402739550095079854);
                        var_18 = (((arr_0 [i_0 + 1]) >= (arr_0 [i_0 - 1])));
                    }
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        var_19 = (((arr_4 [i_1]) < (303387542041657198 / 1)));
                        var_20 ^= (((arr_3 [i_4 + 1] [i_0 + 1]) ? var_6 : (arr_3 [i_4 + 2] [i_0 - 1])));
                        var_21 = (min(var_21, ((((arr_12 [i_0] [i_4] [i_0]) == -255)))));

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_19 [i_1] [10] [i_2] [i_2] [i_5] = ((-((-(arr_10 [i_0 - 1])))));
                            var_22 = ((255 - (arr_10 [i_4])));
                            var_23 ^= (arr_9 [i_2] [i_2] [i_2] [i_0]);
                            var_24 -= (~-15724);
                        }
                    }
                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        arr_24 [i_1] [i_1] [i_2] [1] = (arr_5 [i_1]);
                        var_25 = 9717284639472622765;
                        arr_25 [i_0] [i_0] [i_2] [i_1] = 15723;
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        arr_28 [i_1] [i_1] [i_2] [i_7] = var_4;
                        var_26 = (max(var_26, ((var_6 != (arr_11 [i_7] [i_2] [i_2] [18] [i_1] [i_0])))));
                        arr_29 [i_0] [i_1] [i_7] = 15724;
                    }
                    arr_30 [i_1] [i_1] [i_1] [i_1] = (arr_9 [i_0] [i_1] [i_1] [i_2]);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 16;i_10 += 1)
                {
                    {
                        arr_40 [i_0] [i_8] [i_8] [i_10] = (arr_23 [i_0 + 1] [i_10 + 2] [i_10 + 2] [i_10 - 2]);
                        var_27 ^= ((9 - (~var_10)));
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        var_28 -= ((((((arr_26 [i_11] [i_11]) ? var_12 : (min(248776174, var_0))))) ? (2774 & var_11) : (((((-(arr_9 [i_11] [i_11] [i_11] [i_11])))) ? ((var_13 ? var_11 : (arr_3 [i_11] [i_11]))) : (arr_18 [i_11] [18] [i_11] [i_11] [i_11])))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 1;i_13 += 1)
            {
                {
                    arr_48 [i_13] [i_13] = 1;
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        for (int i_15 = 4; i_15 < 13;i_15 += 1)
                        {
                            {
                                var_29 += ((((arr_16 [i_13 - 1] [i_11] [i_15 - 4]) ? (arr_16 [i_13 - 1] [i_14] [i_15 - 4]) : (arr_16 [i_13 - 1] [i_12] [i_15 - 3]))));
                                var_30 = (max((((!(((var_10 ? (arr_6 [i_12]) : var_12)))))), (max(var_0, (arr_4 [i_11])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
