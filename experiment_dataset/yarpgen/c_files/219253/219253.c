/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((16633037218057530137 ? 1813706855652021453 : 123))) ? ((var_11 / ((0 ? 255 : 127)))) : 190));
    var_18 = (((min(((max(0, 129))), (-1 / 1813706855652021453))) != (((0 ? 164 : 164)))));
    var_19 = (var_9 ^ 217);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] [i_1] [i_1] = var_6;
                    var_20 ^= (~20373);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_21 |= var_0;
                                arr_16 [i_0] = (arr_15 [i_0]);
                            }
                        }
                    }
                    var_22 -= (((arr_7 [i_0] [i_0]) << (arr_14 [i_2] [i_1] [i_2] [4] [i_1] [18])));
                }
            }
        }
        arr_17 [i_0] = var_7;
        arr_18 [i_0] = (!16633037218057530162);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                {
                    var_23 = (min(var_23, (~164)));

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_24 = (min(var_24, ((((arr_2 [i_6]) & (((arr_2 [5]) ? 16633037218057530163 : (arr_0 [i_0] [i_7]))))))));
                        var_25 = arr_22 [i_0] [i_5] [i_6] [i_0];
                    }
                    for (int i_8 = 3; i_8 < 16;i_8 += 1)
                    {
                        var_26 = (max(var_26, ((((16633037218057530162 || 0) | (((arr_4 [i_5] [i_0]) ? 1 : (arr_15 [i_6]))))))));
                        arr_30 [i_0] [i_0] [i_5] [i_6] [i_6] [i_8 + 1] = (arr_5 [i_0]);
                        var_27 = (i_0 % 2 == zero) ? ((((!var_10) >> (((arr_14 [i_0] [i_5] [i_5] [i_0] [i_0] [i_0]) ? 0 : (arr_28 [i_8] [i_6] [i_5] [6] [1] [1])))))) : ((((!var_10) >> (((((arr_14 [i_0] [i_5] [i_5] [i_0] [i_0] [i_0]) ? 0 : (arr_28 [i_8] [i_6] [i_5] [6] [1] [1]))) - 55)))));
                    }
                    arr_31 [i_0] [i_0] [i_0] = (arr_15 [i_0]);
                    arr_32 [i_0] = (arr_29 [i_0] [i_5]);
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
    {
        arr_35 [i_9] = (((var_4 > 129) / 236));
        arr_36 [i_9] = 0;

        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 15;i_13 += 1)
                    {
                        {
                            var_28 = (max(var_28, (((~((~(max(1, var_5)))))))));
                            var_29 = ((!(arr_26 [i_13 + 1] [i_13] [i_13 + 1] [i_13] [i_13])));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {
                    {
                        var_30 = ((34505 ? ((((((0 ? 31037 : 1))) ? ((0 ? 0 : var_9)) : (arr_22 [i_15] [i_15] [i_15] [i_15])))) : ((16633037218057530162 ? (((((arr_29 [i_15] [i_15]) > 127)))) : 1813706855652021452))));
                        var_31 = (((((min(26, 1))) ? 16271 : (15 || 0))));
                    }
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
    {
        arr_54 [i_16] [i_16] = (min((min(((max(var_12, (arr_5 [i_16])))), (~var_1))), (arr_28 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])));
        arr_55 [i_16] [i_16] = var_14;
    }
    var_32 |= var_0;
    #pragma endscop
}
