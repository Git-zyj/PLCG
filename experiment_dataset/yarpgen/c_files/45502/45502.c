/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    arr_7 [i_0] [i_2] [i_2] = (min(((((!var_0) || var_0))), var_11));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1 + 1] [i_2] [i_3] [2] [i_4] [i_1 + 1] = (max(((~((var_4 ? var_0 : var_0)))), (((((var_6 ? var_9 : var_9))) ? ((max(var_10, var_11))) : ((max(var_8, var_4)))))));
                                arr_14 [i_0] [i_3] = ((((var_5 ? (((var_8 ? var_9 : var_1))) : (~var_6)))) ? (!3895122545182224552) : (min(var_3, (min(var_4, var_5)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_19 [i_1 + 1] [0] [i_1] [i_1] [8] |= (((((255 ^ (min(3606121155, 8687903169149685353))))) ? ((((-8651701243784821600 / 218) ? var_2 : (var_9 / var_10)))) : (((min(var_5, var_8)) - ((max(0, 43)))))));
                                arr_20 [i_0] [i_2 + 1] [9] [9] = (((((var_1 ? var_5 : var_7))) ? ((min(4009228582353235954, 1))) : (min(((var_3 ? var_5 : var_0)), (((7733111580128750901 ? 1693880546 : 0)))))));
                                var_12 = ((((((var_3 ? var_4 : var_2)))) & ((max(var_0, -6211869521551753138)))));
                                arr_21 [i_0] [i_1] [i_2 + 1] [i_1] = ((((max(var_0, (~var_3)))) ? ((min(((var_4 ? var_0 : var_2)), ((max(var_1, var_10)))))) : var_6));
                                arr_22 [i_0] [i_1] [i_2] [i_5] [i_6] = ((((((min(var_6, var_9))) ? (((max(var_8, var_9)))) : (var_2 + var_5))) * var_4));
                            }
                        }
                    }
                    var_13 = (min(160, 6211869521551753137));
                    var_14 = (min(var_14, (((((((min(var_0, var_9)) < ((min(var_9, var_1)))))))))));
                }
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    arr_25 [i_0] [i_1 - 3] [i_7] = var_11;
                    var_15 = (min(var_15, ((((!var_5) ? (var_7 & var_0) : (((min(((max(var_1, var_9))), 1)))))))));
                    arr_26 [i_0] [i_0] [6] |= (max(((((var_2 > var_8) > var_1))), var_10));
                }
                for (int i_8 = 1; i_8 < 10;i_8 += 1)
                {
                    arr_31 [i_0] [i_0] [i_8 + 1] [i_8] = ((((max(var_8, (min(var_6, var_0))))) ? (min((~var_6), (~2666183759))) : ((var_0 & ((var_8 ? var_0 : var_5))))));
                    arr_32 [i_0] [i_1 - 2] [i_1 - 1] = ((-((var_3 ? (((var_3 ? var_4 : var_9))) : -var_3))));
                    arr_33 [i_0] [i_1] [3] [8] = ((min(-1786602345, 32768)));
                    arr_34 [i_0] [i_8] = ((((3660636928 - (-2147483647 - 1)))));
                }
                arr_35 [i_0] [i_1] [i_1] = var_9;
                arr_36 [i_0] [i_0] = var_4;
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 8;i_10 += 1)
                    {
                        {
                            arr_43 [i_1] [i_1] [i_0] [i_10] = var_9;
                            var_16 = (min(((1991327904868244494 ? 200 : ((min(1, 15))))), 8038));
                            arr_44 [i_0] [i_0] [i_1] [i_9] [i_10] [i_10] = (min(((var_2 ? var_0 : var_5)), (((var_3 ? var_2 : var_4)))));
                            var_17 = min((((var_6 ? var_11 : var_11))), ((var_1 ? var_3 : var_0)));
                            var_18 = (!var_1);
                        }
                    }
                }
            }
        }
    }
    var_19 = var_11;
    #pragma endscop
}
