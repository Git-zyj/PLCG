/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = ((((!(arr_1 [i_0] [i_0]))) ? (((max(var_1, (((!(arr_2 [i_0] [i_0])))))))) : ((493431994 + (var_11 * var_4)))));

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_13 = ((!493431997) ^ (var_7 * var_2));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        {
                            arr_12 [i_0] = (((((max(254, (arr_5 [i_0] [i_0 - 1] [i_0]))))) & (min(var_0, var_6))));
                            arr_13 [4] [i_1] [i_1] [i_3] [i_0] = (min(var_4, ((((min(-55, 493431994))) ? var_3 : -var_8))));
                            var_14 = (((!var_10) / var_3));
                            var_15 &= (((min((var_8 - var_8), var_5))) + ((max(var_11, var_5))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] = ((-(((-7216306387833742176 > -38) << (((arr_2 [14] [9]) + 3946))))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            arr_17 [i_0] [i_0] [i_5] = (max((~28666), ((-((min(28676, 232)))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    {
                        var_16 = ((-(((!(arr_2 [i_0 + 3] [i_5 - 1]))))));
                        arr_26 [14] [i_6] [i_0] [i_0] [i_0] [i_0] = 15528039187220560228;
                        arr_27 [4] [i_5] [i_0] [i_7] [i_0 + 4] [i_5] = ((((min((max(var_7, var_7)), var_5))) ? ((-(17794 & var_1))) : var_12));
                        var_17 = ((-(arr_18 [i_0])));
                        var_18 = var_7;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 4; i_8 < 13;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 2; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    {
                        arr_38 [i_10] = (var_1 != var_8);
                        arr_39 [1] [i_10] = var_5;
                        arr_40 [i_11] [i_11] [i_10 + 1] [4] [i_11] [4] |= var_7;
                    }
                }
            }
        }
        var_19 = (((!-1361689430) >= var_6));
        arr_41 [i_8] [i_8] = var_11;
        var_20 = (min(var_20, (var_8 ^ var_12)));
    }
    for (int i_12 = 0; i_12 < 14;i_12 += 1)
    {
        var_21 &= 1361689429;
        var_22 -= ((!(~219)));

        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            arr_47 [3] [i_12] [9] = (var_8 % var_8);
            var_23 = ((var_3 ? ((max(((var_11 ? (arr_43 [i_12]) : -28514)), (arr_46 [11])))) : var_3));
        }
        for (int i_14 = 3; i_14 < 13;i_14 += 1)
        {
            var_24 |= (((!(arr_32 [i_14 - 1] [i_14 - 1] [i_12]))));
            var_25 = var_5;
        }
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            var_26 = var_7;
            var_27 = min(((max((var_2 / 765643949), (!var_10)))), (arr_23 [i_12] [i_15]));
            arr_52 [i_12] = (((((max(var_3, var_1)) ? (-22205 < var_12) : var_1))));
            var_28 = (min(((((min(var_3, 50))) ? (3801535302 & 38) : (var_8 && 109))), (((!(~var_3))))));
            arr_53 [i_12] [i_12] [i_12] |= ((((!(arr_44 [0] [i_15] [i_12]))) ? ((((((arr_10 [i_15] [i_15] [i_15] [i_12] [i_15]) ? var_4 : var_1)) | var_9))) : ((var_5 / (max(var_5, var_6))))));
        }
        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {
            var_29 = (max((((max(var_10, var_1)) >> (var_4 + 1117312624))), var_9));
            arr_58 [i_12] = var_0;
            arr_59 [i_12] [i_12] = 178;
            var_30 = ((var_4 >= ((((72 && -38) && (var_3 != var_7))))));
        }
        var_31 = (~(max(((((arr_37 [i_12] [i_12] [i_12] [i_12] [i_12]) != 5619594599392106494))), var_6)));
    }
    for (int i_17 = 0; i_17 < 1;i_17 += 1)
    {
        var_32 -= ((-((var_8 ^ (arr_56 [i_17] [8])))));
        var_33 = ((!((max(-var_9, var_3)))));

        for (int i_18 = 0; i_18 < 10;i_18 += 1)
        {
            arr_67 [6] &= 25;
            var_34 ^= ((((max((min(var_12, 25)), 81))) ? 7216306387833742171 : ((var_2 ? var_1 : var_7))));
        }
        /* vectorizable */
        for (int i_19 = 1; i_19 < 9;i_19 += 1) /* same iter space */
        {
            var_35 = (!18390729220285067858);
            var_36 = var_7;
        }
        for (int i_20 = 1; i_20 < 9;i_20 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_21 = 0; i_21 < 10;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 7;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 10;i_23 += 1)
                    {
                        {
                            var_37 &= (-var_1 / var_10);
                            var_38 = (var_2 % ((((var_9 ? var_12 : 2501830011957848974)))));
                            arr_79 [i_17] [i_22] [6] [i_17] [i_17] = (((~var_0) ? (((~(var_5 + 998076079)))) : ((~(min(5288256274821008225, var_11))))));
                        }
                    }
                }
            }
            arr_80 [i_17] [3] [i_20] = (((((((!var_11) || ((((arr_7 [i_17] [6] [i_17] [i_20]) % var_12))))))) ^ ((-var_3 ? (11411765012257102717 - 3801535302) : var_3))));
            arr_81 [i_17] [9] [5] = var_8;
        }
        var_39 = (max(-var_12, (max((var_8 / var_8), (!1241169903)))));
    }
    var_40 = (min((min(31345, (min(15182172849674870279, 5619594599392106475)))), (((-2657698617126369984 < (!60))))));
    var_41 = (max((var_0 / 12827149474317445160), (((max(var_5, var_6))))));
    #pragma endscop
}
