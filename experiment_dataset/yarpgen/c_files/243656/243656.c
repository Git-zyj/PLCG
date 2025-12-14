/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_21 = var_10;
        var_22 = (min(var_22, 34));
        var_23 = (min(var_23, ((((min(((~(arr_2 [i_0 + 1]))), var_13)) + (min((((20206 > (arr_2 [i_0])))), (((arr_0 [3] [3]) - (arr_1 [i_0]))))))))));
        var_24 = ((31533315139250455 % (arr_2 [17])));
    }
    #pragma endscop
}
