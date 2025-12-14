/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = arr_1 [i_0] [i_0];
        arr_4 [i_0] [i_0] = ((!(((-(arr_0 [i_0]))))));
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        var_10 = (min(var_10, (((var_7 ? (arr_5 [i_1 + 1]) : (~var_0))))));
        arr_7 [i_1] [i_1] = (((arr_5 [i_1 - 1]) % 13013));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_11 = var_5;
        var_12 ^= (arr_9 [i_2]);
    }
    var_13 = var_8;

    /* vectorizable */
    for (int i_3 = 2; i_3 < 8;i_3 += 1)
    {
        var_14 += (((arr_10 [i_3 + 1] [i_3 + 1]) || (arr_2 [i_3])));
        var_15 = (((arr_11 [i_3 - 1] [i_3 - 1]) + (arr_6 [i_3 - 1] [i_3])));
        arr_14 [i_3] = ((13013 << (-1646696796 + 1646696811)));
        var_16 = ((52522 ? 38807 : 127));
    }
    for (int i_4 = 3; i_4 < 11;i_4 += 1)
    {
        var_17 = -59;
        arr_17 [i_4] = ((!(max(((var_6 == (arr_2 [i_4]))), (arr_9 [24])))));
        arr_18 [i_4] [i_4] = ((~(((arr_2 [i_4]) ? (arr_2 [i_4]) : (arr_2 [i_4])))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_18 = ((~((-(arr_20 [15] [i_5])))));
        arr_22 [i_5] = ((0 ? (arr_8 [i_5] [i_5]) : ((0 ? -18729 : 13040))));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        {
                            var_19 = (min((((-(arr_29 [i_8 - 1] [i_6] [i_6] [1])))), var_8));
                            arr_32 [i_9] [i_9] [1] [i_6] [i_9] [i_6] &= ((!(~0)));
                            var_20 = (min(((var_5 ? var_8 : -17673)), 47));
                        }
                    }
                }
                var_21 = ((~(((!(arr_25 [i_6] [i_6] [i_6]))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        {
                            var_22 = ((((!var_3) % (((arr_8 [i_11] [i_11]) ? 1 : 62190)))));
                            arr_38 [i_6] = ((((max(-3209, 32750))) * 1));
                            arr_39 [i_6] [i_7] [0] [i_6] [i_6] [10] = (arr_29 [4] [i_6] [i_6] [4]);
                        }
                    }
                }

                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    arr_43 [4] &= (arr_26 [4]);
                    var_23 |= (((var_8 / var_6) ? (((arr_37 [i_6] [i_7] [12] [1]) ? (arr_37 [i_6] [i_6] [8] [i_6]) : (arr_37 [i_6] [i_6] [4] [i_6]))) : (!42555)));
                }
                /* vectorizable */
                for (int i_13 = 1; i_13 < 13;i_13 += 1)
                {

                    for (int i_14 = 1; i_14 < 12;i_14 += 1)
                    {
                        arr_48 [i_6] [i_7] [i_6] [i_7] = ((((arr_1 [i_6] [i_7]) ? 101827032 : (arr_45 [i_6] [11]))));
                        var_24 = (arr_41 [1] [8] [9] [i_14]);
                    }
                    arr_49 [i_6] [i_6] [i_6] = ((!(arr_41 [i_13 - 1] [i_13] [i_13 - 1] [i_13 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
