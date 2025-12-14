/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((((((min(60, var_8))) ? ((min(var_1, -26643))) : (8064 / var_0))) != var_1));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 *= ((~(-2147483647 - 1)));
                    arr_7 [i_0] [i_1] [i_0] = 201;
                    var_12 = 65532;
                }
            }
        }
        arr_8 [i_0] = ((((min((arr_5 [1]), (((arr_2 [i_0] [i_0] [i_0]) << (((arr_6 [i_0]) + 19131))))))) ? (arr_6 [i_0]) : (((!((min((arr_5 [i_0]), -360456477))))))));

        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {

                        for (int i_6 = 3; i_6 < 21;i_6 += 1)
                        {
                            var_13 = ((((min((arr_16 [i_0] [i_3] [i_6 - 3] [i_6] [i_6]), (arr_16 [i_3] [i_0] [i_6 - 3] [i_6] [i_5])))) ? ((max((arr_16 [i_0] [i_3] [i_6 - 3] [i_6] [i_6]), (arr_13 [i_0] [i_0] [i_6 - 2] [i_5] [i_0] [i_6])))) : ((max((arr_13 [i_0] [i_0] [i_6 + 1] [0] [i_0] [i_0]), (arr_16 [i_4] [i_3] [i_6 - 1] [i_6] [i_6]))))));
                            var_14 = ((~((min((arr_11 [i_3 + 2] [i_3] [i_3 + 2]), (arr_11 [i_3 + 1] [i_3] [i_3]))))));
                        }
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            arr_22 [i_0] [i_3] [i_3] [i_5] [i_0] [i_0] [1] = (max((max(46, ((((arr_13 [i_0] [i_0] [i_0] [i_4] [i_5] [i_0]) || var_4))))), 254));
                            arr_23 [i_0] [i_0] [i_3] [i_3] [6] [i_3] [i_3] = (~442);
                            arr_24 [i_0] [14] [i_0] [i_0] [i_0] [i_0] [i_0] = 18446744073709551606;
                        }
                        var_15 = (min(var_3, (((8452469278762198995 << (var_4 - 28470))))));
                        var_16 = ((!(arr_3 [i_0] [i_0] [i_5])));
                        arr_25 [i_0] [i_3] [i_4] [i_5] [i_5] = ((arr_14 [i_3] [i_3] [3] [i_3]) || var_8);
                    }
                }
            }
            var_17 = (min(var_17, (arr_1 [1])));
            var_18 = (-(min(((min((arr_17 [12] [i_0]), 746689001))), (arr_15 [12] [i_3]))));
        }
        for (int i_8 = 2; i_8 < 19;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_19 *= 0;
                var_20 = (arr_9 [i_0]);
            }
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                var_21 = (max(var_21, (((+(((arr_13 [i_0] [i_8 + 3] [i_10] [i_8] [i_8 + 3] [i_8]) / 835988428)))))));
                var_22 = (max(var_22, ((min(var_5, ((max((arr_9 [i_0]), 49))))))));
                var_23 = (max((arr_14 [16] [i_8 - 2] [i_0] [i_0]), (((((arr_12 [i_0]) & (arr_5 [i_0]))) & (((min(var_0, (arr_2 [0] [i_8] [i_0])))))))));
                var_24 = arr_20 [i_10] [10] [10] [i_0] [i_0];
            }
            var_25 = (arr_29 [i_0] [1] [1] [i_0]);
        }
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            arr_35 [i_11] [17] [i_0] = ((arr_33 [i_0]) ? (max(((max(1, (arr_32 [i_11] [i_11] [i_11] [i_0])))), -18)) : (((min(218, var_0)))));
            var_26 *= ((+(min((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]), -11))));
            arr_36 [i_11] = (((~((min(14499, (arr_9 [i_11])))))));
        }
        var_27 = (max(var_27, (arr_17 [4] [i_0])));
        arr_37 [11] = var_9;
    }
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        arr_41 [10] [i_12] = (max((max(var_7, var_1)), ((~((min((arr_26 [i_12] [i_12]), 50)))))));
        arr_42 [i_12] = (arr_1 [i_12]);
        var_28 *= (arr_33 [i_12]);
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 14;i_14 += 1)
            {
                {
                    var_29 = ((209 > (((((max(48, 34))) || (!35))))));
                    var_30 = (min((arr_39 [i_13]), ((min(-var_2, ((min(var_1, var_7))))))));
                    arr_49 [i_12] [i_14] [i_14] [i_13] = ((!((!(arr_34 [i_14 + 2])))));
                    var_31 *= ((((((((67108800 ? var_0 : 50045))) != (arr_21 [i_14 + 2] [i_14 + 1] [i_14 + 2] [i_14 + 2] [i_14 + 1])))) != var_2));
                }
            }
        }
    }
    var_32 = var_9;
    var_33 = min(var_2, ((var_3 - ((min(133, var_2))))));
    var_34 = (min(210, ((((min(-40, var_3))) ? (var_7 - 1) : var_3))));
    #pragma endscop
}
