/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_18 *= 1;
                var_19 |= (((((arr_2 [i_0 + 4] [8]) ? (arr_0 [i_0] [i_0]) : (1 >> 1))) << (((arr_2 [i_1 - 1] [12]) & (arr_2 [i_0] [0])))));
            }
        }
    }
    var_20 = max(var_8, (min((min(var_7, -3343520932422788560)), var_13)));
    #pragma endscop
}
