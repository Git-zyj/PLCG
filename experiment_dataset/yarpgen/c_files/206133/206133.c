/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((((var_10 ? var_13 : var_0))))));
    var_16 = var_4;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_17 = ((1714430378318639316 + ((max((arr_4 [i_1 + 4] [i_1 + 4] [i_1 + 4]), 14680064)))));
            var_18 = (max(var_18, (((((max((arr_4 [i_0] [5] [i_1]), (((!(arr_0 [i_0]))))))) & var_10)))));
        }
        var_19 = var_13;
        arr_5 [i_0] = (arr_4 [i_0] [i_0] [i_0]);
        arr_6 [18] = (arr_3 [i_0] [i_0] [8]);
        var_20 *= -204;
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
        {
            var_21 = (((!-55350) ? var_7 : ((4279620613953594904 ? 797 : (4145260800228700485 <= var_9)))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        arr_17 [1] [i_4] [i_2] [i_2] [i_2] = ((var_13 & (max((arr_12 [i_4] [i_2]), (arr_0 [i_2])))));
                        arr_18 [i_2] [i_3] [8] [i_4] [i_5] = arr_12 [i_4] [i_5];

                        for (int i_6 = 1; i_6 < 15;i_6 += 1)
                        {
                            arr_22 [i_2] [i_3] [i_3 + 3] [i_3 + 3] [i_2] = ((~(arr_4 [i_2 - 1] [i_3 - 1] [i_6 - 1])));
                            arr_23 [5] [i_4] [i_4] [3] [18] = (arr_3 [i_2] [i_2] [1]);
                            var_22 -= ((!((max(((max(var_10, 1))), (((arr_14 [i_4]) | 4145260800228700475)))))));
                        }
                        arr_24 [i_2] = ((((max(var_13, (arr_15 [i_5] [i_5] [i_5] [i_4] [i_2 - 1] [i_2 - 1])))) * (((((1 ? 1 : var_8))) ? (~50331648) : (arr_11 [i_2 - 1])))));

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            arr_27 [i_5] [i_5] [i_4] [i_5] = (((arr_16 [i_7] [i_2 - 1] [i_4] [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? (!var_3) : (max((arr_1 [i_2 - 1]), 9))));
                            var_23 = (max(var_23, (((+(max((((var_12 ? (arr_8 [i_5]) : (arr_16 [i_2] [i_2] [4] [16] [i_2] [i_7])))), (arr_20 [i_2] [i_2] [i_3] [3] [i_5] [i_7] [i_7]))))))));
                            var_24 = (max(var_24, (var_2 * var_8)));
                            var_25 -= var_1;
                        }
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_32 [i_3 - 1] [1] &= ((-4677858911909921077 ? 1839770105315564137 : 4279620613953594909));
                            var_26 -= (min(4279620613953594890, (((((min((arr_7 [i_2] [i_2]), 16382419750184727711))) ? 3855093541 : ((max(-1664155936, -14))))))));
                        }
                    }
                }
            }
            var_27 -= (arr_26 [4] [i_2 - 1] [i_3] [i_2 - 1] [i_2 - 1] [i_2 - 1] [9]);
            var_28 = (max(var_28, (!var_1)));
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 16;i_9 += 1) /* same iter space */
        {
            arr_36 [i_2 - 1] [i_2 - 1] [i_2 - 1] = ((~(16384 ^ 9059486247334882150)));
            arr_37 [i_2 - 1] [i_2 - 1] [i_2 - 1] = (arr_30 [i_9 + 3] [i_9 - 1] [i_9 + 2] [i_2] [i_2] [i_2 - 1]);
            var_29 = (var_13 ? var_8 : (arr_11 [i_2 - 1]));
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 16;i_10 += 1) /* same iter space */
        {
            var_30 = (((((8945578501817850767 ? (arr_31 [i_2 - 1]) : var_7))) < var_11));
            var_31 = (min(var_31, 2879822189071014817));
            arr_40 [i_2 - 1] [i_2] = 1061354445;
        }
        var_32 = ((((~(arr_19 [4] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]))) <= ((var_7 ? (max(4279620613953594909, (arr_13 [i_2] [i_2 - 1]))) : ((var_4 ? 4279620613953594909 : var_12))))));
    }
    #pragma endscop
}
