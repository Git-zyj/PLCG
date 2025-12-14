/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_10 = 14285788038514240436;
        arr_2 [i_0] [i_0] &= ((42616 < (-63 <= 13)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_11 = ((64 > (42638 * 13)));
        var_12 -= (143 >> (42642 || -35));
    }
    var_13 += 29061;
    #pragma endscop
}
