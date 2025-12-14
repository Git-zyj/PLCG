/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((var_11 ? ((var_5 ? 2701646830 : 18276)) : ((min(1, -126466981))))), -1246348644));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = ((18280 != ((min(47256, 58955)))));
        var_19 = (((arr_2 [i_0] [i_0]) ^ var_3));
        var_20 |= 1;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_21 = (arr_2 [i_1 + 1] [i_1 + 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_22 -= ((((arr_9 [i_0] [i_1 + 2] [4] [i_1 + 2]) * 18276)));
                                var_23 = (arr_2 [i_0] [i_1]);
                            }
                        }
                    }
                }
            }
        }
        var_24 = ((((arr_5 [i_0] [i_0] [i_0]) > 47260)) ? (min(6, -677090032)) : ((-2 ? 18275 : 206)));
    }
    for (int i_5 = 3; i_5 < 17;i_5 += 1)
    {
        var_25 = (min(var_25, 20189));

        /* vectorizable */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            arr_23 [i_5] [i_6] [i_7] [i_7] [i_5] = ((-(arr_13 [i_5 - 3] [i_7 + 1])));
                            var_26 = (arr_22 [i_5 + 1] [i_6] [i_5 - 2] [i_8] [i_9]);
                            var_27 = -24454;
                        }
                    }
                }
            }
            var_28 += ((3976725366 & (arr_18 [i_5 - 1] [i_5 - 3])));

            for (int i_10 = 3; i_10 < 17;i_10 += 1)
            {
                var_29 = (1 & 6506343595194243704);
                var_30 = (min(var_30, (((-11041880 ? (var_8 || var_0) : 11)))));
            }
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                var_31 += ((-6 ? (arr_21 [i_5 - 3] [i_5 - 3] [i_11] [i_6] [i_11]) : 1));
                arr_32 [i_5] [i_6] [i_6] [i_11] &= ((~((0 ? var_1 : var_7))));
                arr_33 [i_5] [i_5] [14] [i_6] = (arr_20 [i_5] [i_6] [i_6] [i_11]);
                var_32 = var_0;
            }
        }
        for (int i_12 = 3; i_12 < 17;i_12 += 1)
        {
            arr_37 [i_5] [i_12] [i_5] = ((((max(var_10, 0))) ? 20061 : var_10));
            var_33 = (((arr_14 [9]) & var_5));
        }
        arr_38 [i_5] [11] = (!1);
    }
    #pragma endscop
}
