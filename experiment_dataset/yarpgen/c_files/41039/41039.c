/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((!(((!1) != (arr_1 [i_0 - 1] [i_0 - 1])))));

        /* vectorizable */
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            var_15 = var_6;
            var_16 *= (((arr_0 [i_1 - 4]) ? (arr_0 [4]) : (arr_0 [i_0 + 1])));

            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                var_17 = (((arr_6 [i_1 - 4] [i_2]) ? (!var_3) : var_1));
                arr_9 [8] &= ((var_10 >= (arr_8 [i_2 - 1] [0] [0] [i_0 + 1])));
            }
        }
        var_18 ^= (((((((arr_7 [14] [14] [14]) ? var_6 : var_13)))) ? ((((((!(arr_4 [i_0] [i_0] [i_0]))) || (((arr_0 [i_0]) <= var_5)))))) : ((max((arr_8 [i_0] [14] [i_0] [i_0]), (arr_8 [i_0] [10] [10] [i_0]))))));
    }
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        arr_12 [3] = ((var_4 != var_4) ? (((arr_5 [i_3 - 1]) ? (arr_5 [i_3 + 2]) : var_3)) : var_14);
        arr_13 [i_3] = ((!((((min((arr_0 [i_3]), (arr_6 [2] [0]))) - ((((!(arr_1 [i_3] [i_3]))))))))));
        arr_14 [i_3] = (min(((min(-7511, 41))), -var_4));
    }
    var_19 = -var_13;
    #pragma endscop
}
