/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_17 = (max((~1966080), (((1966089 || (-508642693199134287 && 1966094))))));
        var_18 = (~var_10);
        var_19 = ((!((min(65535, (((199 != (arr_1 [i_0 + 2])))))))));
        var_20 = (min((((2147483647 ? (arr_0 [i_0 + 3]) : 90))), var_1));
        arr_2 [3] [i_0 + 3] = 1;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_21 = 1966094;
        arr_5 [i_1] = ((1 ? (((arr_4 [i_1]) ? var_9 : (arr_0 [i_1]))) : 1966069));
        var_22 = ((68 ? (arr_4 [i_1 + 1]) : 71));
        arr_6 [i_1] = ((arr_3 [i_1 - 1]) ? var_7 : 0);
    }
    for (int i_2 = 4; i_2 < 10;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            var_23 = (~3994581320);
            arr_12 [i_3] [5] [i_2] = (((1 ? -1198097064 : 4293001202)));
            arr_13 [i_2] [i_2] [i_2] = 3492006383;
            arr_14 [i_2 - 2] = ((((((arr_9 [i_2] [i_3 + 1] [i_2]) ? 2218465524 : (arr_8 [i_2] [i_3])))) ? var_3 : (~3492006373)));
        }
        arr_15 [i_2 + 2] = (arr_1 [i_2 - 1]);
        arr_16 [i_2] [i_2] = (0 <= 1966094);
    }
    for (int i_4 = 4; i_4 < 9;i_4 += 1)
    {
        arr_19 [i_4 - 4] [i_4 - 4] = (((arr_9 [i_4 - 3] [i_4 - 1] [i_4 - 2]) ? (max((var_0 | 7296), (arr_9 [i_4] [i_4] [i_4 - 4]))) : (((arr_18 [i_4 + 1]) * (arr_18 [i_4 - 2])))));
        arr_20 [i_4 - 1] [0] = (arr_3 [i_4]);
        arr_21 [i_4] = min((min(1966094, (arr_10 [i_4 - 2] [i_4 - 3]))), (max(802960924, (arr_9 [i_4 - 2] [i_4] [1]))));
        arr_22 [i_4 - 1] = (((!var_7) || (!1)));
    }
    var_24 *= (min((((-6365833782803827357 >= 4293001203) << (var_2 + 4154998479509934777))), var_4));
    #pragma endscop
}
