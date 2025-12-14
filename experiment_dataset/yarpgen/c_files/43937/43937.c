/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= 0;

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_12 = (-127 - 1);

        /* vectorizable */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            var_13 = (((!-332682102) ? (arr_6 [8] [i_0 - 1]) : (arr_6 [12] [i_1 - 1])));
            var_14 *= ((0 ? (arr_2 [i_0 + 1] [i_0 + 1]) : -6489791281835932661));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_10 [i_0] [i_2] = (((arr_9 [i_0]) ? var_1 : var_7));
            arr_11 [i_0] [i_0] = (((arr_5 [i_0 - 1]) != ((var_10 ? 0 : (arr_5 [7])))));
        }
    }
    #pragma endscop
}
