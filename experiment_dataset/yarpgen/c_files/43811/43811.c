/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((~((max(var_7, -9135)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = ((((-(arr_0 [i_0])))) ? 2147483646 : ((~(arr_0 [i_0]))));
        var_12 = (((4713081572058160161 * 11115636470284616232) ? (min(18446744073709551609, 1)) : 43));
        arr_2 [20] = (-28036 ? (((-1 + (arr_1 [i_0])))) : (arr_1 [i_0]));
        var_13 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_14 = (arr_0 [1]);
                        var_15 = (((arr_1 [i_1 - 1]) <= (arr_9 [i_1] [i_1 - 1] [i_1] [i_1 - 1])));
                        var_16 = (((arr_0 [i_2]) ? 11374436682917490473 : 1));
                    }
                }
            }
        }
        var_17 = (var_3 - ((((arr_6 [i_1]) ? var_7 : var_0))));
    }
    #pragma endscop
}
