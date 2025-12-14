/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 -= ((3373 & (arr_1 [1] [i_1])));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_21 = ((!((max(((var_14 & (arr_12 [i_0] [i_1] [i_2] [i_1] [i_2]))), (!211))))));
                                var_22 = ((~(max((max(2068643927, -1508084903)), var_15))));
                                var_23 -= var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, ((max((((!136) ? (max(var_8, 27141)) : (((var_0 ? 1 : -15))))), ((min(((max(1, 123))), (~1)))))))));
    var_25 = (min(var_25, var_0));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_26 = 142;
                                var_27 = 1;
                                var_28 = (min(var_28, var_11));
                            }
                        }
                    }

                    for (int i_10 = 2; i_10 < 15;i_10 += 1)
                    {
                        arr_33 [i_5] [1] [i_5] [i_6] [i_5] = 1;
                        var_29 -= (-((~((((arr_11 [i_10]) <= (arr_6 [i_10] [i_6] [1] [i_10])))))));
                        var_30 = (max(var_30, (!var_12)));
                        var_31 = (((((-(arr_5 [i_5]))) & -28571)));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            {
                                var_32 = ((((max((arr_6 [i_5] [i_6] [i_5] [i_5]), var_19))) ? ((var_16 / (arr_28 [i_5] [i_6] [i_7] [0] [i_7]))) : ((-66 ? (arr_6 [i_5] [i_5] [i_11 - 1] [i_11]) : (arr_6 [i_5] [i_11] [i_11 + 1] [1])))));
                                var_33 &= 136;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 15;i_14 += 1)
                        {
                            {
                                arr_43 [i_5] [i_5] [i_6] [i_5] [i_5] [i_13] [i_5] = (((((((((arr_7 [i_5] [i_5]) ? 28571 : 1))) ? (arr_15 [i_5] [i_6]) : ((var_6 ? -5522 : 107))))) ? (-2147483647 - 1) : (((((min(122, 17461931497291067414))) && var_10)))));
                                var_34 &= (((arr_6 [i_13] [i_14 - 1] [i_14 - 1] [i_14 + 1]) - ((((arr_6 [i_6] [i_14 + 1] [i_14 + 1] [i_14 + 1]) == (arr_6 [i_13] [i_14 - 1] [i_14 + 1] [i_14 + 1]))))));
                                arr_44 [i_5] [9] [i_5] [i_13] [i_14] = (arr_31 [8]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_35 = var_2;
    #pragma endscop
}
