/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [23] [i_0] = 16113676625489946286;
        var_19 |= (arr_2 [i_0] [i_0]);
        var_20 = (-(((206 ? 31879 : 16113676625489946286))));
        var_21 |= max(((((arr_1 [i_0 - 1]) < (arr_1 [i_0 - 1])))), (arr_2 [i_0] [i_0]));
        var_22 |= (max(((~((2333067448219605325 << (var_13 - 101))))), var_13));
    }

    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_23 = (max(-211498726008509618, 60600));
        arr_7 [i_1] = (min(((((arr_4 [i_1] [i_1]) ? ((min((arr_0 [i_1]), var_13))) : ((max(var_9, (arr_0 [i_1]))))))), (min(((0 ? 211498726008509618 : 2277093954274130331)), (var_5 > var_0)))));
        arr_8 [i_1] = (!7464224108249953100);
        arr_9 [i_1] [18] = (arr_1 [i_1]);
        arr_10 [i_1] [i_1] |= (max((arr_4 [i_1] [i_1]), (((arr_0 [i_1]) - (max(27, (arr_5 [9] [i_1])))))));
    }
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            arr_15 [i_3] |= (((var_8 + var_16) ? (0 != 2277093954274130316) : ((20 ? 10982519965459598494 : -5093938903227943313))));
            var_24 = (arr_2 [i_2] [i_3 + 1]);
            var_25 = 18306;
        }
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
            {
                var_26 = var_3;
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_27 = ((247 ? (arr_24 [i_4] [i_5]) : (arr_13 [i_2] [i_2])));
                            arr_29 [19] [19] [i_5] [i_4] [i_5] [i_7] = -var_1;
                        }
                    }
                }
                arr_30 [i_4] [i_4 + 4] [i_4] [i_4 + 2] = (((arr_19 [i_4 + 3] [i_4] [i_4 - 1]) ^ 47230));
            }
            for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
            {
                var_28 = (max(var_28, ((((min(12785338645411395112, 511)) + ((((!(((2601672649972436256 << (33220 - 33170)))))))))))));
                var_29 |= ((12785338645411395112 * (arr_24 [i_2] [i_2])));
                var_30 *= (arr_24 [i_2] [i_8]);
            }
            var_31 = ((var_18 >= ((((((arr_18 [i_2 - 1] [i_4]) + 2147483647)) >> (178 - 161))))));
            arr_33 [i_2 - 1] [i_4] = (-(18277 / -5302601927886804415));
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            var_32 = ((arr_26 [12] [i_2 - 1] [i_2 - 1] [15]) > (min((arr_5 [i_2] [i_2 - 2]), 15845071423737115359)));
            var_33 = arr_2 [i_2 - 1] [i_9];
            var_34 = ((((var_0 << (var_12 - 93))) ^ ((((arr_2 [i_2 + 1] [i_2 + 2]) == (arr_2 [i_2 + 1] [i_2 + 2]))))));
        }
        var_35 = (max(((max((arr_6 [i_2 - 1]), 165))), var_11));
    }
    var_36 = ((-(var_12 % var_0)));
    #pragma endscop
}
