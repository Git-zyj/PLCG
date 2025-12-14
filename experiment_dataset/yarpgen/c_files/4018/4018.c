/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= -862070364;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_15 ^= (min((!-21343), var_9));

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_16 -= (21338 & 12);

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                var_17 -= 21352;
                var_18 = (!var_6);
                var_19 = (min(var_19, ((max((min((arr_6 [6] [i_0 + 1] [i_1 + 1]), (((arr_7 [i_0] [i_1] [i_2] [i_2]) ? var_2 : 3782686596)))), (((-21350 != ((min(1, 21336)))))))))));
            }
            var_20 = (max(var_20, (((!((min((min(var_6, 0)), ((min(-1629, (arr_4 [i_1 + 1]))))))))))));
            var_21 = ((!(arr_5 [i_0 + 2])));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_22 = (max(var_22, (arr_2 [16] [i_3])));
            var_23 = (arr_9 [i_3]);
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_24 = (((arr_11 [i_0] [i_4]) + 1));
            var_25 *= (((max(var_8, (!var_12))) >= var_3));
            var_26 = ((((arr_2 [i_0] [i_0 + 2]) ? (arr_2 [i_0] [i_0 - 1]) : (arr_2 [i_0] [i_0 + 1]))));
        }
        var_27 = -29;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] = var_8;
        var_28 = (min(var_28, var_13));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 2; i_7 < 23;i_7 += 1)
        {
            var_29 = (((arr_15 [i_7 - 2]) == 216));
            var_30 = (min(var_30, 1));
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_31 = (min(var_31, var_8));
            var_32 -= (((((!(arr_21 [i_6]))))) > (1 ^ var_8));
        }

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        {
                            var_33 = (max(var_33, ((((arr_29 [i_6] [2] [i_10] [i_11] [i_10 + 1]) || var_3)))));
                            var_34 = (((((-1 ? -1876139615 : var_10))) & (arr_19 [i_10 + 1])));
                            var_35 += (arr_20 [i_10] [i_12]);
                        }
                    }
                }
            }
            var_36 = (min(var_36, (arr_28 [i_9] [i_6] [i_6])));
            var_37 = (min(var_37, var_6));
        }
        for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
        {
            var_38 = (max(var_38, ((((arr_27 [i_6] [i_13] [i_13] [i_13]) || var_12)))));
            var_39 = (max(var_39, (var_1 | var_12)));
            var_40 = 187;
            var_41 *= (((arr_26 [i_6] [i_13] [i_13]) != (arr_16 [i_6])));
            /* LoopNest 2 */
            for (int i_14 = 3; i_14 < 23;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 23;i_15 += 1)
                {
                    {
                        var_42 = ((-10122 ? (!32758) : 4043454469));
                        var_43 = (max(var_43, 21338));
                        var_44 = (((arr_29 [i_6] [i_13] [i_14] [i_6] [i_15 - 1]) ? var_8 : var_1));
                    }
                }
            }
        }
        for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
        {
            var_45 ^= (!var_6);
            var_46 = (((arr_37 [i_6] [i_16] [i_16]) || 0));
        }
        for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 24;i_18 += 1)
            {
                for (int i_19 = 1; i_19 < 23;i_19 += 1)
                {
                    {
                        var_47 = (min(var_47, ((((arr_18 [i_19 - 1]) ? 0 : (arr_23 [i_19] [i_19 + 1]))))));
                        var_48 = (max(var_48, ((((!7054880385158474181) * ((-(arr_24 [14] [14]))))))));
                    }
                }
            }

            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                var_49 *= (var_1 - var_11);
                var_50 = (min(var_50, var_9));
            }
            var_51 -= (var_9 / 26);
        }
        var_52 &= var_9;
    }
    #pragma endscop
}
