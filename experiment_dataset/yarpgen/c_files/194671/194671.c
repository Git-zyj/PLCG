/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_13 |= (((((2765133409 ? ((var_10 ? 37 : -49)) : ((((arr_2 [i_0]) && (arr_3 [i_0]))))))) ? (min(130, (((arr_3 [i_0]) ? var_1 : var_3)))) : (((((((-32767 - 1) ? var_6 : (arr_1 [i_0 + 1])))) || (var_7 && 16))))));
        var_14 |= (~(arr_1 [i_0 - 1]));
        var_15 = (min(var_15, ((((((+(min((arr_1 [i_0]), (arr_1 [8])))))) ? ((~(-9223372036854775807 - 1))) : (((max((arr_3 [i_0 + 1]), (arr_3 [i_0]))))))))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                arr_11 [i_0 + 2] [i_0] = (((arr_8 [i_0 - 1] [0] [0]) ? (((max((arr_0 [i_0]), (arr_0 [i_0]))))) : ((~((38 ? (arr_1 [4]) : (arr_1 [i_0])))))));
                arr_12 [1] [i_1] [i_0] = (max(((-(max((arr_8 [i_2] [i_0] [i_0]), (arr_4 [i_0]))))), (((arr_10 [i_2 - 1] [i_0 + 2] [i_2] [i_2 - 1]) << (-37 + 46)))));
                var_16 = (min(var_16, ((((arr_10 [i_0] [i_1] [i_0] [i_1]) ? ((+(max((arr_6 [i_0 + 1] [i_2]), var_2)))) : (arr_9 [i_1] [i_1]))))));
            }
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_17 = ((((~(min((arr_13 [i_0 - 1] [i_1] [i_3]), var_10)))) | (((~(arr_10 [i_0] [i_0 + 1] [i_3] [i_0]))))));
                var_18 = -1;
            }
            for (int i_4 = 1; i_4 < 7;i_4 += 1)
            {
                var_19 = (((arr_8 [i_0] [i_0] [i_4]) ? (max((((~(arr_5 [8] [i_1] [i_0 + 1])))), (max(var_10, (arr_0 [i_0]))))) : (arr_17 [i_0 - 1] [i_0 - 1])));
                var_20 = (max((((((var_7 ? (arr_15 [i_0] [i_1] [i_4]) : -37)) ^ (arr_14 [i_0] [i_0])))), ((~(arr_13 [i_1] [0] [5])))));
                var_21 = ((((min(var_7, var_10))) ? ((((arr_2 [i_4 + 3]) ? var_2 : (!-43298456658899417)))) : ((((((arr_16 [i_0] [i_0]) ? (arr_9 [i_0] [i_0]) : var_0))) & ((~(arr_7 [i_0] [i_1] [i_4])))))));
                var_22 = (~0);
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_23 *= var_11;
                var_24 = ((~(arr_13 [i_0 + 2] [i_0 + 1] [i_0 + 1])));
                arr_20 [i_0] [i_0] = ((var_11 ? (((-(arr_18 [i_0 + 2] [i_0 + 1] [i_0])))) : ((((min(var_2, -63))) ? (~var_7) : (min(2211183806, (arr_6 [5] [5])))))));

                /* vectorizable */
                for (int i_6 = 1; i_6 < 6;i_6 += 1)
                {
                    var_25 = ((((var_10 ? -16 : (arr_0 [i_0]))) * -54));

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_26 = (arr_5 [i_0 + 1] [5] [i_0 + 1]);
                        var_27 = ((~((var_5 ? 28145 : var_3))));
                    }
                    for (int i_8 = 4; i_8 < 8;i_8 += 1) /* same iter space */
                    {
                        var_28 = ((!(((var_5 ? var_4 : -66)))));
                        var_29 = ((arr_10 [i_0 + 1] [i_0 - 1] [i_0] [i_0]) / (arr_10 [i_0 + 1] [i_0 + 2] [i_0] [i_0]));
                        arr_27 [2] [i_0] [2] [i_6 + 4] [i_8] [2] = (((arr_2 [i_0 + 2]) ? (arr_4 [i_6 + 1]) : var_6));
                    }
                    for (int i_9 = 4; i_9 < 8;i_9 += 1) /* same iter space */
                    {
                        var_30 = (min(var_30, (((var_4 ? (arr_15 [i_9 - 3] [i_0 - 1] [i_6 + 1]) : (arr_15 [i_9 + 1] [i_0 - 1] [i_6 + 1]))))));
                        var_31 = (((arr_1 [i_6 + 1]) ? (~10) : (!var_12)));
                        var_32 &= (arr_17 [i_0 + 2] [i_9]);
                    }
                }
            }
            var_33 = (((arr_4 [i_1]) ? (107 || var_2) : ((((((arr_6 [i_0 + 2] [i_0 + 2]) ? var_1 : var_2))) - (min(-49, (arr_10 [i_1] [i_1] [i_0] [i_0])))))));
            var_34 ^= ((+(min((arr_25 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_1] [i_0]), -51))));
        }
    }
    var_35 = ((var_7 % ((-((max(var_3, var_0)))))));
    #pragma endscop
}
