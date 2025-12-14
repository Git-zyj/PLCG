/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 += (max(((((1 ? 4503599627304960 : 4503599627304971)) + var_13)), (((min(-4503599627304979, 4503599627304964)) + 38))));
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) != ((0 ? -23346 : 4294967292))));
    }
    var_15 = (min(((((min(134086656, 89))) % (max(4503599627304970, 196608)))), 1));
    #pragma endscop
}
