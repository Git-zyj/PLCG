/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] [i_2] [i_0] [i_4] = 33554431;
                                arr_17 [i_1] [i_3] [i_2 - 4] [1] [1] [i_1] = (!var_5);
                                arr_18 [i_3] [i_1] [i_3] [i_2 - 3] [i_2] [i_1] [i_0] = 27207;
                                arr_19 [i_3] [i_3] [i_4] [i_3] [i_3] [i_3] = ((!(+-1)));
                                arr_20 [i_0] [8] [i_0] [i_3] [i_4] = -5;
                            }
                        }
                    }
                    arr_21 [i_0] |= (arr_12 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2]);
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        arr_24 [i_5] = 33554431;
        arr_25 [i_5] [i_5] = ((~(((((-(arr_23 [i_5] [i_5])))) ? (((-(arr_23 [i_5] [i_5])))) : (arr_22 [i_5] [i_5])))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
    {
        arr_28 [18] = -33554431;
        arr_29 [i_6] [i_6] = ((var_1 ? (10336 != var_15) : -33554433));
        arr_30 [i_6] = 0;
    }
    var_17 = var_10;
    var_18 = ((var_3 / (((var_7 ? var_11 : 1)))));
    #pragma endscop
}
