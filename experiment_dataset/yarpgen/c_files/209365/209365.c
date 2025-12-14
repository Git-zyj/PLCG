/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = ((var_13 <= (((arr_2 [i_0]) | (arr_2 [i_0])))));
        var_16 -= (arr_1 [0]);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_7 [i_1] [i_2] [8] = 1;
            var_17 = ((((((~(arr_0 [i_1])) == (arr_3 [5] [i_2]))))));
        }
        for (int i_3 = 1; i_3 < 7;i_3 += 1)
        {
            arr_10 [i_1] [i_3] [i_1] = 1;
            arr_11 [i_1] [i_3] [i_1] = 1;
            var_18 = (((((-1 ? (arr_3 [i_1] [i_1]) : 1))) + (((var_6 ? var_10 : 1)))));
            var_19 ^= ((-(arr_0 [i_1])));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                arr_17 [i_4] = ((var_10 || (((~(arr_9 [i_1]))))));
                var_20 = (~(~1));
                var_21 ^= ((!(arr_14 [i_5] [i_1] [i_5])));
            }
            var_22 = ((-(arr_14 [i_1] [i_4] [i_4])));
            var_23 = var_13;
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_24 = (((((!(arr_3 [1] [i_6])))) ^ (-1363414100452039521 && 0)));
            var_25 = var_11;
            var_26 *= 1;
        }
        arr_21 [i_1] = ((-var_13 ? (((-113 | 0) ? (arr_16 [0] [0]) : ((((arr_4 [i_1]) && var_2))))) : ((min(-8583219288185733547, (arr_12 [i_1] [i_1] [i_1]))))));
    }
    var_27 = (min(var_27, var_9));
    #pragma endscop
}
