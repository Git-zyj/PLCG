/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    var_17 = var_5;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0 + 1] [i_0 + 1] |= (((((max(-4, var_14))) || 6896362873715526162)));
        var_18 = var_9;
        var_19 = (max(var_19, (((arr_0 [i_0 - 2]) - ((((arr_2 [i_0 + 1]) && var_8)))))));

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_20 = (arr_2 [11]);
            var_21 ^= var_4;
            var_22 = (max(var_22, var_6));
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_3] |= ((((var_14 ? ((~(arr_10 [i_0] [i_0] [i_0] [i_3]))) : ((max(1, 4234665656))))) << ((((var_6 ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 1]))) - 994456170175411136))));
                        arr_14 [2] [i_1] [5] [i_2] = ((!(((-var_9 ? (arr_8 [i_0] [i_0 + 1]) : var_2)))));
                        var_23 = (max(var_23, ((min((arr_8 [i_1 + 3] [i_0 - 2]), (arr_8 [i_1 + 3] [i_0 - 1]))))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_4 = 3; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_24 = (arr_0 [i_0]);
                            arr_22 [i_4] [i_0] [i_1 + 2] [1] [i_4] [6] = (((max(-1684546857, 0)) <= (max((!-6896362873715526146), ((var_8 ? (arr_5 [6] [i_1 + 3] [11]) : 236))))));
                            var_25 *= ((!(arr_20 [i_0] [i_0 - 2] [i_1 - 1] [i_1 + 1] [i_0] [i_4 + 2])));
                        }
                    }
                }
            }
        }
        for (int i_7 = 2; i_7 < 12;i_7 += 1)
        {
            var_26 = (min(var_26, var_6));
            /* LoopNest 3 */
            for (int i_8 = 3; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        {
                            arr_33 [i_0] [5] [i_8] [i_0 - 2] [i_0] [8] = var_0;
                            var_27 = (min(var_27, var_1));
                        }
                    }
                }
            }

            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                arr_36 [i_7] [i_7] [i_7] [i_7] |= ((((!(arr_19 [i_0]))) ? ((min(8498, ((-(arr_28 [i_0] [i_7] [i_11] [i_0 + 1] [i_0] [i_7 - 1])))))) : (max((arr_29 [i_7]), ((((arr_5 [i_0] [i_0] [i_0 - 2]) ? -29271 : var_13)))))));
                var_28 = (max(var_28, (((7162663212508306111 ? 98 : 2128077416762375771)))));
                arr_37 [i_0 + 1] [i_11] [i_11] [1] = ((var_7 ? (arr_20 [i_0] [i_7] [i_11] [i_7] [i_11] [i_11]) : (((10861 ? (((1 << (-6896362873715526148 + 6896362873715526148)))) : (arr_0 [i_0 - 2]))))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 4; i_13 < 12;i_13 += 1)
                    {
                        {
                            var_29 = (max(var_29, var_0));
                            var_30 |= var_0;
                        }
                    }
                }
                var_31 = (((arr_11 [i_0] [i_0] [i_0 - 2] [i_0 - 2] [i_0] [i_11]) ^ ((~((var_5 ? (arr_16 [i_11] [i_7] [i_0] [i_0]) : var_1))))));
            }
            for (int i_14 = 2; i_14 < 11;i_14 += 1)
            {

                /* vectorizable */
                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    var_32 = (max(var_32, ((((arr_6 [i_7 - 2]) ? 90 : var_2)))));
                    arr_47 [i_0] [i_15] [i_0] = var_10;
                }
                /* vectorizable */
                for (int i_16 = 2; i_16 < 13;i_16 += 1)
                {
                    var_33 |= (((!6361291430832110281) % 255));
                    arr_51 [i_0] [i_0] [i_0 + 1] &= (((~0) ? (!var_11) : -6));
                    var_34 += (-15 == (arr_38 [1] [i_7] [i_0] [i_7] [2] [i_16 - 1]));
                }
                var_35 ^= (arr_18 [i_14 + 3] [i_14 + 2] [i_14 - 1] [i_14 + 3] [i_14 + 1]);
                var_36 *= (36466 <= 1);
            }
        }
    }
    #pragma endscop
}
