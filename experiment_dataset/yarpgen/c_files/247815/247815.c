/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 32704;
    var_14 |= var_7;
    var_15 = ((16 ? (!var_5) : 70));

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_16 |= ((((((1 != ((59180 ? 2147352576 : -35)))))) != (max((max(var_8, var_11)), var_2))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_17 |= ((((~(arr_5 [i_0 - 2]))) <= 1091203249));
            arr_6 [i_0] [i_0] [i_0] = (((((~(max(var_8, (arr_3 [i_0] [i_0] [i_1])))))) ? var_6 : (max((arr_3 [i_0] [i_1] [i_1]), (arr_0 [i_0 - 1])))));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_10 [i_0] = ((min(var_2, 9223372036854775807)));
            arr_11 [i_2] [i_2] [i_2] = (((arr_9 [i_0 - 2] [i_0 - 1]) != (min(var_3, var_8))));
        }
        arr_12 [i_0] = var_5;
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        var_18 = (min((((arr_13 [i_3 + 1]) || (arr_13 [i_3 + 1]))), (!-104)));
        arr_15 [i_3] = (((-(arr_7 [i_3] [i_3 + 1]))));
        var_19 |= (min((max((max(760196846, 59180)), ((min(var_6, var_5))))), ((((arr_13 [i_3]) ? var_11 : (arr_13 [i_3]))))));
        arr_16 [i_3] [i_3] = (max((((((arr_1 [i_3] [i_3]) ? 47 : (arr_8 [i_3]))))), (~var_7)));
        arr_17 [i_3] [i_3] = var_0;
    }
    var_20 |= (var_2 | var_11);
    #pragma endscop
}
