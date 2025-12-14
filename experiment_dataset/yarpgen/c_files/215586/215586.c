/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= (arr_1 [i_0 - 1]);

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_1] [i_1] [i_0] = ((~(arr_3 [i_0] [i_1])));
            arr_6 [i_0] [i_0] = 103;
        }
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            arr_10 [i_0] [i_2] = ((var_12 / (arr_4 [i_0 - 1])));
            var_16 = var_14;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_17 = (((((18446744073709551615 ? 0 : 2106590208))) || 13063190743287131110));
                            var_18 = -2;
                            arr_17 [i_0] [i_2] [i_2] [i_3] [i_3] [i_5] = (arr_1 [i_0 - 1]);
                        }
                    }
                }
            }
            var_19 = (arr_7 [i_0] [i_2]);
            var_20 = var_1;
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_21 = (!(arr_1 [i_0 - 1]));
            var_22 = var_6;
            var_23 = arr_11 [i_0 - 1] [i_0 + 1];
        }
        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            var_24 = (arr_13 [i_0] [i_0] [i_7 + 1] [i_7]);
            arr_24 [i_0] [i_0] [i_7] = (arr_12 [i_0] [i_7 + 1] [i_7 + 1] [2]);
            arr_25 [i_0] [i_0] = (!-491520);
        }
        var_25 = (((~-309908617) + (arr_3 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 19;i_8 += 1)
    {
        arr_28 [i_8] = (arr_27 [i_8] [i_8 - 1]);
        var_26 = (max(var_26, (((~(arr_27 [i_8 + 1] [i_8 + 1]))))));
        arr_29 [i_8 + 1] = ((((((arr_27 [i_8] [i_8]) ? 16 : 226))) ? -12479 : (var_9 != var_4)));
    }
    for (int i_9 = 3; i_9 < 15;i_9 += 1)
    {
        arr_34 [i_9] = (min(-789763333005517959, ((((arr_19 [i_9 + 2] [i_9 - 1] [i_9 + 2]) ? var_7 : (((arr_31 [i_9]) - 0)))))));
        var_27 = (max(var_27, (((((!(var_14 - 8880651633247590422))) ? ((min((arr_23 [i_9 - 1] [i_9 + 2]), (arr_26 [i_9 - 3] [i_9 + 1])))) : (1 > -2106590209))))));
        var_28 = (max(var_28, (((~((138 ? (arr_26 [i_9 - 2] [i_9]) : 5)))))));
    }
    var_29 = var_14;
    #pragma endscop
}
