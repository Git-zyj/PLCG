/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = 2558695847;
        var_13 += -114;
    }
    for (int i_1 = 4; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] = var_8;
        var_14 = (arr_1 [i_1 - 3]);

        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            var_15 = (((~1) ^ (min((arr_7 [i_2 + 2] [i_2 + 1] [i_2 + 2]), (arr_7 [i_2 + 2] [i_2 + 2] [i_2 + 2])))));
            arr_9 [i_1] [i_1] = ((~((1736271448 ? (arr_7 [i_1] [i_2] [i_2]) : (arr_0 [i_1])))));
        }
        arr_10 [i_1] &= (arr_4 [i_1 - 2]);
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        arr_18 [i_3] [11] [i_3] = ((min((((!(arr_7 [i_5] [i_3] [i_3])))), (arr_4 [i_1 + 4]))));
                        arr_19 [i_1] [i_1] [i_1] [15] [i_5] = (arr_11 [i_4]);
                        var_16 -= (((~(arr_0 [i_5]))));
                        var_17 = 1736271453;
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        arr_22 [i_6] [i_6] = ((arr_11 [i_6]) / (arr_11 [i_6]));
        arr_23 [i_6] = (~130023424);
        arr_24 [i_6] |= var_6;
        var_18 |= (arr_11 [5]);
    }
    var_19 |= (max((min(var_4, 18446744073579528191)), var_0));
    var_20 = ((var_0 ? var_4 : ((((18446744073579528191 ? var_3 : 130023411))))));
    #pragma endscop
}
