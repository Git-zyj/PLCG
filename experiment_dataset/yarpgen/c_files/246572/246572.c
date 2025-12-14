/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = (min(var_12, (arr_1 [i_0])));
        arr_3 [i_0] = 229;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_7 [17] [17] = -725815045;
            var_13 = var_7;
        }
        arr_8 [i_0] = var_11;
    }
    for (int i_2 = 4; i_2 < 16;i_2 += 1)
    {
        var_14 = (((min((((var_7 ? 5 : var_2))), var_1)) | ((((24856 ^ var_4) * 27)))));
        arr_11 [i_2] = (min((var_5 == 38418), (((arr_9 [i_2 - 4]) ^ (arr_9 [i_2])))));
    }
    var_15 = var_11;
    #pragma endscop
}
