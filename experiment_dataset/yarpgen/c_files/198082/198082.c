/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (i_0 % 2 == 0) ? (((((((arr_4 [i_0 - 1]) ? (arr_2 [i_0]) : (arr_1 [i_0] [i_0])))) ? ((((((arr_1 [i_0] [i_0]) + 2147483647)) << (var_8 - 1)))) : (min(-2114263297, var_4))))) : (((((((arr_4 [i_0 - 1]) ? (arr_2 [i_0]) : (arr_1 [i_0] [i_0])))) ? ((((((((arr_1 [i_0] [i_0]) - 2147483647)) + 2147483647)) << (var_8 - 1)))) : (min(-2114263297, var_4)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_3] [8] [i_2] [i_1] [i_1] |= (min((((((arr_0 [i_1]) | (arr_5 [i_0]))) & var_6)), (((((var_11 | (arr_0 [i_1]))) << (((min((arr_5 [i_1]), var_0)) - 7392)))))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                arr_16 [i_1] [i_3] [i_1] |= (((!(arr_15 [i_1] [i_3] [10] [i_1] [i_1]))));
                                arr_17 [i_0] = ((var_8 && ((((arr_6 [i_1] [i_1] [i_0] [i_4]) - var_4)))));
                                arr_18 [9] [i_1] [i_2] [i_0] [i_2] [i_4] = (((~var_6) ? (arr_4 [i_0 + 2]) : (((arr_15 [i_0] [i_1] [i_2] [i_1] [i_0]) % var_6))));
                            }
                            for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                            {
                                var_16 = ((~(max(3974654364, 414234295))));
                                var_17 = (max(var_17, (((-var_6 + (9 >> 1))))));
                                arr_22 [i_0 - 1] [i_1] [i_1] [6] |= (((((~(!127)))) ? var_11 : (arr_7 [i_0] [i_0] [i_1])));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                            {
                                var_18 = (min(var_18, (((((!(arr_15 [12] [i_1] [i_2] [0] [i_1]))) ? (((!(arr_5 [i_1])))) : (arr_19 [i_0] [i_0] [i_0] [9]))))));
                                var_19 = var_4;
                                arr_27 [i_0] [i_0] [i_0] = var_3;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (18018150801925145277 / 9);
    #pragma endscop
}
