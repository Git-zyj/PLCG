/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, -101));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_2] [7] = ((!(((-(((!(arr_4 [i_1] [i_1] [i_2])))))))));
                        arr_11 [i_0] [19] [i_0] [19] [i_0] [i_0] &= (!32767);
                        arr_12 [i_0] [i_0] [i_2] [i_1] [i_1] [i_0] = var_5;
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_18 = (min(var_18, (((+(((var_14 == (((arr_0 [i_0]) | var_12))))))))));
                        arr_17 [i_4] [14] [14] [i_0] [i_0] = 0;
                    }
                    arr_18 [2] [2] [2] = ((var_3 ? -826682125023257895 : (max((arr_13 [21] [21] [i_0]), 4170717125721890349))));
                }
            }
        }
    }
    var_19 *= (max(var_1, (((!((max(var_11, (-2147483647 - 1)))))))));
    var_20 -= -var_3;
    #pragma endscop
}
