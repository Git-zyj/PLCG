/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_10 = (min(var_10, (((((arr_1 [i_0 - 1] [i_0 + 3]) << (((arr_1 [i_0 + 3] [i_0 - 1]) - 3980579557)))) << ((((1469813604 ? -23 : 61440)) + 34))))));
        var_11 = (min(var_11, var_2));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_11 [i_1] [i_2] [i_1] [i_2] [i_1] [7] = var_9;
                        arr_12 [2] [i_2] [i_2] = (((1359433508 == var_6) * (((arr_8 [i_2] [i_2 - 1] [i_3] [i_2 - 1]) ? ((11007372874600107878 ? 391198268 : var_5)) : var_0))));
                        var_12 = (max(var_12, (1 / var_6)));
                        arr_13 [i_3] [i_3] [6] |= (41199 != var_1);
                    }
                }
            }
        }

        for (int i_5 = 4; i_5 < 10;i_5 += 1)
        {
            var_13 += ((((((!var_6) << (30255 - 30251)))) && var_4));
            var_14 = (min(var_14, var_5));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_15 -= ((var_3 >= (arr_1 [i_6] [i_6])));
            arr_18 [i_1 + 1] = (((arr_15 [i_6]) % (arr_15 [i_6])));
        }
        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            var_16 = (min(var_16, ((((((var_7 ? 24339 : 1))) ? (arr_14 [i_1] [i_1 + 1] [4]) : (((29 >> (129 - 120)))))))));
            var_17 = var_2;
            arr_21 [i_1] = ((-500266319 ? (arr_3 [i_1 - 1]) : var_7));
            var_18 = max((((!(arr_17 [i_7 - 1] [i_7 + 1])))), -7804531131275835274);
            var_19 = (min(var_19, (((-((~(arr_2 [i_1 - 1]))))))));
        }
        arr_22 [i_1] &= 33948;
        arr_23 [7] [i_1] = (((((0 ? 24339 : 0))) ? (var_3 | var_0) : (((arr_16 [i_1 + 1] [i_1 - 1] [i_1]) - (arr_16 [i_1 + 1] [i_1 + 1] [i_1])))));
    }
    var_20 -= (~(max(2772091264, var_5)));
    var_21 = var_7;
    #pragma endscop
}
