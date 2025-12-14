/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, ((((42 ? var_11 : (-137676326 & 10492)))))));

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        var_15 = ((((!(-137676326 / 13852855371355458842))) ? (max(((-52 ? 52522 : 4593888702354092772)), 795654053)) : (((((var_3 > 4593888702354092774) == 137676325))))));
                        arr_10 [1] [i_0] [i_0] [i_0] [i_0] = 4682689304484471250;
                        var_16 = (min(var_16, ((((((var_8 | (max(var_13, var_10))))) ? (((~(arr_2 [i_2] [i_2 + 1])))) : (((~1) ? (((4593888702354092777 ? -77 : var_9))) : var_3)))))));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_17 *= var_4;
                        arr_13 [12] [i_1] [i_0] [12] = (max(((var_0 ? var_6 : var_11)), (((-33269 || (((-(arr_6 [i_0] [i_1] [i_2] [i_4])))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_18 |= (max(1965945627, (arr_12 [i_0] [i_1] [10])));
                                var_19 = 65535;
                                arr_18 [i_0] [i_0] [i_2] = 0;
                                var_20 = ((((max((arr_5 [i_6] [i_2 - 1] [i_2 - 1]), (!var_9)))) ? (max(((32266 ? var_13 : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))), 0)) : (((((((arr_17 [i_5] [i_5] [8]) ? var_4 : var_9))) || ((max(4593888702354092777, var_3))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_9;
    #pragma endscop
}
