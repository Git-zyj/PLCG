/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_15 -= var_11;
                var_16 = (min(var_16, (((((((arr_4 [i_0] [i_0] [i_0]) ? (arr_4 [i_1] [i_1] [i_1 - 1]) : ((((arr_1 [20]) && 35)))))) ? var_4 : -var_11)))));
                var_17 = ((var_6 ? (arr_4 [i_1 + 3] [i_1] [i_1]) : (arr_4 [i_1 + 1] [i_1 + 3] [i_1 + 1])));
                var_18 &= 221;
                var_19 = (((((~(arr_4 [i_1 - 1] [i_1 - 1] [i_1])))) ? (arr_4 [i_1 + 3] [i_1] [11]) : ((var_10 ? (arr_3 [i_0]) : (arr_3 [i_0])))));
            }
        }
    }
    var_20 &= var_8;

    /* vectorizable */
    for (int i_2 = 2; i_2 < 24;i_2 += 1)
    {
        var_21 |= ((((var_14 ? var_12 : 78)) * (((((arr_6 [i_2]) > 2058179425144058105))))));

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_22 = (arr_8 [i_2 - 1] [i_2 - 2] [i_2 + 1]);

            for (int i_4 = 4; i_4 < 23;i_4 += 1)
            {
                var_23 = (((arr_9 [i_4 + 1] [i_4] [i_4]) + (arr_9 [i_4 - 4] [i_4] [16])));
                var_24 = var_11;

                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_25 = (arr_7 [i_2]);
                        var_26 |= arr_11 [i_3] [i_4 - 3] [i_4 - 3];
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_27 = ((var_3 ? ((((arr_20 [20] [20] [i_3] [i_4] [20] [i_7] [i_4]) ? (arr_5 [i_2]) : -16))) : (arr_18 [i_2])));
                        var_28 = (max(var_28, ((((arr_7 [i_5]) ? var_1 : var_10)))));
                        var_29 = var_6;
                        var_30 = (3519422759 < var_3);
                    }
                    var_31 = 252;
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    var_32 = 533878163325189741;

                    for (int i_9 = 3; i_9 < 24;i_9 += 1)
                    {
                        var_33 = (arr_21 [i_2]);
                        var_34 = var_8;
                        var_35 &= (((var_8 ? 32762 : 1)));
                        var_36 = ((527876290 / (arr_16 [i_2 - 1] [i_4 - 3] [i_4] [i_4] [i_2] [i_4])));
                        var_37 = ((arr_6 [i_9 + 1]) ? (arr_14 [i_3] [i_3] [i_2]) : 0);
                    }
                    for (int i_10 = 2; i_10 < 24;i_10 += 1)
                    {
                        var_38 = (arr_16 [i_10 + 1] [i_2] [18] [i_4 - 4] [i_2] [i_3]);
                        var_39 = 0;
                        var_40 &= arr_24 [i_10] [i_4] [i_2] [i_8];
                        var_41 |= (~var_1);
                        var_42 |= (-9223372036854775807 - 1);
                    }
                    for (int i_11 = 3; i_11 < 24;i_11 += 1)
                    {
                        var_43 = ((-3 ? (arr_6 [i_4 - 3]) : -23658));
                        var_44 = (arr_29 [i_11 - 1] [i_11] [i_2 - 1] [i_8] [i_2]);
                        var_45 = (((~-1756650443) | 0));
                    }
                }
            }
            arr_35 [i_2] = ((17592186043904 ? 298614939 : 19668));
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_46 |= (var_9 ? (arr_22 [i_2] [i_2 + 1] [i_2] [i_2 - 1] [i_2] [i_2]) : var_8);
            var_47 = ((~(((arr_32 [i_2] [i_2] [i_12] [i_2] [i_12]) ? var_11 : var_7))));
            var_48 = -17592186043902;
        }
        var_49 = (-2147483647 - 1);
        var_50 = ((var_2 <= (arr_37 [i_2 + 1] [i_2 - 1])));
        var_51 = (~19);
    }
    #pragma endscop
}
