/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = 16;
                                var_21 = 32761;
                                var_22 = (i_0 % 2 == zero) ? ((max((((arr_3 [i_2 + 2] [i_0]) + 2147483647)), (arr_4 [i_2] [i_0] [i_2])))) : ((max((((arr_3 [i_2 + 2] [i_0]) - 2147483647)), (arr_4 [i_2] [i_0] [i_2]))));
                                var_23 ^= ((((min((arr_6 [i_0 + 2] [i_1 + 2] [i_2]), (arr_3 [i_2] [1])))) ? (min((((arr_7 [i_0] [i_1 - 2] [12] [0] [i_0]) ? (arr_0 [i_0] [14]) : (arr_2 [8] [8]))), (1 || 255))) : (((-(arr_7 [i_0] [i_1] [i_2 - 1] [i_3] [i_4]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_24 = (min(((-(arr_12 [i_0] [i_2 - 1] [i_0] [8] [i_6 - 1] [i_2 + 1]))), (min((arr_12 [i_0] [i_2 - 1] [i_0] [i_0] [i_2 - 1] [i_0 + 1]), (arr_12 [i_0] [i_2 - 1] [i_0] [i_5] [i_6] [i_0])))));
                                arr_17 [1] |= ((63 ? ((((!(arr_5 [10] [0] [i_2 + 1]))))) : (((!(arr_14 [2] [2] [i_1] [i_5] [i_6] [14]))))));
                                var_25 = (min((0 && var_13), (((arr_0 [i_0 + 2] [i_0]) ? (arr_0 [i_0 + 2] [i_0]) : (arr_0 [i_0 + 2] [i_0])))));
                                var_26 = 32;
                                var_27 = (min(2145386496, (min(-24, 2147483647))));
                            }
                        }
                    }
                    var_28 = (min(var_28, (((255 ^ (arr_15 [10] [i_1] [i_0 + 2] [1] [10]))))));
                }
            }
        }
    }
    var_29 = var_1;
    #pragma endscop
}
