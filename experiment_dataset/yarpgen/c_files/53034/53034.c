/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_9;
    var_12 = var_1;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = var_1;

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_0] = var_9;
            arr_7 [i_0 + 1] [i_0] = ((var_5 ? 4294967295 : 42466));
            var_13 = ((-(arr_4 [i_0 + 1] [i_0 - 1] [i_0 + 2])));
        }
        var_14 = arr_1 [i_0 + 2] [i_0];
        arr_8 [i_0] = (arr_5 [i_0] [i_0 - 2] [i_0 - 2]);
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_15 += (!var_5);
        var_16 = (min(var_16, ((((arr_10 [i_2]) ? 42459 : (27788 % 127))))));
        var_17 = (max((-127 - 1), ((var_7 ? 42456 : -1191051314816436812))));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        arr_17 [i_3] = ((7941 >= -1191051314816436804) ? var_6 : var_7);
        arr_18 [i_3] [i_3] = ((((((arr_14 [i_3]) ? (arr_14 [i_3]) : (arr_14 [i_3])))) ? (((arr_14 [i_3]) ? (arr_14 [i_3]) : (arr_14 [i_3]))) : ((var_7 ? var_3 : (arr_14 [i_3])))));
        arr_19 [i_3] = (var_9 == 42450);
    }
    var_18 = var_8;
    #pragma endscop
}
