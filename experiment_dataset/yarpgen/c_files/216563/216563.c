/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_7;
        var_18 = 134217727;
        var_19 |= 24179;

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_20 -= ((((-134217727 + 2147483647) >> (134217727 - 134217701))));
            arr_5 [i_1] [i_0] = 439422438;
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_9 [i_2] [i_2] = (((((var_14 - 1859198377) + 2147483647)) << (var_10 - 243)));
            var_21 = 1;
            var_22 ^= var_9;
        }
    }
    for (int i_3 = 4; i_3 < 16;i_3 += 1)
    {
        var_23 |= 134217743;
        var_24 = var_1;
        var_25 = -439422422;
    }
    var_26 -= 863710956;
    #pragma endscop
}
