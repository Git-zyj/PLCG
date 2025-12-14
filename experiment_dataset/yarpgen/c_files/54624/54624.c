/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 = var_12;

    for (int i_0 = 3; i_0 < 19;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_17 = var_0;
            var_18 = max((arr_0 [i_0 + 2]), 22499);
        }

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_9 [i_2] = var_10;
            arr_10 [9] [15] [15] = ((!((!(!5286630923070891566)))));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_19 = (!16552434885268567247);
            arr_14 [i_0] [i_0] [i_0] = (arr_1 [11]);
            var_20 *= (~3495265638678210366);
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        arr_23 [7] [i_5] [i_0] [i_0] [i_0] |= 14552281424926984427;

                        /* vectorizable */
                        for (int i_7 = 4; i_7 < 19;i_7 += 1)
                        {
                            var_21 += (~-var_11);
                            var_22 += var_8;
                            arr_27 [i_4] = (~(arr_25 [i_7] [i_7 - 1] [6] [i_7 - 1]));
                            arr_28 [15] [2] [i_5] = (var_1 ? 22499 : ((var_3 ? var_5 : (arr_16 [i_4] [19] [19]))));
                        }
                        var_23 = (11592055893173920800 % 9977935907668292164);

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_24 = ((arr_18 [i_0] [i_0 + 2] [i_0 + 1] [i_0 - 1]) >> (var_9 - 50515));
                            var_25 *= var_4;
                        }
                        /* vectorizable */
                        for (int i_9 = 2; i_9 < 18;i_9 += 1)
                        {
                            var_26 = (min(var_26, 16552434885268567247));
                            var_27 = 5447393104445185070;
                        }
                    }
                }
            }
            arr_33 [i_0 - 1] [i_4] |= (~(max((((arr_11 [5] [10] [i_0]) ? var_1 : var_7)), var_10)));
            var_28 = (--15973938331481692348);
            var_29 |= (~3800838825816010493);
        }
        var_30 = (~12492236806639250851);
        /* LoopNest 3 */
        for (int i_10 = 2; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 20;i_12 += 1)
                {
                    {
                        var_31 = (min(var_31, (max(((var_2 ? ((var_14 ? var_9 : var_0)) : (((arr_31 [6] [i_0] [5] [5] [i_12] [i_12 + 1]) ? 14787497421884514536 : var_5)))), (min(63, 14344903603425444669))))));
                        var_32 = (max(var_32, (max((((-(arr_1 [i_0 + 2])))), (arr_8 [i_10 + 1])))));
                        var_33 = 5951630549193207193;
                    }
                }
            }
        }
    }
    for (int i_13 = 3; i_13 < 19;i_13 += 1) /* same iter space */
    {
        arr_44 [i_13 + 1] = var_1;
        var_34 = 576460750155939840;
    }
    #pragma endscop
}
