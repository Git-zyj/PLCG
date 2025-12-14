/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        var_14 = ((~((min((min(var_7, var_0)), ((min(var_11, var_0))))))));
        arr_3 [i_0] = (!var_12);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_15 = (max(var_15, ((((var_9 ? var_0 : var_10))))));
        var_16 -= var_13;
    }
    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        arr_8 [i_2] = ((((-(max(var_12, var_3)))) / var_6));
        arr_9 [i_2] = ((var_8 * (var_7 < var_7)));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_16 [i_3] = -var_0;
            arr_17 [i_3] = (!var_7);
            var_17 = (!-712236685);
            var_18 = ((((max(var_1, var_11))) < (!241)));
            var_19 = (max(var_19, (((~(max((min(var_11, var_6)), var_3)))))));
        }
        arr_18 [i_3] = -var_12;
    }
    var_20 = var_13;
    #pragma endscop
}
