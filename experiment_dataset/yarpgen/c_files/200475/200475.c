/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(0, 13506299574309636786));
        var_11 = (min(var_11, 15164063311196414902));
        var_12 = (max(var_8, (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_13 = (max(var_13, var_4));
        var_14 = (min((((var_9 < (min((arr_6 [i_1] [i_1]), var_1))))), 3204575171));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_15 = (arr_8 [i_2] [i_2]);
        var_16 = var_3;
    }

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            var_17 = (-124 * 1);
            var_18 = (min(var_18, var_2));
            arr_15 [i_3] = (((-9223372036854775807 - 1) ? 10993254734603668446 : 1878194651));
            var_19 = max(((var_4 << (-var_10 - 86))), (!var_0));
        }
        var_20 = (max((((var_9 ? (arr_13 [i_3]) : (arr_13 [i_3])))), 1878194627));
        arr_16 [i_3] [i_3] = (((min((var_8 & var_4), var_4)) + (arr_2 [i_3])));
    }
    #pragma endscop
}
