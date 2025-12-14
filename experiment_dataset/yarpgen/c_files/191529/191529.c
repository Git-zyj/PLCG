/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] = (((1965606108 || 12288) ? (-11853 <= 12268) : ((((var_5 >= var_6) || var_9)))));
                            arr_10 [10] [i_1] [10] [i_3] &= (max((32171 * var_1), ((var_0 ? ((-29943 ? 29943 : var_4)) : ((max(106, var_1)))))));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((var_0 ^ var_6) ? var_4 : -1330900442907576689)) == 1022549453));
                                arr_16 [1] [i_1] [i_2] [i_0] [5] = ((!(((arr_8 [i_0] [i_0] [i_0] [i_0]) <= var_8))));
                                arr_17 [i_0] [i_2] [i_0] = (~var_4);
                            }
                            for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = (max(((max(9, var_8))), ((min(-1474477712, var_1)))));
                                arr_21 [i_0] [i_1] = (max((arr_1 [i_0]), (((arr_11 [i_0] [i_0] [i_0] [3] [i_0]) / var_7))));
                            }
                            for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
                            {
                                arr_24 [i_0] [1] [i_0] [1] [i_3] [i_6] [i_6] = ((((12288 ? 64891 : 12)) <= (min(((var_9 ? -121 : var_0)), ((min(-12288, var_5)))))));
                                arr_25 [i_3] [i_0] [i_3] [i_2] [i_1] [i_0] [i_0] = ((var_0 ^ ((~((var_6 ? 32767 : 12288))))));
                            }
                            arr_26 [i_3] [i_0] [i_0] [i_0] = (var_6 ? (((arr_2 [i_0]) ? -24 : var_4)) : ((((arr_22 [i_0] [i_2 + 2] [10]) | (0 || var_9)))));
                        }
                    }
                }
                arr_27 [i_0] [i_0] = (var_0 | var_4);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            {
                arr_35 [i_7] |= -1022549453;
                arr_36 [1] = (((arr_31 [i_7 - 2]) ? (max(var_8, var_7)) : (((var_5 | var_7) ^ var_5))));
                arr_37 [i_7] = (max((-28697 ^ var_2), ((((arr_31 [i_7 - 1]) ? -95 : 137)))));
                arr_38 [4] = var_5;
            }
        }
    }
    #pragma endscop
}
