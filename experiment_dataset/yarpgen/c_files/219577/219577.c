/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 229619647;
    var_19 = (max(var_6, var_6));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_20 = (min(var_20, ((max(((((max(var_0, var_1)) & (arr_0 [i_0] [i_0])))), (min(((((arr_1 [i_0]) >> (1695145359 - 1695145332)))), (4076547041 & 18014398509481982))))))));
        var_21 = max(((max(144, 1))), (134 - 2269216335));
        var_22 |= (min(var_10, (arr_2 [i_0])));
        var_23 = (min((max(var_4, var_16)), (min((min((arr_2 [15]), 4294967295)), 0))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_24 = (~4076547041);
        var_25 = (((min((((var_1 ? 46 : -33))), (min(1, 3482849965)))) ^ (((max(-91, -35))))));
        var_26 &= (max(((max((-2147483647 - 1), var_15))), (max(((min(549260941, var_0))), 1816409419))));
    }
    #pragma endscop
}
