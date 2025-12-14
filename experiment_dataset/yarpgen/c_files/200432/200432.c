/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = min((arr_2 [6] [i_0]), (max((min(0, (arr_1 [i_0] [i_0]))), -126)));
        var_16 = (min((min((arr_1 [i_0] [i_0]), (max((arr_2 [i_0] [9]), (arr_1 [i_0] [i_0]))))), (arr_0 [i_0])));
        var_17 = (min((arr_0 [i_0]), (min(14498157463450938580, (arr_2 [1] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_18 = 0;
        var_19 -= 255;
        var_20 ^= -25;
    }
    var_21 = (max(0, var_14));
    var_22 = (min(var_22, (min(255, (min(-448681404, -12051))))));
    #pragma endscop
}
