/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_19 = (min(var_19, var_17));
        var_20 = (max(var_20, (((arr_0 [i_0 - 1] [i_0 + 1]) / -92))));
        var_21 = (max(var_21, var_9));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (var_7 ? ((((((arr_5 [i_1]) && -92))) % (min(var_13, var_5)))) : ((max(var_18, -1997721607))));
        var_22 = ((((min((((-(arr_3 [i_1])))), 97396072313471375))) ? ((min(92, 30))) : (arr_3 [i_1])));
        var_23 = (88 % -85);
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_20 [i_2 - 1] [i_6] = ((125 ? (var_16 % -92) : -272166156));
                                var_24 = var_14;
                                var_25 += var_14;
                            }
                        }
                    }
                    arr_21 [i_2] [i_3] [i_4] [i_4] = 80;
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                arr_28 [i_2] [i_3] [i_3] [i_7] [i_8] = var_13;
                                var_26 = (max(var_26, (arr_22 [i_2] [i_3] [i_2] [i_7] [i_8])));
                                arr_29 [i_2] [i_2] [i_2] [i_4] [i_7] [i_2] = (((arr_3 [i_2 - 1]) ? var_2 : (arr_26 [i_2] [i_3] [i_3] [i_7] [i_4 - 2] [i_4] [i_2])));
                            }
                        }
                    }
                    arr_30 [i_2 - 2] [i_3] = (((var_12 && 7) >> (!var_15)));
                    var_27 = (arr_10 [i_2 - 1] [i_4 + 1]);
                }
                /* vectorizable */
                for (int i_9 = 2; i_9 < 13;i_9 += 1)
                {
                    arr_34 [i_9] [i_9] [i_9] [i_9 + 1] = (arr_27 [i_9] [i_3] [i_9] [i_2] [i_2] [i_3 - 1]);
                    var_28 -= (((~(arr_13 [i_2] [i_3] [i_3] [i_9 + 1]))));
                }
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    arr_37 [i_2] [i_2] [i_3] [i_10] = ((((((4 == 89) << (237 - 211)))) ? ((((min((arr_9 [i_2] [i_3] [i_10]), (arr_4 [i_2] [i_3])))) ? (-88 & 88) : ((2147483647 ? (arr_7 [i_2] [i_3]) : var_15)))) : ((var_7 << (((var_0 && (-32767 - 1))))))));
                    var_29 -= ((~(((arr_36 [i_2] [i_2 + 1] [i_3 - 1]) ? var_10 : (arr_36 [i_2 - 3] [i_2 + 1] [i_3 - 1])))));
                    var_30 = (max(31693, (((var_17 >> (-1997721622 + 1997721636))))));
                }
                for (int i_11 = 1; i_11 < 13;i_11 += 1)
                {
                    arr_42 [i_2] [i_3] [i_11] [i_11] &= -1326764169;
                    var_31 = ((((var_16 > (arr_10 [i_3] [i_11]))) ? (((~((min(var_12, (arr_17 [i_2] [i_2] [i_3] [i_11] [i_11]))))))) : (min((arr_40 [i_2] [i_3] [i_11]), (~97396072313471370)))));
                    var_32 = (max(var_32, (69 == var_17)));
                    arr_43 [i_2] [i_3] [i_11] = (arr_14 [i_3] [i_3 - 1] [i_2 - 3] [i_2]);
                }
                var_33 ^= (arr_3 [i_2 - 2]);
            }
        }
    }
    #pragma endscop
}
