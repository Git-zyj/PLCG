/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            var_19 = (max(var_19, var_10));
            arr_5 [i_0] [i_0] = ((var_17 ? (min(0, (arr_0 [i_0] [i_1]))) : ((var_8 * (min((arr_0 [i_1 - 2] [i_1]), 0))))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            var_20 = var_14;
            var_21 ^= var_5;
        }
        var_22 = (arr_8 [i_0 - 2] [i_0 - 2]);
        var_23 ^= ((((min(var_11, (((39865 < (arr_8 [i_0] [i_0]))))))) + var_15));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_24 = 127;
        arr_11 [11] = ((((1 ? 3705923755 : (var_7 / 149))) * (((min(var_4, var_17))))));
        var_25 = (max(var_25, 62132));
    }
    var_26 = (var_2 == 1);
    #pragma endscop
}
