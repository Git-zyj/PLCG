/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((arr_1 [i_0 + 1]) != (!14094379603506054690)));
                var_19 = (max(var_19, 6));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_20 = (min(var_20, (((((max(var_0, 14628839644119646917))) ? var_16 : 4095)))));
                    arr_13 [10] [10] = ((~(min(1828564130459245417, ((((arr_10 [i_2 - 3] [i_3] [i_4]) ? var_14 : 9938)))))));
                    arr_14 [i_3] &= ((~(min(var_14, (arr_6 [i_2 + 2] [i_2 + 2])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((((~var_9) ? ((+(((arr_8 [i_2 - 3] [i_2 - 3] [i_2 - 3]) ? 1828564130459245400 : var_12)))) : (arr_9 [i_2] [i_3] [i_2]))))));
                                arr_21 [i_2 - 3] [i_6] [i_4] [12] = (max(1828564130459245422, (((!(var_12 ^ 16618179943250306198))))));
                                var_22 = (min(var_22, (arr_6 [i_2] [i_4])));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 2; i_7 < 21;i_7 += 1)
    {
        arr_24 [i_7] = ((+(max(16618179943250306199, ((((arr_23 [i_7 + 1] [i_7]) < (arr_22 [i_7] [i_7]))))))));
        arr_25 [i_7 - 1] = (~(var_3 * var_13));
    }
    #pragma endscop
}
