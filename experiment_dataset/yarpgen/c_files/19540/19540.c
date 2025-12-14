/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 = ((-670703633 - (arr_2 [i_0])));
        arr_3 [15] [i_0] = (((2147483647 | 183) ? (arr_0 [i_0]) : ((var_9 ^ (arr_1 [i_0])))));
    }
    var_13 = (max(-8592134275356919826, 106));
    var_14 = 200;
    #pragma endscop
}
