/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_17 = ((((var_5 ^ (arr_7 [i_1 + 1] [i_2] [i_2] [i_3] [i_3] [i_3]))) >> (((max((arr_7 [i_1 + 1] [i_1] [i_2] [i_3] [i_3] [i_3]), (arr_6 [i_1 + 1] [i_1]))) - 6802003697519340228))));
                            var_18 = (((((7429651828142775443 ? (arr_6 [i_1] [i_1]) : var_5))) >> (((max((((arr_2 [i_0]) ? (arr_2 [i_0]) : 0)), 161)) - 3664190338))));
                            arr_9 [i_1] = ((-((((((arr_3 [i_1]) + (arr_1 [8])))) ? -311 : -var_8))));
                            arr_10 [i_1] [i_0] [i_2] [i_1] = (~386056344);

                            for (int i_4 = 1; i_4 < 8;i_4 += 1) /* same iter space */
                            {
                                var_19 = (((max((arr_7 [i_0] [i_4 - 1] [i_0] [i_4] [i_4] [i_2]), 7)) < (arr_7 [i_3] [i_4 + 1] [i_2] [i_3] [i_4] [i_2])));
                                var_20 = ((~(arr_4 [i_0] [i_4 + 1] [i_1 - 1])));
                            }
                            for (int i_5 = 1; i_5 < 8;i_5 += 1) /* same iter space */
                            {
                                var_21 = (((arr_12 [i_1] [i_1 - 2] [i_1] [i_1] [i_1] [i_1 - 1]) / (arr_15 [i_1 - 2] [i_1 + 1])));
                                var_22 = (max((max(1, var_11)), var_11));
                            }
                        }
                    }
                }
                var_23 = (~-101);
                var_24 = (min(((var_10 ? var_0 : (arr_8 [i_1] [i_1] [i_1] [i_1]))), 1));
                var_25 -= ((~((((1 ? (arr_4 [i_0] [i_0] [i_1 + 1]) : (arr_12 [8] [i_1 - 1] [i_1] [6] [i_1] [i_1 - 2]))) / ((min(6, (arr_8 [i_1] [i_1] [4] [i_1]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 20;i_7 += 1)
        {
            {
                var_26 ^= (((arr_22 [i_7 + 2] [i_7 - 2] [i_7]) ? (arr_23 [i_7 - 2] [i_7 - 2] [i_6]) : (((arr_22 [i_7 - 2] [i_7 + 1] [3]) ? (arr_23 [i_7 - 2] [i_7 - 1] [i_6]) : (arr_22 [i_7 + 2] [i_7 - 1] [i_7 - 1])))));
                var_27 -= (max(1, (~229)));
                arr_24 [i_7] = (arr_18 [i_7]);
            }
        }
    }
    var_28 -= ((!((min(var_8, ((1039019942 ? var_6 : -7429651828142775449)))))));
    var_29 = (min(var_29, var_0));
    #pragma endscop
}
