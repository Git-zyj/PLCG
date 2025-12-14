/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, 0));
    var_14 = (min((max(((min(var_1, 0))), ((-31921 ? 0 : 7)))), -31921));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_15 = (max(var_15, var_2));
        var_16 = (max(8983693060052436493, -880969882));
        var_17 += (arr_1 [i_0 + 2]);

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_18 |= ((((!((!(arr_3 [i_0 - 1] [i_1] [0])))))));
            var_19 = (min((min(((0 ? 73 : (arr_0 [i_0] [i_0]))), (!var_0))), (((((((arr_2 [i_1] [i_0 + 3]) ? 0 : (arr_0 [i_0] [i_0])))) < var_7)))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    {
                        var_20 = (max(var_20, var_11));

                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            var_21 = ((-((min((3715920736 && 9463051013657115123), -31921)))));
                            var_22 *= (min((~14658), (((((-(arr_3 [0] [1] [6])))) ? (var_4 / var_9) : ((max(-14682, 0)))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            var_23 *= var_7;
                            arr_12 [i_0] [i_0] [i_0] [i_2] [i_3] [i_5] = -var_6;
                        }
                        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            var_24 = (max(var_24, var_5));
                            var_25 = (268738200 && 1);
                            arr_15 [i_0] [i_1] [i_0] [i_0] [i_6] = (max(-133731827, 86));
                        }

                        for (int i_7 = 1; i_7 < 8;i_7 += 1)
                        {
                            var_26 ^= 1;
                            arr_19 [i_7 + 2] [i_1 + 1] [i_3 + 1] [i_3 + 1] [i_0] = ((~75) ? (!var_10) : (((1 * var_10) ? (((min(7080, 0)))) : -71)));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_27 &= (((var_1 + 50) >= ((((-1699684980 && ((max(199, var_9)))))))));
                            var_28 = (max(var_28, ((((((var_0 - (((arr_0 [i_0 + 1] [8]) + var_7))))) ? (((((arr_17 [i_0] [i_1] [i_2] [i_3] [2]) - var_12)))) : (--176))))));
                            var_29 = max(var_1, 15986536955934528025);
                            arr_23 [i_0] [i_1] [i_0] [i_0] [i_3] [i_1] = 4336644074548188345;
                        }
                        var_30 = -5752285988302432973;
                        var_31 = var_6;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            arr_26 [i_0] [i_9] = -3691378527909652384;
            arr_27 [i_0] = -var_7;

            for (int i_10 = 4; i_10 < 9;i_10 += 1)
            {
                var_32 = (max(var_32, ((((((arr_22 [i_0 + 3] [i_9] [i_9] [i_0] [i_10 - 1] [i_9]) ? var_9 : var_7)) >> ((((var_1 ? var_9 : var_10)) - 9860)))))));
                var_33 = (arr_28 [i_0]);
                arr_30 [i_0] = var_10;
            }
        }
    }
    #pragma endscop
}
