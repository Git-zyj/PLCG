/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (arr_2 [i_0]);
        arr_5 [i_0] [i_0] = (max(-1711711756, 63));

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            arr_9 [i_0] [i_0] = (min((arr_3 [i_0] [i_0]), (min(((((arr_7 [i_0] [i_0]) ? (arr_6 [i_0] [i_0]) : (arr_1 [i_0])))), -8921250391601987310))));
            var_20 = (((min((min(var_12, 138)), (arr_3 [i_1 + 3] [i_1 + 3]))) & (arr_6 [i_0] [11])));
            arr_10 [i_0] [1] [i_1] = (+-8921250391601987311);
        }
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_21 = (((((max((arr_13 [i_2] [i_2]), var_10)))) ? 56 : ((max((arr_8 [i_2] [i_2] [i_2]), (arr_8 [i_2] [i_2] [i_2]))))));
        arr_14 [i_2] [i_2] = min(-2062152590, 193);
        var_22 = (arr_3 [i_2] [7]);
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_23 = (193 / 8921250391601987310);
        var_24 *= (arr_1 [i_3]);
    }
    var_25 = var_11;
    var_26 = -72;
    var_27 *= var_3;
    #pragma endscop
}
