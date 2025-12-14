/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = ((var_1 ? var_8 : 18446744073709551615));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_16 = var_13;
            var_17 |= (((((!(arr_0 [i_1]))))) - (max((arr_0 [i_0]), (arr_0 [i_0]))));
            var_18 -= (max(11, (arr_3 [i_1])));
        }
        for (int i_2 = 1; i_2 < 7;i_2 += 1)
        {
            arr_7 [2] [i_2 + 2] [i_2] = (arr_0 [i_0]);
            var_19 *= (~((var_4 ? (arr_3 [i_2 + 2]) : 39)));
        }
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            var_20 -= (((((18446744073709551604 ? (min(-107, 2828298928564844873)) : (arr_3 [i_0])))) ? ((-(arr_5 [i_3 - 1] [i_3 - 1]))) : var_14));
            arr_11 [i_3] [i_3] = ((((((arr_4 [i_3 - 1] [i_3 + 1] [i_3 + 1]) ? var_13 : 23367))) ? (arr_6 [i_3 - 1] [i_3 + 1] [i_3 + 1]) : (((arr_6 [i_3 - 1] [i_3 + 1] [i_3 + 1]) >> (-151730457652620403 + 151730457652620431)))));
            arr_12 [i_3] [i_3] = (((max((arr_4 [i_3 + 1] [i_3 - 1] [i_3 + 1]), var_7))) ? (min((arr_4 [i_3 - 1] [i_3 + 1] [i_3 + 1]), (arr_4 [i_3 + 1] [i_3 - 1] [i_3 + 1]))) : 15000);
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 9;i_5 += 1)
                {
                    {
                        arr_18 [i_3] [i_3] [i_5] [i_5] = (arr_1 [i_3] [i_0]);
                        arr_19 [i_3] = (((((var_8 ? (arr_5 [i_0] [i_3 + 1]) : 3))) ? (min(18446744073709551598, var_11)) : (arr_5 [i_3] [i_3 + 1])));
                        var_21 -= (-(min((arr_15 [i_4 + 1] [i_3 + 1] [i_5 - 2]), (min(var_13, var_10)))));
                        arr_20 [i_0] [i_4 + 1] [i_3] [i_5] = (((min((((arr_8 [i_3] [i_3 - 1]) % (arr_17 [i_0] [i_3] [i_4 + 1] [i_0] [i_3 - 1] [i_0]))), ((var_8 ? 8191 : (arr_14 [i_0] [i_4] [i_4 - 1]))))) | (-32514 == 19342)));
                        var_22 = (((((var_9 - 0) % ((23363 + (arr_9 [i_5]))))) > (((max(var_6, ((((arr_4 [i_0] [i_0] [i_5 + 1]) <= (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
                    }
                }
            }
        }
        var_23 = (((var_11 ? (arr_14 [i_0] [i_0] [4]) : (arr_14 [i_0] [i_0] [i_0]))));
    }
    var_24 = (((((var_13 ? var_9 : (var_11 >= var_8)))) ? var_12 : (((((var_8 ? var_14 : var_6)) <= ((max(32756, -8))))))));
    #pragma endscop
}
