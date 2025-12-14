/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (((-5681 % (1 << 0))));
    var_21 = (min((max(var_0, (var_12 - 14))), var_4));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = ((((-(arr_1 [i_0]))) - -894862103));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_23 = (max(var_23, (-15 | -8919005983451682186)));
                        var_24 = (max(var_24, ((((((((arr_8 [i_0] [i_0] [10] [i_3]) >= -14))) * (~0))) >> (((((arr_9 [15] [i_1] [i_2] [i_3] [i_0] [i_3]) | 1)) - 3322777069))))));
                        arr_11 [19] [19] [i_2] [19] = (~-0);
                    }
                    arr_12 [i_2] = (((((((((arr_9 [17] [12] [i_1] [i_1] [i_0] [i_0]) | (arr_0 [i_2])))) || ((((arr_6 [12] [i_1]) / 6619390299864256202)))))) != -5721));
                }
            }
        }
        arr_13 [i_0] [i_0] = ((((arr_6 [1] [i_0]) >= (arr_6 [i_0] [i_0]))));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_25 = (max(var_25, 189));
        var_26 = (67 == 1);
    }
    #pragma endscop
}
