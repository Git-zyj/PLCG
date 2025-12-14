/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [14] = ((~var_1) ? (((var_0 ? 111 : 7))) : (((var_0 / (arr_16 [i_1])))));
                                var_11 -= (var_4 ? (var_7 / var_0) : (((arr_9 [i_0] [i_1] [i_1] [i_3] [i_4]) ? (arr_9 [i_0] [i_1] [i_2] [i_3] [8]) : var_4)));
                            }
                        }
                    }
                    arr_18 [i_0] [i_1] [i_2] = (((((((min(var_8, -9180146406396585527))) ? -18834 : ((var_8 ? 8422 : var_3))))) ? (((~(arr_13 [5] [i_1] [i_1] [i_1] [5] [i_1] [i_1])))) : ((((!(-32767 - 1))) ? 32749 : (min(var_10, 32749))))));
                }

                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_12 = (((((~41) + 2147483647)) >> ((((16870805730500955049 ? 32736 : 10874)) - 32719))));
                                arr_28 [i_5] [i_5] [i_5] = ((((~var_4) ? ((13131 ? -1 : 18446744073709551615)) : var_3)));
                            }
                        }
                    }
                    arr_29 [8] [8] [i_5] = (arr_0 [i_1]);
                }
            }
        }
    }
    var_13 = (var_9 && var_4);
    var_14 = (~var_10);
    var_15 = var_3;
    #pragma endscop
}
