/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    var_20 = (20 > 20);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
            {
                arr_7 [i_0] = (-127 - 1);

                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    var_21 = (!(arr_10 [i_3 + 3] [i_3 - 1] [i_0] [i_3 + 1] [i_3 + 3] [i_3 - 1]));
                    var_22 = 4;
                }
                var_23 = (min(var_23, (arr_0 [i_1])));
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_24 = (max(var_24, ((!(arr_19 [i_5 - 1] [i_5 + 3] [i_5 - 1] [i_5 - 2] [i_6] [i_6])))));
                            var_25 = (arr_12 [i_0] [9] [i_0]);
                            var_26 ^= (((arr_14 [i_0] [i_0] [i_5 - 1] [i_1]) >= (~-115)));
                        }
                    }
                }

                for (int i_7 = 1; i_7 < 24;i_7 += 1)
                {
                    arr_23 [3] [3] [i_0] [i_0] = 2016477158;
                    var_27 = (((((arr_22 [i_0] [i_0] [i_0]) ? var_17 : -55)) - (arr_21 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7] [i_0])));
                    var_28 = (min(var_28, 1));
                }
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
            {
                var_29 = (max(var_29, ((((arr_5 [i_0] [24] [i_0] [i_0]) ? 121 : (arr_5 [i_0] [i_1] [i_8] [i_1]))))));

                for (int i_9 = 2; i_9 < 24;i_9 += 1)
                {
                    var_30 ^= 73;
                    var_31 -= (arr_10 [i_9 - 1] [i_9 - 1] [i_1] [i_1] [i_9 - 2] [i_9 - 2]);
                    var_32 = (((-9223372036854775807 - 1) % (((622485780 ? 1 : -69)))));
                    arr_30 [18] [i_0] [18] [i_0] = -5;
                    arr_31 [i_0] [i_0] [i_0] [i_8] [i_0] [i_0] = (((((arr_2 [11] [i_1] [i_1]) ^ var_4)) > ((17652836602695474198 ? 20 : var_8))));
                }
            }
            var_33 = var_5;
            arr_32 [i_0] [23] [i_0] = (arr_6 [i_0] [i_0] [11] [i_0]);
            var_34 = (-127 - 1);
        }
        arr_33 [i_0] = ((-((((arr_11 [i_0] [11] [i_0] [i_0] [11] [i_0]) | (arr_10 [i_0] [i_0] [i_0] [i_0] [20] [16]))))));
        var_35 = ((max(0, 268435455)));
        var_36 &= (arr_26 [24]);
        var_37 |= ((var_5 >> (((arr_27 [i_0] [i_0] [i_0] [i_0] [14] [i_0]) - 163))));
    }
    for (int i_10 = 3; i_10 < 13;i_10 += 1)
    {
        var_38 = (max(var_38, 268435467));
        var_39 = (max(((~(min((arr_8 [22]), (arr_29 [24] [1] [1] [i_10] [10] [i_10]))))), (arr_8 [1])));
        var_40 = (((((-121 ? (arr_37 [i_10]) : (((arr_37 [i_10]) ? var_2 : (arr_13 [0] [0] [0] [i_10 - 3])))))) ? (((((max((arr_27 [i_10] [i_10] [i_10] [i_10] [18] [i_10]), (arr_25 [10] [10] [10]))))) / (arr_22 [i_10] [i_10] [i_10 - 1]))) : (arr_35 [i_10] [i_10 - 2])));
        arr_38 [i_10] = ((((min(((max(63567, (arr_34 [i_10])))), (((arr_26 [i_10 + 1]) / var_15))))) ? 27649 : (min((arr_5 [i_10] [i_10] [12] [i_10]), var_6))));
    }
    #pragma endscop
}
