/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_0] [i_0 + 1] = var_4;
                    arr_9 [i_0] [i_0 + 1] [i_0] = ((((((arr_0 [i_2 - 3]) && (arr_0 [i_1 + 1])))) != (!var_14)));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] = (min(1, (((((var_6 ? var_11 : var_6))) ? (arr_0 [i_3]) : (min(var_10, var_10))))));
                                arr_16 [i_0] [i_0] [i_0] [i_3] [i_0] = (((var_9 ? (!var_1) : (((arr_3 [i_3] [i_0]) ? (arr_12 [i_0] [i_1 - 1] [i_2] [i_0] [i_4]) : var_10)))) < (var_7 <= var_6));
                                arr_17 [i_0] = var_10;
                                var_15 = (((arr_13 [1] [i_0] [i_0] [i_0] [i_0]) > ((((var_11 ? (arr_2 [i_2]) : var_14)) & (arr_4 [i_2 - 2])))));
                                arr_18 [i_0] [i_0] [i_0] [i_1] [i_0] = (i_0 % 2 == 0) ? (((var_11 == (((arr_1 [i_0]) >> ((((var_4 ? (arr_7 [i_0] [i_0] [i_0]) : var_3)) + 121))))))) : (((var_11 == (((((arr_1 [i_0]) + 2147483647)) >> ((((var_4 ? (arr_7 [i_0] [i_0] [i_0]) : var_3)) + 121)))))));
                            }
                        }
                    }
                    var_16 += var_2;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 19;i_6 += 1)
        {
            {
                arr_26 [18] [i_5] [i_5] = (min(((var_0 ^ (((arr_20 [i_5] [i_5]) << (var_9 - 4917185511293326990))))), ((min((((!(arr_21 [i_5] [i_6 + 1])))), ((var_13 ? var_13 : (arr_23 [i_5] [i_5] [i_6]))))))));
                var_17 = (var_0 ^ (arr_23 [i_6 - 2] [4] [4]));
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_34 [i_5] [i_6] [i_6] [i_5] [i_8] [i_9 + 2] = ((((((arr_24 [i_6 + 1] [i_7 - 1]) * var_0))) ? (18263505748576576401 + 2189121858) : (((((2189121864 < 2189121858) == (arr_30 [i_6 - 1])))))));
                                var_18 = ((~(min(1, 2105845437))));
                                var_19 = (((((arr_29 [i_8] [i_8] [i_8] [i_8] [i_9 + 1] [i_9 + 1]) ? (arr_29 [i_6] [i_6] [i_6] [i_8] [i_9 + 1] [i_6]) : (arr_29 [i_5] [i_9] [i_9] [i_5] [i_9 + 3] [i_9 + 3])))) ? (min((arr_29 [i_8] [i_9] [i_9] [5] [i_9 + 3] [i_9]), (arr_29 [i_5] [i_5] [i_5] [i_5] [i_9 - 1] [i_9 - 1]))) : ((917090025 ? 15059366284365753260 : 2105845422)));
                            }
                        }
                    }
                }
                var_20 = (min(var_20, ((((((((max((arr_27 [i_5] [i_6 - 2] [i_5] [i_5]), (arr_28 [i_5] [i_5] [i_6])))) ? (((max(var_5, var_14)))) : (arr_29 [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6] [i_6 + 1])))) ? ((min((arr_20 [i_5] [i_6 + 1]), (!var_5)))) : (((var_2 >= var_5) ? (var_5 % var_11) : (((arr_21 [i_5] [i_5]) * var_9)))))))));
            }
        }
    }
    var_21 = (min(var_21, var_7));
    var_22 = (max(var_13, var_1));
    #pragma endscop
}
