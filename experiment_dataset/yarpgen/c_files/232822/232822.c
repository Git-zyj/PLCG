/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((~var_5) && var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_12 = (min((((((((arr_3 [i_0] [i_0] [i_0]) ? var_5 : 1))) ? ((var_0 ? var_5 : (arr_2 [i_0] [i_0] [i_0]))) : ((var_3 ? (arr_2 [i_0] [i_0] [i_1]) : (arr_3 [i_0] [i_0] [i_0])))))), 77));
                var_13 ^= (((arr_2 [i_1 + 3] [i_1 + 3] [i_1 - 1]) | ((min(var_9, (arr_2 [i_1 + 3] [i_1] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_2] [i_2] [i_0] [i_0] = ((min(-4294967295, 127)));

                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 10;i_4 += 1)
                            {
                                arr_13 [6] [6] [5] [i_2] = (((!var_1) && ((((arr_9 [i_0] [i_2] [8] [2]) ? (arr_5 [i_0] [5] [i_2]) : (arr_12 [i_0] [6] [i_2] [i_3] [i_4]))))));
                                var_14 = (min(var_14, ((!(arr_11 [i_3 + 2] [i_4 - 1])))));
                            }
                            for (int i_5 = 0; i_5 < 11;i_5 += 1)
                            {
                                var_15 = (((arr_7 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_2 - 1] [i_3 - 1]) <= ((-(arr_7 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_2 + 2] [i_2 + 1] [i_3 - 1])))));
                                var_16 = arr_5 [i_2 + 1] [i_1] [i_1];
                            }
                            for (int i_6 = 4; i_6 < 8;i_6 += 1)
                            {
                                var_17 = (((((~(!-1473103453553207467)))) | (((((8 ? var_1 : var_10))) ? var_8 : ((var_5 % (arr_0 [i_0] [i_0])))))));
                                var_18 = (max(((((((!(arr_0 [i_2] [8])))) < ((var_2 ? 0 : (arr_2 [i_0] [i_0] [i_6])))))), (arr_11 [i_3 - 4] [i_2])));
                                arr_21 [i_2] [i_0] [i_0] [i_2] = ((~(!var_8)));
                                arr_22 [i_0] [i_1] [i_2] [i_3] [i_2] = ((51103 ? ((((arr_19 [i_3 + 1] [i_2 + 1] [i_1 + 1] [i_1 + 1] [10]) != var_5))) : 0));
                                arr_23 [i_0] [i_2] [i_2] = (arr_12 [i_2 - 1] [i_1] [i_2] [i_2 - 1] [i_1 + 3]);
                            }
                            var_19 = (((min((arr_17 [i_2] [i_2]), (min((arr_19 [i_0] [10] [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_2] [i_2]))))) != var_6));
                            var_20 |= (min(7072, (min((min(123186248, -123186248)), (arr_11 [i_2 + 2] [i_0])))));
                        }
                    }
                }
            }
        }
    }
    var_21 *= (~-28);
    var_22 = (max(var_22, var_7));
    #pragma endscop
}
