/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    var_18 = 1;
    var_19 = (!var_12);

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_0 + 1] = (max(((!(arr_4 [i_1 - 2] [i_1 - 2] [i_0 - 1]))), ((!(1984 || 31448)))));
            var_20 = (var_15 > var_14);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_11 [i_2] [i_0 - 1] = (!(arr_0 [i_2]));
            arr_12 [i_0 - 2] = var_13;
            var_21 = (arr_7 [i_0 - 2] [i_0 - 2]);
            var_22 = (min(var_22, (23680 * 314721345681166137)));
            var_23 ^= (arr_5 [i_0] [i_0] [i_0]);
        }
        var_24 = (min(var_24, var_10));
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_28 [i_7 + 1] [i_5] [i_5] [i_4] [i_3 + 1] = arr_23 [i_3 + 1] [i_4] [i_5];
                                arr_29 [i_3] = ((-16405 ? 1 : (min((18132022728028385481 != 16), (arr_16 [i_3 - 1] [i_3 - 1])))));
                            }
                        }
                    }
                    var_25 = (max(var_25, (max(var_5, 63547))));
                    var_26 = var_3;
                    var_27 = (arr_14 [i_3]);
                }
            }
        }
    }
    #pragma endscop
}
