/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = ((-((((arr_1 [3]) == (arr_1 [i_0]))))));
        var_21 ^= (((((var_2 ? var_6 : var_18))) ? (arr_1 [i_0]) : -37076));
        var_22 = ((-((max(115, 1015808)))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_23 = ((~(arr_0 [i_1 - 1] [i_1])));
            var_24 = var_16;
            var_25 = ((!(arr_2 [i_0] [i_1 - 1])));
        }
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_26 = ((~(min(-var_0, -var_18))));
                        var_27 *= ((~(((arr_5 [i_3]) & (arr_0 [i_2 + 3] [i_2])))));
                        arr_16 [i_0] [i_2 - 3] [i_3] [i_2 - 3] [i_2 - 2] [i_0] = var_8;
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                var_28 ^= (max(var_13, (var_1 ^ var_13)));
                var_29 = (min(var_29, ((max((max((((1 ? 1 : 1451140072))), (((arr_20 [i_5] [i_6] [i_6]) ? var_2 : 1)))), (((!((max(var_9, -1594856371)))))))))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_30 -= (arr_4 [i_7 - 1] [i_5 - 1]);

                            for (int i_9 = 0; i_9 < 1;i_9 += 1)
                            {
                                var_31 = (max(var_31, (((190547505 ? -27 : (-112 >= 1089675413))))));
                                var_32 = (min((((8998849769434077522 ? var_2 : -32738))), ((-(~var_2)))));
                                var_33 -= 197182336;
                            }
                            for (int i_10 = 0; i_10 < 14;i_10 += 1)
                            {
                                var_34 = (max((min(1594856379, (arr_19 [i_5 - 1] [i_7 - 1] [i_7 - 1]))), ((max((arr_9 [i_5 - 2]), (arr_9 [i_6]))))));
                                var_35 = (((max(1015808, (arr_4 [i_5] [i_5]))) << (((1557763482 | 1015804) - 1558183924))));
                            }
                            var_36 = (arr_9 [i_5]);
                            var_37 = (min((arr_24 [i_5] [i_7]), (max((arr_0 [i_5 + 1] [i_5 - 1]), 5916))));
                            var_38 = (arr_14 [18] [i_7] [18]);
                        }
                    }
                }
                var_39 *= ((~((min(var_16, (arr_7 [i_6] [i_5 + 2] [i_6]))))));
            }
        }
    }
    var_40 = var_9;
    #pragma endscop
}
