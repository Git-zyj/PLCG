/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((min(4029529877, 18446744073709551615))));
    var_20 = var_10;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((max(1, 7) | 2147483647))));
        arr_3 [i_0] [i_0] = (max((((min(2023342085997581292, -45)))), var_16));
        arr_4 [i_0] = (4 ? (arr_0 [i_0]) : 65535);
    }
    #pragma endscop
}
