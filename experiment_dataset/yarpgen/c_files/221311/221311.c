/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((min(((~((min(var_1, var_0))))), var_0)))));
    var_12 = var_0;
    var_13 = (min(var_13, (7326960094937844134 <= 1)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((max(((((arr_0 [i_0] [i_1]) == (arr_3 [i_0] [i_0])))), (arr_3 [i_0] [i_0])))) ? var_6 : var_4));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                            {
                                var_14 = var_4;
                                var_15 |= max((arr_3 [i_3] [i_3]), (243 >= 245));
                                arr_12 [0] [i_0] [0] [i_2] [i_0] [0] [18] = ((((((((arr_2 [i_0] [i_0]) % var_0))) ? var_6 : ((((arr_2 [i_1] [i_4]) < var_0))))) <= ((-(arr_0 [i_0] [i_0 + 1])))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                            {
                                arr_16 [i_0] [i_0] = (((arr_14 [i_0 - 3] [i_0] [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 1]) ^ (arr_14 [i_0 + 1] [i_0] [i_2 + 1] [9] [i_2 - 1] [i_2 - 1])));
                                arr_17 [i_0] [15] [i_0] [i_0] [i_0] = 1;
                                var_16 = ((-((-(arr_6 [i_0] [i_3])))));
                                var_17 = (arr_10 [i_1] [i_0] [i_0] [i_3]);
                                var_18 = (arr_14 [i_3] [i_0] [i_3] [i_3] [i_3] [i_3]);
                            }
                            for (int i_6 = 0; i_6 < 21;i_6 += 1)
                            {
                                arr_20 [i_0] [i_1] [i_2] [i_1] [i_0] = ((-(min(var_5, (arr_8 [i_0] [i_0] [i_2] [0] [i_0] [0])))));
                                var_19 *= (max(((((var_1 ? (arr_8 [i_0 + 1] [i_6] [i_2] [i_2] [1] [i_0 + 1]) : (arr_14 [i_0] [i_6] [10] [i_0] [6] [0]))) / ((((arr_11 [i_6]) + (arr_14 [i_0 + 1] [i_3] [i_2 - 2] [i_3] [4] [i_6])))))), (((1 ? 3584 : 1)))));
                                var_20 = var_7;
                                var_21 = (min((((-126 <= 3556) || ((min(var_7, var_2))))), ((((max((arr_11 [i_0]), (arr_2 [i_0 + 1] [i_0 + 1])))) > (arr_13 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1])))));
                            }
                            var_22 = (((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) <= 1));
                        }
                    }
                }
                var_23 = (max(var_23, var_8));
            }
        }
    }
    #pragma endscop
}
