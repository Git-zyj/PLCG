/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((((0 ? var_4 : var_1))) ? ((43 ? 1174022378343903225 : 32767)) : (~var_7)))) ? 0 : (min(((var_10 ? 9525902855431789453 : var_0)), ((((-9223372036854775807 - 1) % var_5)))))));
    var_12 = ((var_3 ? var_7 : -5832));

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0]) ? (((arr_1 [i_0]) ? 17272721695365648391 : (arr_1 [4]))) : (!var_2)));
        var_13 = ((2864135140 ? 5615 : -5832));
        var_14 = (arr_1 [i_0 + 1]);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_15 = var_8;
        var_16 = ((-5832 ? (arr_0 [i_1] [1]) : ((max((arr_5 [i_1] [i_1]), ((((arr_2 [i_1]) && var_5))))))));
        arr_6 [i_1] = (((((var_9 < (-55 + var_6)))) == (((((~(arr_5 [i_1] [i_1])))) ? ((229 ? var_2 : 213)) : (arr_1 [i_1])))));
    }

    for (int i_2 = 4; i_2 < 11;i_2 += 1)
    {
        var_17 = min((((-13263 ? 212 : 212))), (arr_9 [i_2]));
        var_18 = (2740106962 ^ -126);
        var_19 = ((((((-(31614 > 3164))) + 2147483647)) << ((((((((var_2 || (arr_1 [i_2]))))) % ((~(arr_9 [i_2]))))) - 1))));
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 15;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_20 = (((!(arr_21 [i_6] [i_3]))));
                        arr_25 [i_3] [i_4] [16] [i_6] = (arr_17 [3] [i_3 - 1] [i_5 + 1]);
                        var_21 = arr_20 [i_5 - 1] [9] [1];
                        var_22 = (arr_17 [i_3] [i_4] [i_6]);
                    }
                }
            }
        }
        arr_26 [6] [i_3] = (arr_19 [i_3 - 2]);
    }
    #pragma endscop
}
