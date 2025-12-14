/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = var_3;
        var_15 = var_8;
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        var_16 = var_2;
        var_17 = (((((((min(var_4, (arr_5 [i_1])))) ? (((arr_4 [i_1] [i_1]) ? var_3 : var_10)) : ((((!(arr_4 [i_1] [i_1])))))))) && var_12));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_18 ^= (max(((var_13 - (arr_8 [2] [i_2]))), (arr_10 [i_2] [i_2])));
        var_19 = (min(var_19, var_11));
        arr_11 [i_2] = (max(-3871492325419419585, 3871492325419419584));

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_20 *= var_13;

            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                var_21 = (max(var_21, (((((2147483647 ? var_4 : 268369920))) ? (max(2801, 16429138754898775927)) : (((arr_16 [i_4 - 1] [i_3] [i_4 - 1]) + (arr_12 [i_4 - 1] [i_4 + 1] [i_4 - 1])))))));
                arr_17 [i_2] = (max(-268369920, (max((var_1 + var_11), (14151107077013572480 != 0)))));
            }
            arr_18 [i_2] = 16;
            var_22 = (-360924316053397666 && -8439960155299139873);
        }
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        arr_21 [i_5] [i_5] = (var_4 / var_8);
        var_23 = (max(var_23, ((max(((min(var_9, var_3))), ((((arr_14 [i_5] [20]) >= (arr_14 [i_5] [16])))))))));
    }
    var_24 = (var_5 ? 1116892707587883008 : var_7);
    #pragma endscop
}
