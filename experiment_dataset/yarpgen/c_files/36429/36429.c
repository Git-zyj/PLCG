/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 0;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (((var_6 < var_2) ? var_6 : (max((max(1596262842, 54903)), var_8))));
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] = var_5;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_8 [i_1] = (((((~(arr_0 [i_1])))) ? (arr_7 [i_1]) : ((~(arr_1 [i_1])))));
        arr_9 [i_1] = ((arr_5 [i_1]) << ((((-(arr_6 [i_1] [i_1]))) + 95)));
        arr_10 [i_1] = 65530;
        arr_11 [i_1] = 8086574576026484720;
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_15 [i_2] = ((min(var_7, 32756)));
        arr_16 [i_2] = (((10360169497683066895 ^ 2147483647) ? ((((!(arr_13 [i_2]))))) : ((((-1596262830 + 2147483647) >> (((arr_7 [3]) - 36160)))))));
        arr_17 [i_2] [i_2] = ((arr_14 [i_2]) ? (((-29930 <= (((!(arr_5 [i_2]))))))) : (((-1470214506 + 2147483647) << ((((((4177482327 ? -29930 : 29929)) + 29960)) - 30)))));
    }
    #pragma endscop
}
