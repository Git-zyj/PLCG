/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (((((((var_9 ? var_2 : var_1))) ? (var_5 / var_5) : var_10))) ? (((((var_4 ? var_0 : var_9))) ? ((var_7 ? var_6 : var_4)) : -var_9)) : (((((var_9 ? var_7 : var_8))) ? var_9 : ((1 ? -2859474343893738717 : 2251799813685247)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_10 [13] [13] [i_2] [i_2] [13] [17] = ((134217728 ? var_7 : (min((((var_7 ? var_8 : var_8))), (var_2 / var_10)))));
                        arr_11 [i_0] [i_0] = ((-2859474343893738717 ? (((((max(-2859474343893738741, -116))) ? (~123) : 121))) : 0));
                        var_12 = (min(var_12, (((((123 ? -var_2 : ((var_2 ? var_0 : var_2)))) - (11035 || 3731520334))))));
                        arr_12 [10] [10] [i_2] [1] = ((5979354666169168404 ? (((!65535) ? var_7 : (var_0 ^ var_9))) : (((min(((min(var_5, var_1))), (min(var_7, var_10))))))));
                        arr_13 [2] [2] [i_2] [i_3] = var_7;
                    }
                }
            }
        }
        var_13 = (((((var_2 ? var_4 : var_1))) || -var_3));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_14 += ((var_0 * ((((var_7 * var_1) * ((var_9 ? var_5 : var_4)))))));

        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            var_15 = var_6;

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                arr_23 [i_4] [8] [8] [i_4] &= ((((max(var_3, (max(var_4, var_6))))) ? (((((max(-794092788, 2147483647))) ? ((var_1 ? var_4 : var_4)) : ((max(var_3, var_9)))))) : (((~var_0) ? (((var_7 ? var_7 : var_10))) : ((var_9 ? var_7 : var_0))))));
                var_16 += (min((max(((6861944528373133682 ? 965764385 : -2859474343893738717)), (((5236546462791987366 ? 3 : 1))))), (min(((3351779085904046862 ? var_7 : 5979354666169168407)), ((max(17600, 1)))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_28 [i_7] [i_5] [i_6] [10] [7] [7] = ((((min((-127 - 1), 31))) ? 118 : (((max(4294967295, -1)) * 0))));
                            var_17 = (((min(29, var_3)) ^ ((((min(354, 1))) + -2084562313))));
                            var_18 = (-((33 ? (((0 ? -123 : 1))) : 6602945309060958317)));
                        }
                    }
                }
            }
            var_19 = (min(var_1, ((~(var_4 + var_5)))));
        }
        var_20 = var_0;
    }
    var_21 ^= (((((var_8 ? (var_8 / var_4) : (max(var_0, var_6))))) ? ((var_7 ? ((max(29, 1443688493))) : (var_6 / var_1))) : (((-(min(var_8, var_7)))))));

    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        arr_31 [i_9] [i_9] |= (102 > -1374390811);

        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            var_22 = (max((((!(var_10 + var_1)))), ((((min(var_3, var_0))) ? ((var_5 ? var_6 : var_3)) : (min(var_2, var_6))))));
            arr_36 [1] [1] [i_10] = (min(var_9, (min((min(var_4, var_3)), -var_4))));
            arr_37 [8] [8] = ((!((!(((0 ? -130771547 : 4294967295)))))));
        }
        for (int i_11 = 0; i_11 < 0;i_11 += 1)
        {
            var_23 = ((-(min(var_0, var_3))));
            arr_40 [i_9] = (((((-var_3 * ((var_5 ? var_10 : var_2))))) ? ((((((var_9 ? var_3 : var_1))) ? -var_8 : ((max(var_3, var_9)))))) : (((((var_6 ? var_7 : var_2))) ? (6602945309060958308 / 2810) : var_1))));
        }
    }
    #pragma endscop
}
