/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~15590546896560388050);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = (min((arr_1 [5] [i_0]), ((-48473 ? (arr_4 [i_1 + 3] [i_0]) : (arr_0 [i_0] [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, var_8));
                            arr_11 [14] [14] [i_2] [i_0] [i_0] [i_2] = (max((arr_4 [i_1] [i_0]), 2856197177149163565));
                            arr_12 [i_0] [i_0] [i_2] [i_0] = (max(-93, 24652));
                            var_16 *= (2856197177149163565 + 15590546896560388050);
                        }
                    }
                }
            }
        }
    }
    var_17 = 511;

    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_18 = var_6;
        var_19 *= (-41 ? (arr_13 [i_4]) : (arr_14 [i_4]));
        arr_15 [i_4] = -24653;
        arr_16 [2] [i_4] = (arr_14 [i_4]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_20 ^= ((24652 ? var_10 : ((~(arr_14 [7])))));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    var_21 = ((((!(arr_19 [i_6]))) ? (arr_14 [i_5]) : (((arr_19 [i_5]) ? 15590546896560388049 : (arr_23 [0])))));
                    var_22 = (max(var_22, var_10));
                    var_23 ^= (!5);
                    var_24 = 15590546896560388050;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
    {
        arr_27 [i_8] = (8851 * 40);
        arr_28 [i_8] = (((((arr_24 [i_8] [i_8]) ? (arr_21 [8] [i_8]) : 40373))) ? (arr_21 [i_8] [i_8]) : 3903363523);
        var_25 = (max(var_25, (arr_18 [11])));

        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            arr_33 [i_8] [i_8] = arr_18 [i_9];
            var_26 = (var_11 ^ -72);
            arr_34 [i_8] = 27723;
        }
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            arr_37 [i_8] [i_8] = 391603746;
            var_27 = ((var_3 ? (arr_13 [i_8]) : (arr_21 [i_8] [i_8])));
            var_28 = 2514539606;
            var_29 = (arr_19 [i_10]);
        }
        for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
        {

            for (int i_12 = 1; i_12 < 16;i_12 += 1)
            {
                var_30 = (((arr_39 [i_8] [i_11]) ? ((((arr_36 [i_8] [i_11]) < var_11))) : 268419072));
                var_31 ^= (((arr_14 [i_8]) ? (!-2852366714359566337) : (arr_19 [i_11])));
            }
            arr_46 [i_8] [i_11] = (((arr_36 [i_8] [i_8]) ? 25163 : -40373));
        }
        for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
        {
            arr_49 [i_8] [i_8] = (((((arr_41 [i_8] [i_8] [i_13]) || (arr_39 [i_8] [i_13]))) ? 21121 : (arr_30 [i_8] [i_8])));
            var_32 = (((!3) ^ (arr_17 [i_8])));
            var_33 = (max(var_33, (~var_3)));
        }
        arr_50 [i_8] = (arr_22 [i_8] [i_8] [i_8] [i_8]);
    }
    for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
    {
        var_34 = ((-8265 ? 8851 : -21133));
        arr_54 [i_14] [i_14] = var_13;
        var_35 = (~17629211914562627314);
    }
    #pragma endscop
}
