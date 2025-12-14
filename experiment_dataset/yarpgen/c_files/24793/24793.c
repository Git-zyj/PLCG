/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = 1;
        arr_5 [i_0] = 1;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_18 = (((((arr_6 [i_1]) ? 536870656 : (((min(8496, 1)))))) < 3758096639));
        var_19 = (min(var_19, 1));
        var_20 = (max(var_20, ((((var_15 ? (((1 >> (var_1 - 2181036677))) : var_11)))))));
    }
    var_21 = -78;
    #pragma endscop
}
