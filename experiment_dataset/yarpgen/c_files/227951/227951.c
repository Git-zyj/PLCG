/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((67 & (var_7 - var_5)));
    var_13 += 70;
    var_14 = ((((-var_2 >= (max(var_9, 207963365140260525)))) ? var_4 : var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_2] [19] [i_0] = var_0;
                    arr_11 [i_0] [i_0] [19] [i_0] = (7 & 0);

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        var_15 = (((201 % 70) ? (((13 == ((-13324 ? var_11 : var_0))))) : (((max(var_10, 198))))));
                        arr_16 [i_0] [2] = (max((((arr_15 [i_3 - 1] [21] [i_3 - 1] [14] [1] [8]) ? 67 : var_3)), ((((var_0 ? var_4 : 118))))));
                        arr_17 [i_0] [i_0] [i_0] [19] [i_3] = ((((~(~var_0)))) ? (120 ^ -1) : (((((((~(arr_0 [i_0]))) + 2147483647)) << ((((var_9 << (var_7 - 212))) - 18))))));
                        arr_18 [8] [10] [i_0] [8] [10] = ((-121 ? 185 : 120));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_16 -= (max(var_9, var_4));
                        var_17 = var_11;
                    }
                    var_18 = 110;
                    var_19 -= -4420735598995615395;
                }
            }
        }
    }
    #pragma endscop
}
