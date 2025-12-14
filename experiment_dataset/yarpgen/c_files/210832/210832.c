/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_4;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_21 += 4669;
        arr_3 [i_0] = (((max(1874200931, 37946))) ? (arr_2 [i_0]) : 21606);
    }
    #pragma endscop
}
