/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_7, var_5));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((min(1, (arr_0 [i_0]))) - -var_8));
        var_11 = (((max(var_1, (arr_0 [i_0]))) >= ((min((4294967295 || var_0), -var_4)))));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_12 = var_4;
        var_13 = (arr_3 [i_1 - 1]);
    }
    for (int i_2 = 4; i_2 < 12;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            arr_9 [i_3] = (1 / var_6);
            var_14 = ((-((~(((arr_1 [i_3 - 1]) ^ 4294967295))))));
        }
        arr_10 [i_2 - 4] = (((min(((~(arr_1 [i_2]))), var_8)) / var_6));
        arr_11 [i_2] = ((~(((1 >= (arr_4 [i_2] [i_2 - 4]))))));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_15 += ((~((-((0 ? -551319336 : var_5))))));
        var_16 = (min(var_16, (((((((max((arr_4 [i_4] [i_4]), 2097088))) ? var_3 : (!var_1))) >> ((((((((arr_3 [i_4]) ? (arr_3 [i_4]) : (arr_1 [i_4])))) ? 55007 : (arr_0 [i_4]))) - 55004)))))));
        arr_14 [i_4] [15] = (arr_3 [i_4]);
        var_17 += (-((var_4 ? 4294967295 : (~var_8))));
    }
    #pragma endscop
}
