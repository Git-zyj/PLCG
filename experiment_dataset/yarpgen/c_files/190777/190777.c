/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        arr_2 [i_0 + 3] = (65524 / 14893);
        arr_3 [i_0 + 3] = ((1 > (10 & -6683449245506846279)));
    }
    var_11 = ((0 * (((11 >> (802663127 != 1))))));
    var_12 = -777286581653348510;
    #pragma endscop
}
