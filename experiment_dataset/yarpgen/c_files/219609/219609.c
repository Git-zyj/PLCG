/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(14, 2285433083810755638))) && ((((var_5 ? var_1 : 8520884275308658269))))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = 1;
        arr_4 [i_0] = ((~(2288815006 - 167358952)));
    }
    #pragma endscop
}
