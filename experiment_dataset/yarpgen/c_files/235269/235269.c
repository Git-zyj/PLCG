/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((min(((-((0 ? var_2 : (arr_2 [i_0] [i_1] [i_1 + 3]))))), (max(((max(-12808, var_3))), ((var_5 ? -498737562 : var_4)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 = (max(((max(var_9, var_10))), (max((arr_1 [i_1 + 1] [i_0]), var_4))));
                            arr_9 [i_0] = var_2;
                            var_13 = (((((!(arr_0 [i_0])))) % ((min((max(var_7, 1)), (~65533))))));
                        }
                    }
                }
                arr_10 [i_0] = (arr_4 [i_0] [i_0] [i_0] [i_0]);
                arr_11 [i_0] = var_7;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    var_14 = ((!(((-(((arr_17 [i_4] [i_4] [i_6]) ? 1 : 1054006502)))))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_15 -= 142;
                                arr_24 [i_7] [i_5] [i_7] [i_5 - 3] [i_7] [i_5 - 3] = 4211915427;
                                var_16 ^= (arr_2 [i_8 - 1] [i_7 + 1] [i_5 - 3]);
                                var_17 = (max(var_17, var_9));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (~var_7);
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                var_19 &= (arr_26 [i_9]);
                arr_29 [i_9] [i_9] = ((((((((var_8 ? var_9 : (arr_28 [0])))) ? (min(1, 4294967295)) : -96))) ? (arr_25 [i_9]) : (min((((1054006502 ? var_6 : (arr_26 [i_10])))), ((850208385 ? var_9 : (arr_25 [1])))))));
            }
        }
    }
    #pragma endscop
}
