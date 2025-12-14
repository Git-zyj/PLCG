/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_6 ? (var_4 * var_7) : var_0)) * (var_11 > var_3)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (var_1 ? -2702552007147118797 : (arr_0 [i_0]));
        arr_3 [i_0] = -1;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    {
                        arr_14 [i_2 + 2] [i_4 - 2] [i_2] [i_4 - 2] = (arr_0 [i_3 + 1]);

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_13 = (arr_10 [i_4] [i_2] [i_3 - 1]);
                            var_14 ^= var_0;
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_15 = ((-((var_5 ? 219 : var_11))));
                            arr_21 [i_1] [i_6] [0] [8] [8] |= (arr_4 [i_3]);
                            var_16 = var_9;
                        }
                    }
                }
            }
        }
        arr_22 [i_1] = ((1 + var_7) ? (arr_10 [3] [1] [i_1]) : -32744039);
        var_17 = (min(var_17, (((180 ? (arr_8 [i_1] [i_1] [i_1]) : ((((arr_7 [i_1]) ? -6578 : var_2))))))));
    }
    for (int i_7 = 2; i_7 < 14;i_7 += 1)
    {
        var_18 = 119;
        var_19 = max(((48 ? (arr_1 [i_7 + 1]) : 3)), ((252 ? 26 : 263315172)));
        var_20 = ((~(max(202, 966553542))));
        arr_25 [8] [i_7 - 1] &= (((~-1208980663111057019) ? ((min(3826009769, (arr_0 [i_7 + 1])))) : -var_9));
    }
    var_21 = ((((min(((max(76, 1))), (~35614)))) ? var_5 : ((-var_6 + ((var_7 ? var_10 : var_3))))));
    var_22 = (min(var_22, var_7));
    #pragma endscop
}
