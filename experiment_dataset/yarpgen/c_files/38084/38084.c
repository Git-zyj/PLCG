/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (-9223372036854775792 & -117);

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_11 = ((-(var_4 ^ 0)));
        var_12 ^= (max(((21141 ? 31 : 7)), var_9));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_13 = 190;
        var_14 ^= var_6;
        arr_5 [i_1] = 13122;
        arr_6 [i_1] = -var_9;
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        var_15 = (((((~(-3806968902725932597 != -21142)))) && (((3396 ? 15652 : 190)))));
        arr_9 [i_2] [i_2] = (~-var_2);
    }
    var_16 = var_6;
    #pragma endscop
}
