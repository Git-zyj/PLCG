/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_5 ? ((33962 ? (var_1 * var_6) : 1996071153)) : (~var_8)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = var_9;
                var_12 = ((((max(31573, 25534)))) & ((((18446744073709551615 >> (var_5 + 181))) ^ (1 ^ var_3))));
                arr_7 [i_0] [i_1] = (((((var_5 ^ 1363769462) >> (31573 - 31554))) & (((min(var_6, (((arr_3 [i_0] [i_0]) <= (arr_1 [i_0])))))))));
            }
        }
    }
    var_13 = (max(((33962 + (max(1996071153, 0)))), var_1));
    #pragma endscop
}
