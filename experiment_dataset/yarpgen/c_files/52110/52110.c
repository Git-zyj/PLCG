/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-(((((18446744073709551615 ? 21 : var_10))) ? var_11 : (((21 ? 22725 : var_6))))));
    var_20 = 59537;

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((((var_17 ? (arr_0 [i_0]) : var_7))) ? ((var_10 ? var_6 : var_14)) : (arr_1 [i_0]))) - (((1801524783 ? 27 : var_10))));
        arr_4 [i_0] [7] = ((0 ? -var_9 : (((((var_11 ? (arr_1 [i_0]) : (arr_2 [9]))))))));
        var_21 -= ((54609 < (~var_11)));
        var_22 = 106;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_23 = (min(var_23, (max((max(-var_14, var_4)), ((max(((max(4058930666, -104))), -3499852990473577234)))))));
        arr_7 [i_1] = min(3499852990473577222, (((((352671547212881094 - (arr_6 [i_1])))) ? 91 : (((min((arr_0 [8]), (arr_2 [0]))))))));
        var_24 = ((!((!(((-48 ? 21525 : 255)))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_11 [0] [i_2] = -5424096887864896600;
        arr_12 [i_2] = (arr_0 [9]);
    }

    for (int i_3 = 4; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_25 ^= ((((arr_14 [i_3 - 3] [12]) / ((-(arr_13 [i_3 - 3]))))));
        arr_15 [i_3] = (arr_14 [i_3 - 2] [10]);
    }
    for (int i_4 = 4; i_4 < 16;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    var_26 *= (arr_14 [i_4] [12]);
                    var_27 -= 7411556269560245886;
                    arr_23 [i_5] [i_5] = (((((~((17126210093160476380 & (arr_16 [i_4] [i_4 - 4])))))) ? (((((max(44474, (arr_18 [i_6] [i_6]))) == -5424096887864896597)))) : (arr_16 [i_4 - 4] [i_4 - 4])));
                    arr_24 [14] [i_5] [3] [i_5] = (arr_20 [i_4 + 1]);
                }
            }
        }
        var_28 = (min(var_28, (((~(((((11 * (arr_14 [i_4 + 2] [i_4 - 2])))) ? (arr_19 [i_4]) : (!var_16))))))));
    }
    var_29 = var_18;
    #pragma endscop
}
