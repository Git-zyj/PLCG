/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = 255;

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_14 = (((arr_3 [1] [11] [i_2]) && (((var_7 ? (((!(arr_7 [i_0] [i_1] [2] [i_2])))) : -83)))));
                    arr_8 [i_1] = 0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] = 16055407890281389115;
                                var_15 |= (((arr_12 [17] [i_1 + 1] [i_1 + 2] [8] [i_1 + 2] [i_1 - 1]) > (((-43 ? 6383540819165028978 : 34)))));
                                arr_14 [i_0] [i_0] [i_0] [i_1] = (arr_6 [i_0] [i_1] [i_3] [i_3]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_1] [i_1] = 6;
                                var_16 = 6;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_8;
    var_18 = var_9;
    var_19 = (var_10 / 38);
    #pragma endscop
}
