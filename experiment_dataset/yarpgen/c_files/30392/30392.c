/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = (~var_12);
    var_15 = (~var_10);
    var_16 = -1367934178;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_17 = ((var_10 ^ (arr_0 [i_0 - 1])));
        var_18 -= (arr_1 [i_0] [i_0 - 1]);
        arr_3 [i_0] [6] = var_1;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_19 = 1;
        var_20 = ((!((max(1, (max(1, 8191)))))));
        var_21 &= ((+((232 ? (arr_4 [i_1]) : var_7))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_22 = (max((((!(arr_5 [i_2] [i_2])))), var_11));
        var_23 = (arr_4 [0]);
        var_24 &= ((((((arr_7 [i_2]) ? ((((arr_4 [i_2]) ? var_6 : -26631))) : 1727943246))) || ((((arr_5 [i_2] [i_2]) ? 26631 : (arr_5 [i_2] [i_2]))))));
    }
    #pragma endscop
}
