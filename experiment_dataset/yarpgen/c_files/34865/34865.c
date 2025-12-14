/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1794783790;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_11 = ((((((255 >= (arr_0 [10]))))) < ((~((0 ? 1 : (arr_0 [i_0])))))));
        var_12 = (((-107 ^ 3827447799) && 3827447799));
        arr_2 [i_0] = ((((((max(3827447799, (arr_1 [i_0 - 2])))) ? 13230683027893254432 : 115)) / (~21281)));
        arr_3 [i_0] = 467519496;
    }
    var_13 = var_8;
    #pragma endscop
}
