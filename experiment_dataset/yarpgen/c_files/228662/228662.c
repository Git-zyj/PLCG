/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        var_17 += (arr_1 [i_1]);
                        var_18 = ((-1853714982 ? 1 : 0));
                        var_19 *= 79;
                    }
                    arr_12 [i_0 + 1] [i_2] [i_2] &= ((~((max((arr_3 [i_2] [i_2] [i_2]), var_12)))));

                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_1] = ((!(arr_1 [i_2])));
                        var_20 = (~((var_2 ? -31 : var_8)));
                    }
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        var_21 -= ((~(~var_16)));
                        var_22 ^= min((min((arr_7 [3] [1] [i_2] [3]), (max(var_2, (arr_5 [i_0] [1] [i_2]))))), ((min((arr_10 [i_0] [i_1 - 1] [i_2] [i_2]), var_2))));
                        var_23 = (max(var_23, (((((((6 ? 54619 : (arr_17 [i_0] [i_2] [i_2] [i_5] [i_0] [i_0]))) ? -6735894754740591083 : (((min(var_16, 247)))))))))));
                        var_24 ^= 13;

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_25 = (max(var_25, (min(((((min(-2565239463913098151, var_10))) ? (arr_6 [i_0 + 1] [i_1] [i_5 + 1] [i_6]) : (((~(arr_4 [i_2])))))), (((1479603871 + (arr_16 [7] [7] [7] [i_6]))))))));
                            var_26 = ((179 ? 2720056527 : 64));
                        }
                    }
                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        var_27 = ((!((min(-12389, (max(0, (arr_13 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_7] [i_7 - 2]))))))));
                        arr_24 [i_1] [i_1] [i_1] [i_7 - 2] = ((!((!((min(2, (arr_1 [i_1 - 1]))))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_28 |= (arr_25 [i_0 + 2] [i_1 + 1] [i_2] [i_8] [i_8]);
                        arr_28 [i_0] [i_0] [i_1] [i_1] [i_8] [4] = ((((!(arr_21 [i_0] [i_0])))));
                        var_29 = (arr_11 [i_1] [i_1] [i_2] [i_8]);
                        var_30 = var_2;
                    }
                    var_31 = (arr_8 [1] [i_0] [1] [1] [1]);
                }
            }
        }
    }
    var_32 = var_4;
    var_33 = var_16;
    var_34 = ((((min(-87, 1)))));
    #pragma endscop
}
