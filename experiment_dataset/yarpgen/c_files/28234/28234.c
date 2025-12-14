/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~2404439261);
    var_17 = (min(var_17, var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [i_0] [i_2] = var_0;
                    var_18 ^= (~1890528035);
                    arr_10 [i_0] = (arr_8 [i_0] [i_1 + 2] [i_0] [i_0]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1 + 3] [i_1 + 3] [i_0] = (arr_7 [i_0]);
                                var_19 = ((((((arr_14 [i_5 + 1] [i_0] [i_0] [i_0] [i_0]) ? (arr_4 [i_1] [i_0]) : (arr_13 [i_0] [i_1 - 1] [i_4 + 1])))) ? var_15 : -8669905249379911092));
                                arr_19 [i_0] [i_1 + 1] [i_0] [5] [i_1] = (arr_5 [i_0]);
                                var_20 = (arr_11 [11] [i_4 + 2] [11]);
                            }
                        }
                    }
                    arr_20 [i_0] [i_1] [i_3] = (arr_12 [i_1 + 2] [i_1 + 1]);
                }
                var_21 = (min((arr_4 [i_1 - 1] [i_0]), (arr_4 [i_1 + 3] [14])));
                var_22 = arr_11 [i_0] [i_0] [i_0];
            }
        }
    }
    var_23 = (max(var_23, (((!(~var_2))))));
    var_24 = var_3;
    #pragma endscop
}
