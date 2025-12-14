/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (max(17, (max(var_1, (arr_0 [i_0])))));
        arr_3 [2] &= 13964;
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_12 = (~(((arr_6 [i_1 + 1] [i_1 + 1]) ? (arr_5 [i_1] [i_1]) : (((arr_4 [i_1]) ? 1221949815 : var_7)))));
        arr_7 [1] [1] |= 0;
    }

    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                var_13 = (((arr_8 [i_2 + 2]) ? (arr_8 [i_2 - 1]) : (arr_8 [i_2 + 2])));
                arr_15 [i_2] = ((((!(((11 ? 237 : (arr_10 [i_2] [i_2] [i_2])))))) || ((!(((var_7 ? var_6 : var_3)))))));
                var_14 = (arr_12 [i_2] [i_2 + 2]);
            }
            var_15 += (max((min((arr_11 [i_2 - 1]), (arr_11 [i_2 + 2]))), (((!(arr_10 [i_2 + 2] [i_3] [i_2 + 2]))))));
            arr_16 [i_2] = (!6983307014824733829);
        }
        var_16 -= (max(253, (((max(3420320092, (arr_12 [i_2 + 2] [i_2 - 2])))))));
        var_17 -= ((95994320 >= (min(var_8, ((((arr_11 [i_2]) * -30330)))))));
        var_18 *= (arr_13 [i_2 + 2]);
    }
    #pragma endscop
}
