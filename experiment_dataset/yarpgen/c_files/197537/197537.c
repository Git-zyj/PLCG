/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            var_12 = (arr_2 [i_0] [i_0] [i_0]);
            var_13 = var_11;
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_8 [i_0] [i_0] [i_0] = (max((min((arr_5 [i_0] [i_0]), var_4)), ((max((max((arr_1 [i_0]), (arr_4 [i_0] [i_0] [i_0]))), var_1)))));
            var_14 = var_11;
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_15 = var_8;
            var_16 = (max((min((max((arr_9 [i_0] [i_0]), var_0)), var_10)), (arr_0 [i_0])));
        }
        arr_11 [i_0] [i_0] = (min(var_7, (var_0 % var_9)));
    }
    var_17 = var_10;
    var_18 = var_3;
    var_19 ^= (var_3 / var_9);

    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_20 -= (min((min((((arr_3 [i_4] [i_4] [16]) | var_7)), var_1)), var_2));
        var_21 = (((arr_12 [i_4] [i_4]) ^ var_3));
    }
    #pragma endscop
}
