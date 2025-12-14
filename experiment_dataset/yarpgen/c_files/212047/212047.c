/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -281466386776064;
    var_11 &= 2492499039;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_12 = (arr_1 [i_0]);
        arr_2 [i_0] = ((!(((~(arr_1 [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_13 = (max(var_13, ((((~(arr_6 [i_1]))) & (arr_6 [i_1 - 2])))));

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                arr_9 [i_1] [i_2] [i_3] = (arr_5 [18] [i_3]);
                arr_10 [19] [i_2] [i_2] &= (arr_0 [i_1 + 3] [i_3]);
            }
            arr_11 [i_2] [15] = arr_3 [i_1] [i_2];
        }
        arr_12 [i_1 + 2] = (arr_0 [i_1] [i_1]);
        arr_13 [i_1 + 1] [i_1] |= ((+(((arr_8 [i_1 + 2] [15]) ? (arr_8 [i_1 + 2] [i_1 + 3]) : (arr_8 [i_1 + 2] [14])))));
        var_14 ^= (365579520 / (((arr_7 [i_1 + 3] [i_1 + 2]) ? (arr_5 [i_1] [i_1]) : var_4)));
    }
    for (int i_4 = 3; i_4 < 18;i_4 += 1)
    {
        arr_17 [16] = (arr_8 [i_4 + 1] [i_4]);
        arr_18 [i_4] [i_4] = 2492499039;
    }
    var_15 = max(3839696972, (min((var_6 ^ -6513772568531018934), var_3)));
    #pragma endscop
}
