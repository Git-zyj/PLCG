/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1] [i_0] [12] [1] [11] = (((((-((-1 ? 1 : 8))))) ? (max(var_8, var_5)) : ((((2147483647 - 12627) - ((var_14 ? 32737 : var_6)))))));
                                arr_13 [i_0] [10] [10] [i_2] [i_0] [i_4] = (((((885947374 ? 14538 : -1349721295))) ? (((!(!var_4)))) : 1));
                                arr_14 [i_2] [i_2] [i_2] [i_3] [i_4] = ((0 ? var_12 : 0));
                            }
                        }
                    }
                }
                arr_15 [13] [i_1] [i_0] = ((!(50205 != 0)));
                arr_16 [2] [12] = max(1, (~var_0));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_27 [i_0] [1] [i_5] [7] [i_0] = 10418;
                                arr_28 [i_1] [i_5] [14] [i_0] = ((-9354 ? 0 : -14539));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (1 <= -11583);
    #pragma endscop
}
