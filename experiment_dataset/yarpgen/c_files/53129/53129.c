/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 = ((var_13 << ((((var_7 ? ((255 ? 12436 : 12436)) : 126)) - 12430))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_2] [i_4] [i_2] [i_2] = ((((var_11 ? 0 : (arr_7 [i_0] [4] [i_0] [i_0])))));
                            var_19 = arr_8 [i_0] [i_0] [i_0] [i_0];
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_2] [i_0] = ((((((max(2662, 2147483647))))) | (min(5821246926719018244, 2147483647))));
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_20 ^= var_16;
                            arr_21 [i_6] = 255;
                            arr_22 [i_7] [i_7] [i_6] = ((-((min((115 <= 3446297473), (max(0, -126)))))));
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    arr_26 [i_1] [i_5] = (arr_19 [10] [i_0] [i_1] [i_0] [i_0]);
                    arr_27 [i_0] [i_0] [i_5] [12] [12] [12] = (((((var_13 ? var_4 : var_12))) ? ((var_0 ? (arr_25 [i_8] [i_1 + 1] [i_1 + 1] [i_1] [2] [2]) : (arr_6 [i_1] [i_1 - 1] [i_1 - 2]))) : ((max(255, 147)))));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    var_21 = (~146);
                    arr_31 [i_0] [i_1 - 2] [i_5] [i_9] = (!0);
                    var_22 = ((18 >= (25 > 18)));
                }
                for (int i_10 = 3; i_10 < 9;i_10 += 1)
                {
                    var_23 = (((((((var_8 ? 2130479996 : 50445))) ? ((max(var_9, var_5))) : (arr_19 [i_10 + 2] [i_10] [i_5] [i_10] [i_1 + 1]))) / ((min(var_14, var_5)))));
                    var_24 = var_0;
                    arr_34 [i_0] [i_10] [i_5] [i_10] = (max((min((arr_4 [i_5]), ((58239 << (146 - 146))))), 25));
                }
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    var_25 = (((var_12 && var_11) ^ (max(-1457893518, -94))));
                    var_26 = ((~((2147483647 % (arr_30 [i_1 - 1] [i_1] [i_5] [8] [i_0])))));
                    var_27 = (arr_20 [i_0] [i_0] [i_0] [i_0] [6]);
                }
                var_28 = (min(var_28, ((min((arr_30 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [1]), (~-1605665485))))));
                var_29 = ((((var_16 ? (arr_9 [i_5] [i_1] [i_0]) : (arr_4 [i_0])))));
            }
            var_30 = (min(var_30, (242 * 2)));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 10;i_13 += 1)
                {
                    {
                        var_31 -= ((((253 << (var_15 - 56437))) * (~3909)));
                        var_32 ^= ((min((arr_0 [i_1 + 1]), (arr_0 [i_1 - 2]))));
                        arr_42 [3] [i_1 - 2] [i_1] [i_13] [i_1] = 8862;
                        var_33 += (min((min((arr_32 [9] [9] [9] [i_0] [11]), (arr_32 [i_0] [i_0] [3] [i_0] [i_0]))), (arr_32 [i_0] [i_0] [i_1 - 1] [i_0] [i_13 - 1])));
                    }
                }
            }
            arr_43 [i_0] = (min((min((arr_38 [i_1 + 1] [i_1 - 1]), (arr_38 [i_1 - 1] [i_1 - 1]))), (((arr_38 [i_1 - 1] [i_1 + 1]) ? (arr_38 [i_1 - 1] [i_1 - 1]) : var_14))));
        }
        var_34 = (((9578377045906784298 && 0) & -87));
        arr_44 [i_0] = arr_16 [i_0] [i_0] [i_0] [i_0];
        var_35 = ((~((var_4 ? ((min(96, 147))) : var_4))));
    }
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 21;i_14 += 1)
    {
        for (int i_15 = 1; i_15 < 17;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                {
                    var_36 *= (((((((57665 ? 245 : 105))) ? (57665 <= 6832) : 241)) <= ((min(-105, (arr_50 [i_15 + 4] [i_14]))))));
                    var_37 -= (min(var_0, ((~(arr_45 [i_15 + 4] [i_16])))));
                }
            }
        }
    }
    #pragma endscop
}
