/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_2 / var_0);
    var_17 = (max(var_17, var_15));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = (min(var_18, ((((arr_0 [i_0] [i_0]) ? (((!15114256642724301953) ? (((arr_1 [9]) ? var_2 : (arr_0 [i_0] [i_0]))) : (min(var_8, var_3)))) : var_0)))));
        var_19 = (min(var_19, 15114256642724301936));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_1] [i_1] [i_1] = var_3;
            arr_7 [i_0] = (arr_2 [i_0]);
        }
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_20 = (arr_8 [i_2] [i_2]);
        var_21 = arr_9 [i_2];
        var_22 = (((arr_8 [i_2] [i_2]) ? ((-4562345562936099654 ? (arr_9 [i_2]) : var_2)) : (min(-4562345562936099654, (arr_8 [i_2] [i_2])))));
    }
    #pragma endscop
}
