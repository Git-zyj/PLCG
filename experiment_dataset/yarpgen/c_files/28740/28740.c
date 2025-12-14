/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 -= (max((((0 < var_3) | (arr_1 [i_0] [i_0]))), ((min((max(-71, 56045)), 1)))));
        var_19 = (arr_0 [i_0]);
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_9 [i_2] [i_2] [14] &= (max((arr_4 [i_1] [5]), 31));
            arr_10 [i_1] = ((min(9519000304715419340, 7)));
            var_20 &= (arr_7 [i_2] [i_2] [i_1]);
        }
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            var_21 |= 2088960;

            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {

                for (int i_5 = 3; i_5 < 21;i_5 += 1)
                {
                    var_22 = (max(var_22, ((min(-47, -82)))));
                    arr_20 [9] [i_1] [i_3] [0] [i_1] [i_5] = (min(((((arr_12 [i_1 + 2] [i_5 + 1] [i_3 - 3]) / -11))), (min((arr_4 [i_4 - 1] [i_5]), (arr_4 [i_4 - 1] [i_4])))));
                }
                var_23 = (min((arr_16 [i_4 - 1] [8] [i_4 - 1] [i_3 + 2] [i_1 + 1]), (arr_16 [i_4 - 1] [18] [i_4 - 1] [i_3 + 2] [i_1 - 1])));
            }
        }
        arr_21 [i_1] [0] = (min(7497076606985102635, (arr_5 [i_1] [i_1 + 2])));
        var_24 -= (arr_6 [i_1 - 1] [i_1 + 2]);
        arr_22 [i_1] [i_1] = (min(-47, ((((min((arr_15 [1] [1]), 9519000304715419350)) >= (arr_18 [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 1] [21]))))));
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        arr_26 [1] = (min((((arr_5 [i_6] [i_6]) - (arr_2 [i_6]))), (min(((((arr_8 [i_6] [i_6] [i_6]) / (arr_17 [i_6] [i_6] [i_6] [13] [i_6])))), (min(-82, 2088960))))));
        var_25 = (arr_23 [i_6]);
        arr_27 [i_6] = 0;
    }
    var_26 = ((((min((min(18446744073709551615, var_11)), ((min(-68, 67)))))) || (62959 < var_0)));
    #pragma endscop
}
