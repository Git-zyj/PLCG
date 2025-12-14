/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (-1 ^ 3811530376158471429);
        var_16 = (min(var_16, 14906037859777342488));
        var_17 |= ((((3803621922473868332 - (arr_0 [14]))) != 0));
    }
    var_18 = var_6;
    var_19 = 14441431645763326937;
    #pragma endscop
}
