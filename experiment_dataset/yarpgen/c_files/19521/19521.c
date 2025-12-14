/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -685;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = var_3;

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_17 = ((~((((arr_0 [i_0]) != (18446744073709551615 | var_0))))));
                    arr_6 [i_0] = arr_1 [i_0];
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_18 = (max(var_18, ((max((max(var_5, ((~(arr_3 [i_0] [i_3]))))), 18446744073709551597)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_15 [i_0] [1] [1] [i_3] [i_0] [i_4] [i_5] = (max(var_8, ((min((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1]))))));
                                arr_16 [i_0] = max((arr_14 [1] [i_0] [10] [7] [10] [i_0] [i_0]), ((((min(var_7, var_12))) * ((-(arr_12 [i_0] [i_1] [i_3] [i_4] [i_5]))))));
                                var_19 = ((~((~(arr_9 [i_0] [i_0 + 1] [4])))));
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    var_20 = (max(var_20, 18446744073709551597));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_21 = ((((((((arr_20 [i_0] [i_7] [i_6] [i_0]) + 18446744073709551615))) ? (~1) : 1009461219)) % (min((min(-1009461212, 1009461212)), 1))));
                                arr_23 [i_0] [i_1] = ((1144119607 ? (((min(288230376118157312, 1)) ^ ((((arr_1 [i_0]) & (arr_9 [i_0] [i_1] [i_1])))))) : (arr_13 [i_0] [1] [1] [1] [i_0] [i_6])));
                            }
                        }
                    }
                    var_22 = (arr_19 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1]);
                }
                arr_24 [7] [7] [i_0] = (arr_21 [i_0 + 2] [9] [i_1] [0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                var_23 = (~var_12);
                var_24 = var_9;
                arr_33 [i_9] = ((var_9 ? (arr_2 [i_9] [1] [1]) : (min((var_3 & var_0), var_5))));
            }
        }
    }
    #pragma endscop
}
