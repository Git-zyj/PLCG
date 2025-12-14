/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            var_10 = var_5;

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_11 = (!-233821972325348227);
                    var_12 = var_8;
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    arr_17 [i_1] [i_1] [i_1] = 233821972325348227;
                    arr_18 [i_0] [15] [i_2] [i_2] [i_1] = var_7;
                    var_13 ^= (((3890 ? -233821972325348252 : (-2147483647 - 1))));
                    arr_19 [i_1] = (((arr_7 [i_1 - 3] [i_1] [i_1 - 3]) ? var_3 : var_7));
                }
                var_14 *= -233821972325348223;
                arr_20 [i_2] [i_1] [i_1] [i_0] = (~(((max((arr_9 [i_1] [i_1] [i_2] [i_2]), 0)))));
            }
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                var_15 ^= 2;
                var_16 = (max(var_16, (max(-var_4, (((((var_4 ? (arr_1 [i_0]) : var_4))) ? -var_5 : var_1))))));
                arr_25 [i_1] = ((((((min(15, -233821972325348223)) - (min(15, 18446744073709551613))))) ? (max(var_2, (arr_13 [i_0] [i_0] [i_0] [i_5] [i_5]))) : -var_8));
            }
            var_17 = (((!((!(arr_22 [i_1]))))));
            arr_26 [i_1] [i_1] = ((~(!var_8)));
        }
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            var_18 ^= (min(31362, (((max(var_4, var_7))))));

            /* vectorizable */
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                var_19 ^= (~var_1);
                var_20 ^= ((var_4 ? 0 : 0));
            }
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                var_21 *= (min(((~((32017 ? var_5 : (arr_13 [i_0] [i_0] [i_6] [i_6] [4]))))), (var_6 - 1)));
                var_22 = var_8;
            }
            var_23 = (~-21268);
            var_24 = (var_2 >= var_0);
        }
    }
    var_25 = max(((~(var_1 & var_5))), (min(30, ((var_1 ? var_6 : var_0)))));
    #pragma endscop
}
