/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((((var_9 > var_2) ? var_6 : (var_6 <= var_11)))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((18446744073709551615 ^ ((((!(arr_0 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = (((var_6 << (((arr_1 [i_0]) + 89)))));
                    var_16 = (~7);
                    var_17 = (min(var_17, ((((827180439330102147 || (arr_3 [i_0] [i_1] [i_0]))) ? (5 > var_11) : (min(1, (arr_3 [i_0] [11] [11])))))));
                    arr_9 [4] [4] [i_2] [7] = arr_1 [i_0];
                }
            }
        }
        arr_10 [i_0] &= (arr_1 [i_0]);
        arr_11 [i_0] [i_0] = (((arr_3 [i_0] [i_0] [i_0]) * 19));
        arr_12 [i_0] [i_0] = ((-(arr_6 [i_0])));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        var_18 ^= (~0);
        arr_15 [0] = (((arr_14 [i_3 + 1]) << (((arr_14 [i_3 + 1]) - 87))));
    }
    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {
        var_19 = var_9;
        var_20 = (max(var_20, (((!(arr_18 [i_4 + 3]))))));
    }
    var_21 = (!var_12);
    #pragma endscop
}
