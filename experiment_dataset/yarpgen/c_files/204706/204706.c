/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_2 ? var_3 : var_0))) ? ((~((4515511277169566051 ? 0 : 7073382214965264356)))) : ((((max(0, 349915726507099533))) ? var_5 : var_1))));
    var_13 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 -= var_2;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [1] [i_2] [i_1] = var_0;
                            arr_10 [i_0] [i_1] [19] [i_1] = (((!(arr_3 [4] [i_1] [i_1]))) ? (((var_9 ? var_1 : (arr_7 [i_2] [i_1] [i_3 - 1] [i_3] [i_3] [i_3])))) : (--8375554882815448758));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 15;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {

                            for (int i_8 = 0; i_8 < 16;i_8 += 1)
                            {
                                var_15 = var_11;
                                var_16 = 8375554882815448762;
                                arr_23 [i_4] [i_5] [8] [i_7] [i_5] = (((((~(arr_22 [i_7] [i_5 + 1] [i_4] [i_5] [14] [i_5])))) ? -4968 : -8078427961078951048));
                            }
                            var_17 = (min(var_17, (~-32766)));

                            for (int i_9 = 0; i_9 < 16;i_9 += 1)
                            {
                                var_18 &= (arr_12 [i_9]);
                                arr_26 [i_4] [i_9] [i_6] [i_7] [i_5] [6] = 236;
                                var_19 = var_2;
                            }
                            var_20 &= arr_18 [i_4] [i_4] [i_4] [i_4];
                            var_21 = ((+(min((arr_22 [i_4] [i_5] [i_5] [i_5] [i_5 - 1] [i_4]), (arr_25 [i_4] [i_4] [i_6] [i_5] [i_5 - 1] [i_4])))));
                        }
                    }
                }
                var_22 *= max((max(10699126645433312886, -20)), var_9);
                var_23 = 18096828347202452097;
                /* LoopNest 3 */
                for (int i_10 = 1; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 14;i_12 += 1)
                        {
                            {
                                var_24 = (arr_3 [i_5] [i_4] [i_5]);
                                var_25 -= (min((((-(arr_21 [i_4] [i_5] [i_10] [i_10] [i_4] [i_10])))), ((0 ? (max(var_5, (arr_15 [i_12] [i_12]))) : 10))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
