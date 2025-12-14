/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min(var_10, var_8))) && var_0));
    var_15 = (((min((var_5 - 2238129414305223107), (!var_10))) != ((max((min(1497437425, var_12)), (var_11 < var_8))))));
    var_16 = ((var_7 % var_13) ? (var_6 ^ var_5) : (~var_9));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = ((+(((var_2 + 2147483647) << (((var_11 % var_5) - 115))))));
        var_18 = -var_2;
        var_19 = (((min(((1 ? 16 : -16)), (arr_0 [i_0])))) <= (min((~var_9), ((var_5 ? 1 : var_13)))));
        arr_2 [i_0] [i_0] = (((~((var_0 ? var_11 : 239)))));
        var_20 = (((112 || 112) || ((max(var_7, (min((arr_0 [i_0]), 112)))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_21 = ((-((~(var_5 && var_10)))));
        var_22 = (min(((~(arr_3 [i_1]))), (max(var_6, 4366881544818657935))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_7 [i_2] = (((((var_3 ? 1 : (arr_6 [i_2]))) == ((var_1 ? 239 : var_8)))));
        arr_8 [i_2] = ((((((123 || (arr_4 [i_2] [i_2]))) && (((arr_3 [i_2]) && var_1)))) && (1 || 1)));
        arr_9 [i_2] [i_2] = (max(((min(var_6, (arr_5 [i_2] [i_2])))), (max(var_8, 15617572706185954043))));

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_13 [i_2] [i_2] [i_2] = (--1075938028);
            arr_14 [i_2] [i_2] [i_3] = (arr_12 [i_2]);
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_23 = ((~(arr_6 [i_4])));
            arr_19 [i_2] [i_4] [i_2] = (((var_2 - (var_13 - var_3))) | (~var_0));
            var_24 = (((((-(arr_12 [i_4])))) >= var_2));
        }
    }
    var_25 = (max((((var_8 * 1) ? ((var_1 ? var_6 : var_5)) : var_3)), ((((var_10 / var_10) ? var_9 : (var_8 > var_5))))));
    #pragma endscop
}
