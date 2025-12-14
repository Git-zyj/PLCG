/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (!var_1);
        var_13 = var_7;
        var_14 = (((var_3 && (arr_0 [i_0]))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [1] [17] = (((max(-22614, 1))));
            arr_6 [18] [i_1] = (((~0) || (((var_9 * (arr_3 [i_0] [1]))))));
            var_15 = ((2527688340 ? (((((~8525828351189047167) && (var_9 * 9045))))) : (var_2 % -8525828351189047171)));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            var_16 = (arr_1 [i_0]);
                            var_17 = 0;
                            arr_16 [i_0] [i_2] [i_2] [i_4] [i_0] [16] = -8525828351189047167;
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            arr_20 [4] [i_2] [i_3] [i_4 + 2] [i_6] [1] [i_2] |= (((max((((arr_15 [i_4 + 1] [i_2] [i_3] [i_6] [i_3]) * 12989895282267838364)), var_7)) >= var_10));
                            var_18 = (min(var_18, (((var_5 ? var_10 : ((+((max((arr_7 [i_6]), (arr_12 [i_0] [22] [i_3] [i_3])))))))))));
                            var_19 = (((((!((min(var_11, 1)))))) <= (((0 >= (var_6 - 6770003911731756259))))));
                        }
                        arr_21 [i_0] [1] [i_0] [i_3] [i_2] [i_3] = ((255 >= (arr_13 [i_4 - 1])));
                    }
                }
            }
            arr_22 [1] [i_2] [i_2] = 8085769586152310915;
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_20 = (1 > 4201695049);
                            var_21 = 182;
                        }
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {

        /* vectorizable */
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 2; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    {
                        var_22 = ((!(arr_19 [i_10] [i_12 + 1] [i_10] [i_13] [16])));
                        var_23 = (~var_6);

                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            var_24 = (min(var_24, 14205));
                            var_25 = 5503742444763456898;
                        }
                    }
                }
            }

            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {

                for (int i_16 = 0; i_16 < 11;i_16 += 1)
                {
                    arr_51 [10] [i_11] [i_15] [i_11] [i_10] = var_2;
                    var_26 = (arr_11 [i_10] [i_11]);
                    arr_52 [0] [i_16] [2] &= var_2;
                }
                var_27 = ((((32757 ? var_12 : (arr_37 [i_15] [i_15]))) >= var_5));
            }
            var_28 = (var_11 <= 1);
        }
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 11;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 11;i_19 += 1)
                {
                    {
                        arr_60 [0] [i_19] [i_10] [i_19] [i_10] [3] = (min((5503742444763456887 >= -95), ((8525828351189047167 ? var_10 : 10106291659217486562))));
                        var_29 = (((var_4 < var_1) ? (!-41) : ((max((var_9 >= var_11), (min(12250, var_12)))))));

                        /* vectorizable */
                        for (int i_20 = 0; i_20 < 11;i_20 += 1)
                        {
                            arr_64 [i_10] [i_20] [i_18] [i_19] [i_20] [i_20] [i_10] = (((((2527688341 <= (arr_39 [i_10] [2])))) <= (arr_58 [i_10] [i_17] [i_10] [i_19] [1] [i_18])));
                            var_30 -= (((arr_15 [20] [i_10] [i_18] [i_17] [i_19]) ? (arr_24 [i_10] [i_17]) : 1));
                            var_31 = var_11;
                        }
                    }
                }
            }
        }
    }
    var_32 = (min(var_32, ((((var_11 / 1537945344214946398) ? 3298128318 : ((max(-9045, 9050))))))));
    var_33 = var_12;
    #pragma endscop
}
