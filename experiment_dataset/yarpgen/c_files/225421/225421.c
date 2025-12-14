/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((var_7 ? var_2 : var_16)) <= (max(29102, 1722657715907198430))))) <= var_7));
    var_19 = ((var_16 ? var_13 : var_0));
    var_20 |= var_5;
    var_21 = 125;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            arr_11 [i_2] [i_3] [i_2] [i_1] [i_1] [i_2] = (((((((arr_2 [i_4]) <= (arr_0 [i_0]))) ? (max(var_1, var_1)) : (1620092251 <= var_3))) <= ((max((((arr_5 [i_1] [i_0]) <= 97)), (var_6 <= 97))))));
                            var_22 = (max((var_13 <= 43), ((min(var_5, (arr_10 [i_0] [i_2] [i_0] [16] [i_0]))))));
                            arr_12 [i_2] [i_1] = (max((arr_1 [i_0 + 2]), (((arr_2 [i_2 + 2]) ? (arr_4 [i_0 - 1] [i_2 + 2] [i_2]) : (!1)))));
                        }
                    }
                }
            }
            arr_13 [i_0] [i_0 + 2] [i_0 - 2] = (min(32760, (((arr_0 [i_0 + 1]) ? 255 : (arr_0 [i_0 + 1])))));
            var_23 = (((max(((((arr_4 [i_0] [i_0] [i_0]) <= var_14))), ((var_12 ? (arr_3 [i_0]) : var_7)))) <= 816721397));
        }
        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            var_24 = ((!((((((65535 ? -672010459 : 15861))) ? 672010459 : 4038639049875702820)))));
            arr_17 [i_5] [i_5] [i_0 - 1] = ((((min((arr_9 [i_5 + 1] [i_5 - 1] [i_5] [i_5] [i_5] [i_5] [i_0 + 2]), var_15))) <= ((max(var_13, (arr_9 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1] [i_0] [i_0 - 1]))))));
            arr_18 [i_0] [i_0] [i_0] = ((((((arr_16 [i_0 + 2]) ? 1 : var_14))) ? (arr_7 [i_5] [i_5] [i_5] [i_5] [14] [i_0]) : 672010443));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    {
                        var_25 = (min((((arr_20 [i_5 + 1] [i_6 - 1]) ? 248 : var_14)), (arr_20 [i_6 - 1] [i_7 + 1])));
                        var_26 = var_10;
                    }
                }
            }
            arr_24 [i_5] [i_0 - 2] = 12126;
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 19;i_10 += 1)
                {
                    {
                        arr_31 [i_8] [i_8] [i_9] [i_8] = (!-515446147);
                        arr_32 [i_0] [i_8] [i_9] = min((-6250884718568285008 <= 129), ((~(arr_4 [i_10] [i_10 - 2] [i_10 - 2]))));
                    }
                }
            }
            var_27 -= 192;
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            arr_35 [9] [i_11] [i_0] = (arr_3 [i_11]);
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 20;i_13 += 1)
                {
                    {
                        var_28 |= (min(524287, var_5));
                        arr_42 [i_0] [i_11] [i_12] [i_13] &= (((((-487014653 ? (1 | 66) : ((2147483642 ? -1 : 515446147))))) <= (min(4038639049875702819, 32749))));
                    }
                }
            }
        }
        arr_43 [i_0] [i_0] = var_0;
        var_29 = (arr_5 [i_0 - 2] [i_0 - 2]);
    }
    #pragma endscop
}
