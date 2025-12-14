/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -var_15;
    var_19 = ((((~((var_16 ? var_9 : var_4)))) >> (((min(var_1, (2735329800628129008 + var_13))) - 56))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (~(2351480705 && -1));
                var_21 = (min(var_16, 1));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 24;i_4 += 1)
            {
                {
                    arr_12 [i_4] = ((((min((arr_5 [i_2]), 12061349310895039843)) & (arr_5 [i_2]))));
                    var_22 = (min(var_22, ((min((arr_9 [18]), (arr_9 [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_23 &= (min(((min(1, -854140895))), ((((((arr_7 [i_6]) + (arr_5 [i_3])))) ? (min(var_9, var_3)) : (var_11 + 2744541960)))));
                                var_24 = (max((((60 >> 1) ? ((min(2147483619, 118))) : (min((arr_6 [i_2]), var_10)))), (((var_4 / (((arr_5 [i_2]) * 1)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
