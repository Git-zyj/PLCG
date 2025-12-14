/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_19 &= ((((min(var_1, (((arr_0 [12]) ? var_3 : var_4))))) ^ (~-4294967276)));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_20 |= var_18;

            /* vectorizable */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_21 = (~20);
                var_22 = var_6;
            }
            var_23 = (~var_18);
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] [i_4] [i_4] = var_16;
                        var_24 = 4294967276;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {

                        for (int i_8 = 2; i_8 < 12;i_8 += 1)
                        {
                            arr_21 [i_0] [15] [5] = (19 < var_8);
                            var_25 = var_13;
                        }
                        var_26 ^= (min(((var_3 ? (var_4 % var_14) : ((var_17 ? 20 : 4294967276)))), (((!var_17) ? 6 : var_9))));

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_27 -= 1;
                            var_28 -= ((1 ? -4294967291 : -24));
                            var_29 &= var_16;
                            var_30 = (max(var_30, -var_2));
                        }
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_31 = min((((arr_2 [i_0 + 2]) ? var_5 : (arr_2 [i_0 + 2]))), ((((!(arr_25 [5] [i_6] [5] [i_10]))))));
                            var_32 = ((~(arr_3 [i_0 + 2])));
                            arr_26 [i_0] [6] [1] [8] [i_10] &= 4294967277;
                            var_33 = (!3560478047);
                        }
                    }
                }
            }
            var_34 &= ((~(((((20 ? (arr_19 [i_0] [i_0] [i_0] [0] [i_0] [2] [i_0]) : (arr_18 [i_0] [i_0] [i_3] [i_3] [i_0])))) ? 1 : (!0)))));

            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 14;i_13 += 1)
                    {
                        {
                            var_35 = -170011203;
                            var_36 = ((max(var_13, -73)));
                        }
                    }
                }
                var_37 ^= var_16;
                arr_35 [i_0] [i_0] [4] [i_0] = (((-((-6477595702068668437 ? 26 : 196)))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 14;i_15 += 1)
                    {
                        {
                            arr_43 [i_0] [i_0] [i_15] [i_0] [i_0] = (!3560478047);
                            var_38 = (max(var_38, ((((((((1928495182 ? (arr_31 [i_11] [i_11] [i_0]) : 3227911261))) && var_17)) && ((((arr_32 [i_15 + 1]) ? (((arr_41 [i_0] [i_0] [6] [i_0] [6]) ? (arr_37 [8]) : (arr_17 [i_0] [i_3] [i_11] [i_14] [i_15]))) : ((max(var_14, -722275059)))))))))));
                            var_39 = (arr_10 [i_0] [i_0] [i_0]);
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_16 = 0; i_16 < 16;i_16 += 1)
            {
                var_40 = ((4294967290 + ((var_18 ? (arr_28 [i_16] [i_16] [15] [i_0]) : (arr_36 [i_16])))));
                var_41 = -var_11;
            }
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 16;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 16;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 16;i_19 += 1)
                    {
                        {
                            var_42 = (max(var_42, ((((min((!var_18), (4294967275 <= var_11))) || var_1)))));
                            var_43 = var_11;
                            var_44 = (arr_5 [6] [1]);
                            var_45 = ((-((var_14 | ((min((arr_34 [i_17] [i_18]), var_17)))))));
                        }
                    }
                }
            }
        }
    }
    var_46 -= (((((1 | (var_8 * var_6)))) ? (max(4294967275, (!var_10))) : 20));
    var_47 = (((44 * 0) ? ((var_10 - (-6702831327723153569 - var_4))) : var_15));
    #pragma endscop
}
