/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_1] [i_1] [i_0] = ((!(arr_5 [i_0 - 1])));

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_17 = (((54853 > 10683) ? (~var_14) : (((arr_8 [i_0 - 1] [i_0 - 1] [3]) * var_0))));
                var_18 = (arr_1 [i_1] [i_1]);
                arr_10 [i_0] [i_0] [i_2] [i_2] = (-3639145 + 37326);
            }
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                arr_13 [i_0] = (((var_5 + 2147483647) >> ((54827 ? (arr_7 [i_0 - 1] [i_0 - 1]) : 8159108513318883556))));
                arr_14 [0] [i_1] [12] &= var_8;
            }
            arr_15 [i_0] [i_0] [i_0] = ((var_15 ? (((~9223372036854775799) & (((~(arr_9 [i_0] [i_0])))))) : ((((arr_3 [i_0 - 1]) - (arr_3 [i_0 - 1]))))));
        }

        for (int i_4 = 2; i_4 < 9;i_4 += 1) /* same iter space */
        {
            var_19 -= (!((min((!0), (~var_15)))));
            var_20 = ((((((arr_1 [i_4 + 3] [i_0]) + (arr_16 [i_0 - 1])))) ? (arr_1 [i_0 - 1] [i_4 + 1]) : (arr_1 [i_0] [i_0])));
            arr_18 [i_0 - 1] [i_0] = ((-(((((~(arr_16 [i_0])))) ? (!10658) : (((arr_8 [i_0 - 1] [i_0] [i_0]) ? 1424267775 : 9223372036854775799))))));
        }
        for (int i_5 = 2; i_5 < 9;i_5 += 1) /* same iter space */
        {
            var_21 = (((!(-2147483628 + var_7))));
            arr_21 [i_0] [i_0] [i_5] = ((((((arr_12 [i_0 - 1] [i_5 + 1] [i_0]) <= (arr_12 [i_0 - 1] [i_5 + 4] [i_0])))) <= (((var_9 > (arr_12 [i_0 - 1] [i_5] [i_0]))))));
        }
        var_22 = (min((var_15 % var_12), (((!(arr_20 [i_0] [i_0 - 1]))))));
        var_23 -= (((arr_4 [i_0] [1] [i_0 - 1]) == (min(((var_15 / (arr_8 [i_0] [i_0] [i_0]))), ((max(2143353914, 1371331910)))))));
    }
    var_24 = var_12;
    var_25 = (min(var_25, (((var_2 ? var_1 : (((-9223372036854775778 ? var_14 : var_2))))))));
    #pragma endscop
}
