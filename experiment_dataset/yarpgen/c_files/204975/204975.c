/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0 - 3] = (((((arr_0 [i_0 + 1]) >> (var_11 - 3440317576)))) && 116);
        arr_3 [i_0] [i_0 - 1] = arr_0 [1];

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_15 ^= (arr_5 [i_0] [4]);
            arr_8 [i_1] = ((((((arr_1 [i_0] [13]) % var_6))) ? (arr_1 [i_0 - 2] [i_0]) : (var_7 >> var_2)));
        }
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            arr_11 [i_0] [i_0] [i_2] = 3597;
            arr_12 [i_2 + 2] [i_2 + 2] [i_2] = (arr_9 [i_0] [i_2]);
            arr_13 [i_0] [i_2] [i_2] = (((arr_5 [i_0 - 1] [1]) <= (arr_5 [i_0 - 2] [0])));
            var_16 = (arr_1 [i_0 - 2] [i_0 - 1]);
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_17 = (!139);
            var_18 = arr_1 [i_3] [i_3];
        }
        var_19 = (arr_16 [i_0]);
    }
    for (int i_4 = 1; i_4 < 10;i_4 += 1)
    {
        var_20 = ((-(((((arr_19 [i_4]) > (arr_10 [i_4])))))));
        var_21 = (min(var_21, (((~((min((arr_6 [i_4 + 1] [i_4 - 1]), (arr_6 [i_4 + 1] [i_4 - 1])))))))));
        var_22 *= ((((-(var_7 ^ 103))) > 34));
    }
    #pragma endscop
}
