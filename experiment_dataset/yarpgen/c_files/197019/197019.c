/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (max(var_4, 7786549038929174285));

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((((arr_1 [i_0 + 3]) ? (arr_0 [i_0 - 2]) : var_7)), (((arr_1 [i_0 + 1]) << (((arr_0 [i_0 + 1]) + 1739746636))))));
        arr_3 [12] |= (((arr_0 [i_0]) ? var_0 : ((((((arr_0 [i_0]) && 11815572054995067477)) ? ((max(118, 0))) : var_5)))));
        var_11 = 6047969374168717257;
    }

    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        var_12 |= (min(((((arr_0 [i_1 + 2]) >= 3699472403680856291))), (max(var_7, var_2))));

        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_13 = (min((max(3, 7786549038929174274)), var_7));
                var_14 *= (min(-7786549038929174279, (!8191)));
                var_15 = (min(var_15, (((-65535 ? (((!(arr_9 [i_2] [i_3])))) : ((((var_0 > var_3) || var_0))))))));
                var_16 *= 32824;
                arr_13 [i_1] [i_2] [i_3] = ((~((min(-20774, 1)))));
            }
            arr_14 [i_2] [i_2] [i_2 + 1] = ((((((min(1, 250))) - ((1 ? var_4 : var_8)))) == (18 >= 1)));
        }
        var_17 = ((((1 ? ((max(80, 1))) : (~0)))) % -7339655340583779959);
    }
    #pragma endscop
}
