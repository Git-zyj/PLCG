/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_4 [8] = (((((arr_1 [i_0 + 1]) << (((arr_0 [i_0]) - 33647))))));
        arr_5 [i_0 - 2] = (((-98 + 2147483647) >> 14));
        arr_6 [i_0] [9] = (((arr_2 [i_0 - 1] [i_0 - 1]) ? ((((arr_2 [i_0 - 2] [i_0 + 2]) <= (arr_2 [i_0 - 2] [9])))) : ((min(-98, 24)))));
    }
    var_11 = var_3;
    var_12 = (min((((-24 == ((max(-20, 23)))))), var_1));
    #pragma endscop
}
