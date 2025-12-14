/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0] [8] |= ((255 ? 4 : 28));
            arr_6 [15] [i_1] [i_1] = (max(1146051013, (((-724787426 < ((var_17 ? 5007 : 3965200343)))))));
            arr_7 [i_0 + 1] = (((arr_1 [i_0 - 3]) + (arr_3 [i_0 - 3] [17] [i_0])));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_18 = 406209484246391747;
            arr_10 [i_0] = (arr_9 [i_0]);
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            arr_13 [i_0 - 1] [i_0 - 1] = (!28);
            var_19 = var_12;
        }

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_20 = (arr_8 [i_0] [i_4]);
            arr_16 [i_4] [i_4] [i_4] = (arr_2 [i_0]);
            var_21 -= (min(var_5, (arr_15 [i_0] [i_0])));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_22 = (arr_8 [i_0] [i_5]);
            arr_19 [i_5] = ((arr_15 [i_0 - 3] [i_0]) << (((arr_15 [i_0 + 2] [i_5]) - 69)));
        }

        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
        {
            var_23 = (((arr_14 [i_6]) * (!4)));
            arr_22 [i_0] [i_0] = (((arr_2 [21]) ? (((~(arr_14 [i_6])))) : var_0));
            var_24 = (-1 + 724787408);
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
        {
            var_25 = (min((var_7 + var_16), (max(148, ((12087 ? 39 : (arr_24 [i_0] [i_0] [i_7])))))));
            var_26 ^= (((((!(((1 ? 11 : 14227)))))) + (arr_2 [i_0])));
            arr_26 [i_0] = ((((((((arr_25 [i_0] [i_7] [i_7]) && -724787408))) != (arr_24 [i_0 - 2] [i_0 - 2] [i_7]))) ? 1757984849 : var_6));
        }
        arr_27 [1] [i_0 - 4] = (max(((min((((!(arr_17 [i_0])))), (arr_25 [i_0] [i_0] [i_0])))), (max((((arr_25 [i_0] [i_0] [i_0]) ? var_9 : 3233444178)), (arr_14 [i_0])))));
        var_27 = (((min((arr_17 [i_0 - 3]), (arr_25 [i_0 - 3] [i_0 - 3] [i_0]))) / (arr_3 [i_0] [i_0] [i_0])));
    }
    var_28 = var_8;
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        for (int i_9 = 4; i_9 < 12;i_9 += 1)
        {
            {
                var_29 *= 12848;
                var_30 = (arr_15 [i_8] [i_8]);

                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {

                    /* vectorizable */
                    for (int i_11 = 3; i_11 < 12;i_11 += 1)
                    {
                        var_31 ^= (arr_29 [i_8] [i_8]);
                        var_32 ^= (arr_36 [i_8] [i_8] [i_10] [i_11 - 1]);
                        var_33 = ((((((arr_24 [i_8] [i_9] [13]) + (arr_33 [i_10] [i_10])))) ? (((-724787412 * (arr_24 [i_8] [i_8] [i_8])))) : (arr_29 [i_8] [i_9])));
                    }
                    var_34 = ((+(((arr_33 [i_10] [i_10]) / (arr_33 [i_10] [i_10])))));
                }
            }
        }
    }
    #pragma endscop
}
