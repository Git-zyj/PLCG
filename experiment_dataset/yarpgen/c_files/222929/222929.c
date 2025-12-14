/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_18 = (min((-var_17 > -110), (arr_5 [i_0] [1] [i_2])));
                            var_19 ^= (min(((var_16 ? ((var_17 ? var_1 : -1432876519)) : (arr_5 [i_0] [i_1] [i_3]))), var_10));
                        }
                    }
                }
                var_20 = ((((((max(15, 61241))) ? var_10 : 78)) == ((((arr_0 [i_0]) >= 511)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_28 [i_4] [i_4] = (min(((((var_1 ? 1 : 16)) < var_9)), ((-6 >= ((511 ? var_6 : 2528311924873950247))))));
                                arr_29 [i_4] [i_4] [i_6] [i_4] [i_8] [i_4] = (~var_7);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            arr_36 [i_10] [i_9] [i_5] [i_10] |= (((arr_27 [i_4] [i_4] [i_5] [i_5] [1]) != ((((((31138 ? (arr_8 [i_4] [i_5] [i_9] [i_10]) : var_12))) || var_4)))));
                            arr_37 [i_4] [i_4] [i_4] [i_10] = (max(-204142234, ((250 ? 8263294142068947571 : 27525))));
                            arr_38 [i_4] [i_5] [i_4] [3] = ((arr_2 [i_4] [i_4]) < ((((arr_26 [5] [5] [i_10]) ? (arr_17 [i_4]) : ((max(-20, 161)))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                {
                    var_21 = (1 >= (arr_43 [i_13] [i_12]));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            {
                                arr_51 [i_14] [i_11] [i_15] [i_15] [5] = ((var_12 - ((((min((arr_39 [i_11]), -35))) ? var_0 : ((2047 ? 21410 : 5522))))));
                                arr_52 [i_15] [i_14] [i_14] [16] [i_12] [i_11] = var_4;
                                var_22 = ((-1 ? ((1 ? 1 : var_10)) : (((!(arr_45 [i_13] [i_13] [i_15]))))));
                            }
                        }
                    }
                    var_23 |= (arr_40 [i_12]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 22;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 22;i_17 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        {
                            var_24 = (min(var_24, (arr_60 [i_16])));
                            var_25 = ((((((min(1, 0))) / 469466359)) * 0));
                            var_26 |= ((121 ? (min((((arr_61 [i_16] [i_17] [i_18] [i_18] [i_18]) ? var_1 : var_7)), (((var_2 ? 31527 : -7718389250936539025))))) : -var_6));
                            arr_63 [i_16] [i_17] [i_19] = ((((((min(61606081, 0))) ? var_1 : var_14))) ? var_2 : var_13);
                            var_27 = (((((-((-49 ? 1 : 15))))) ? var_13 : (arr_55 [i_16] [i_17])));
                        }
                    }
                }
                arr_64 [i_17] = ((-96 | 7568719945412612193) != var_7);
                var_28 ^= (((min(1, (~10))) * var_16));
            }
        }
    }
    #pragma endscop
}
