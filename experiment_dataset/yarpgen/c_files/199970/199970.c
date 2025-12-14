/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (min((((-((var_3 ? var_14 : -5610))))), ((var_16 ? var_16 : (((-5610 ? 29983 : 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (((arr_1 [12]) ? (min((max(-1207251264, (arr_1 [i_1]))), ((max(var_9, (arr_2 [i_0] [i_0])))))) : ((min((arr_0 [i_1]), 89)))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_20 *= (min(5610, 89));
                    var_21 |= (max(((min(15049, (arr_2 [i_2] [i_0])))), (max((((-1207251264 ? var_11 : (arr_2 [i_1] [i_0])))), -var_8))));
                }
                for (int i_3 = 3; i_3 < 19;i_3 += 1)
                {
                    arr_9 [i_3] = (((min(0, 1))));
                    arr_10 [i_0] [i_3] [i_3] = 159;
                    arr_11 [i_3] = (arr_1 [i_0]);

                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        var_22 = (!-14775);
                        var_23 -= ((-((~(!var_13)))));
                        arr_14 [i_1] [i_1] [i_0] [i_4 + 1] [2] [i_3] = var_11;
                    }
                }
                arr_15 [i_0] [i_0] = max(-189, 2047);
            }
        }
    }
    var_24 = ((!(((min(var_16, var_5))))));
    #pragma endscop
}
