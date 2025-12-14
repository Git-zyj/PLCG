/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_10 += -5808779994459006746;
        var_11 ^= ((((((arr_2 [i_0 + 1]) ? var_6 : 127))) ? ((var_0 ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 - 1]))) : ((1679156214 / (arr_2 [i_0 + 1])))));

        for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
            {
                var_12 = (min(-27546, ((~(arr_7 [i_1])))));
                arr_8 [i_0 - 1] [i_1] [i_2] [i_2] = (((((((min(var_7, var_9)) >= ((0 ? 0 : (arr_6 [i_1] [11]))))))) % var_9));
            }
            for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
            {
                var_13 = var_8;

                for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                {
                    var_14 = ((!(arr_14 [i_1] [6] [i_1 + 2] [i_0 - 1])));

                    for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_1] [i_4] [1] [1] [i_1] = var_5;
                        arr_19 [i_1] [5] [i_3] [i_3] [i_4] [i_5] = ((((((arr_2 [i_0 - 1]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 - 1])))) ? (((arr_9 [i_1 + 1] [i_4] [i_4] [i_4]) * 1)) : (var_8 / var_7)));
                        arr_20 [i_0] [i_1] [i_0] = (-27546 + 1);
                    }
                    for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
                    {
                        arr_24 [3] [i_1] [3] [2] [5] = ((((min((((17 ? (arr_12 [2] [i_1 + 2] [i_3] [i_1] [i_3]) : 1))), (arr_17 [1] [i_1] [i_3] [i_1] [i_6])))) ? var_1 : (((((27539 ? 27542 : 0))) ? (((~(arr_2 [i_0])))) : 2568170687192078218))));
                        var_15 = (max((min(9223372036854775805, ((var_3 ? -27549 : (arr_14 [i_1] [i_1] [12] [12]))))), ((max(536870912, (arr_1 [i_0 - 1]))))));
                    }
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    var_16 += var_3;
                    var_17 = ((((((arr_10 [8] [9] [6] [i_1]) >> (((arr_15 [i_3] [7] [i_1 - 1] [i_1 + 2] [i_0] [i_0 + 1]) - 1750897471))))) ? (~9223372036854775807) : 1));
                    var_18 = (arr_4 [9]);
                }
            }
            arr_29 [i_0] [3] [i_1] = (((((4349672000161998436 ? 1 : (((!(arr_26 [12] [6] [i_1]))))))) ? (((arr_21 [i_1] [i_1] [i_1] [7]) ? (arr_25 [i_1] [i_1] [i_1]) : (max(var_7, var_0)))) : (((min((arr_27 [i_0] [i_1] [i_1 + 1]), (arr_27 [3] [i_1] [4])))))));
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 11;i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 9;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            arr_40 [i_8] [i_9] [i_8] [i_9] = ((-1056158030635881834 ? (!var_9) : ((var_4 ? var_8 : var_0))));
                            arr_41 [i_0] [12] [6] &= ((1 ? (arr_36 [1] [i_10] [i_9 - 1] [i_8 + 1]) : var_0));
                        }
                        var_19 ^= ((var_1 ? (arr_32 [i_0] [i_0]) : (var_0 >= var_0)));

                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            var_20 *= (~(arr_10 [4] [i_9 + 3] [i_8] [4]));
                            arr_44 [i_9] = (((((290031361 ? var_0 : (arr_17 [i_0] [i_9] [i_9] [2] [11])))) ? (arr_7 [i_9]) : 1));
                            var_21 = ((1 ? 1 : 1546666117));
                            var_22 += 4294967295;
                        }
                    }
                }
            }
            var_23 = (max(var_23, (2 == 1)));
        }
        var_24 |= (arr_16 [6] [6] [11] [9] [i_0 - 1]);
    }
    var_25 = ((var_4 ? ((var_9 ? (var_6 != var_4) : ((var_3 ? var_9 : var_3)))) : (-31844 == var_4)));
    var_26 = (var_8 % var_4);
    #pragma endscop
}
