/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            var_18 = (min(var_18, (((+((((~var_2) > 4257245398))))))));
            arr_6 [3] [17] = 245;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_11 [i_2] [i_0] = var_7;

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_19 = (max(var_19, (((4257245416 + (((~(arr_8 [i_0] [i_2] [i_3])))))))));
                arr_15 [i_0] [i_0] |= ((~(arr_1 [i_2])));
            }
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                var_20 ^= (~var_1);
                arr_18 [i_0] [i_4] [i_4] [i_0] = var_7;
            }
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_21 ^= (!var_11);
                var_22 = ((var_16 ? 4257245393 : var_10));
            }
        }
        arr_22 [i_0] = (arr_16 [18] [18] [18] [18]);
    }
    var_23 = (~var_11);

    /* vectorizable */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_24 = var_11;
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 17;i_9 += 1)
                {
                    {
                        arr_35 [i_6] [i_6] [i_8 - 1] [i_7] = var_6;
                        var_25 = (((arr_30 [i_7] [i_6]) / (arr_30 [i_6] [i_7 - 1])));
                        var_26 = (arr_8 [i_9 + 1] [i_7] [i_7 + 2]);
                    }
                }
            }
        }
        arr_36 [i_6] = (((~var_6) ? ((920409050 ? (arr_25 [i_6]) : (arr_21 [i_6] [i_6] [i_6]))) : 0));
    }
    #pragma endscop
}
