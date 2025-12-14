/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((min(var_0, 81)) < ((var_8 ? var_7 : (var_6 > 81)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_12 &= (arr_3 [i_1 + 2] [i_0 - 3]);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_13 -= ((((0 * (min(127, 0)))) ^ 10));
                    var_14 ^= ((((((65 ? var_6 : var_1)))) || ((!((min(1, (arr_0 [i_0]))))))));
                }
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    arr_10 [11] [i_1] [i_1 - 2] [i_3] = (((arr_0 [16]) ? (arr_8 [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0 + 3] [i_0])));
                    arr_11 [i_3] [i_1] [i_1] = min((((!((min(1850661509, var_3)))))), 14062452676233686691);
                }
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    var_15 = (min(var_15, var_6));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_16 *= ((((~(min(7862, var_4))))) ? (min((((arr_13 [1] [i_1]) % (arr_5 [i_0] [i_0] [i_4]))), (((var_2 ? var_7 : (arr_3 [i_6] [4])))))) : (min((var_3 || -84), 12530434376008275883)));
                                var_17 = var_7;
                                arr_19 [i_0] [i_0 + 3] [i_4] = ((-((((var_0 && var_8) || (arr_12 [i_0 - 3]))))));
                            }
                        }
                    }
                    arr_20 [i_4] [i_0 + 3] [i_4] [i_0] = var_1;
                    var_18 = -4577891286318298519;
                }
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    var_19 -= var_1;
                    arr_25 [13] [i_7] [i_7] = (min((((!3) ? (arr_6 [i_0] [i_1] [i_7]) : (arr_14 [i_0] [i_1 + 2] [i_7] [i_0] [i_7] [i_0]))), (((~(min(-81, var_9)))))));
                }
                var_20 += (((((min(45, 84)))) - ((((86 ? var_7 : 5916309697701275733)) - (min(447465185675935078, (arr_13 [13] [i_1 - 2])))))));
            }
        }
    }
    #pragma endscop
}
