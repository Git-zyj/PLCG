/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = (min(var_14, 58));
        arr_2 [i_0] = -29416;
    }
    var_15 |= (max((((var_0 & 0) ? ((max(var_5, -3))) : (min(var_7, var_9)))), (~8877043580006861743)));
    var_16 = (min(var_16, (((var_9 >= (((((1808236577304278768 ? 230 : var_5))) ? 17891712921522612892 : -1)))))));
    #pragma endscop
}
