/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((min(((var_6 ? 11573421673918124627 : var_7)), var_12)), (min((((var_7 ? 1920 : var_7))), 10798620675302813385))));
    var_14 = var_9;
    var_15 = (!61555);
    var_16 |= var_5;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [10] [i_0] = (~var_12);
        arr_3 [i_0] [i_0] = (min((arr_0 [i_0]), (min(((max((arr_0 [i_0]), (arr_0 [i_0])))), (max(var_5, var_12))))));
    }
    #pragma endscop
}
