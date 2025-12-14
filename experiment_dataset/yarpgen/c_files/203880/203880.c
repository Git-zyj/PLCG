/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (max(var_3, (min(var_7, var_2))));
    var_17 = var_6;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = (!1);

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_19 = (((((((arr_4 [i_0] [i_0]) & (arr_3 [i_1]))))) && ((((var_11 ? var_8 : var_9))))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_20 = (min(var_20, ((max(((min(1, (arr_1 [i_0] [i_0])))), (!1))))));
                        arr_9 [i_1] [i_1] = (max(((((((0 ? 12 : 5437))) || ((max(-1691557975, -1980970044497000357)))))), var_10));

                        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                        {
                            var_21 = ((!((max(1, var_1)))));
                            arr_13 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] [i_3] = (min(var_5, (max((var_4 * 253), var_14))));
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            var_22 -= ((((min(-6539398560241981660, (arr_8 [i_0])))) ? var_6 : (min(6495312066611503822, 0))));
                            var_23 ^= (min(var_7, (max((arr_8 [i_2 - 1]), var_6))));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_24 = (min(var_24, (((var_15 ? (((arr_3 [i_2 - 1]) + var_11)) : (arr_3 [i_2 - 1]))))));
                            var_25 = (!1);
                            var_26 -= ((((min((arr_18 [12] [i_2 - 1] [i_2 - 1] [i_2]), var_11))) ? (((-10493 != ((min((arr_14 [14] [i_1] [i_6] [i_3] [i_2 - 1]), var_4)))))) : (max((0 + 0), (arr_19 [i_0] [i_1] [i_2 - 1] [i_0] [i_6] [i_6] [i_6])))));
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_27 *= ((((min((arr_4 [i_2] [i_2 - 1]), var_10)) * (arr_17 [i_0] [i_1] [i_0] [i_3] [i_2 - 1]))));
                            var_28 = (max(var_28, (((((((arr_5 [i_0] [i_1] [8] [i_2 - 1]) - (arr_3 [i_3])))) ? -19783 : (~var_6))))));
                            var_29 = (max(96, var_9));
                        }
                        var_30 = ((var_0 != (min(167164532486943152, 3606360845))));
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
        {
            var_31 = (max(var_31, (((-(max((var_5 * var_7), var_11)))))));
            var_32 = (arr_18 [12] [12] [i_0] [12]);
            arr_25 [i_0] [i_8] [i_0] = ((((((arr_0 [i_8]) ? var_10 : var_5)))) ? ((max(3952435887, 114))) : ((((max((arr_7 [i_8] [i_0] [i_0] [i_0]), (arr_0 [i_8])))) ? (max(var_9, -4019554920719874449)) : (~var_14))));
            var_33 = (min(var_33, (((!((!(arr_2 [i_8]))))))));
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
        {
            arr_28 [i_0] [i_9] [i_9] = 175;
            arr_29 [i_9] = (-16899 && 1);
        }
        var_34 = (min(var_34, -var_5));
    }
    for (int i_10 = 3; i_10 < 8;i_10 += 1) /* same iter space */
    {
        arr_33 [i_10] = (((max((1 - -1376631079), (min(var_3, var_15)))) & var_7));
        var_35 = (arr_21 [i_10 + 1] [i_10 + 4] [9] [i_10 - 1] [9]);
    }
    for (int i_11 = 3; i_11 < 8;i_11 += 1) /* same iter space */
    {

        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            arr_39 [i_11] = 4294967272;
            arr_40 [i_11] [i_12] = (!8130095870562194105);
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            arr_44 [i_11] = (min(((min(var_4, (1 && var_12)))), (min((!var_11), -var_11))));
            arr_45 [i_11] = 0;
            arr_46 [i_11] [2] = ((~(arr_34 [i_11])));
        }
        for (int i_14 = 3; i_14 < 11;i_14 += 1)
        {
            var_36 = (min(((~(arr_49 [i_11 - 2] [i_14 - 3] [i_11]))), ((min((min((arr_3 [i_11]), (arr_12 [i_14] [i_11] [i_11] [i_11] [i_11 - 3] [i_11]))), -24)))));
            arr_50 [i_11] [i_14] [i_14] = (-19186 ? 1 : -960194699829079925);
            arr_51 [i_11] = 14378243825521683275;
        }

        for (int i_15 = 0; i_15 < 12;i_15 += 1)
        {
            var_37 ^= (min((min(((max(255, 1))), var_5)), ((max((arr_21 [i_11 + 3] [i_11] [i_11] [i_11 + 3] [i_11 - 1]), var_13)))));
            var_38 = 1;
            arr_55 [i_11] [i_15] = (max(17, (arr_14 [i_11] [i_15] [i_11] [i_11 + 4] [i_11])));
        }
    }
    #pragma endscop
}
