/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((0 ? (min((~var_5), (-127 - 1))) : ((var_17 ? -var_15 : -var_1))));
    var_21 -= var_19;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((min(-var_2, 125)) / (var_3 * var_2)));
                var_22 = ((53079 ? ((-(min(7, (arr_5 [i_0] [i_0] [i_1 - 1]))))) : (((((min((arr_4 [i_0] [i_0]), -3795))) * var_7)))));
                var_23 = ((((min(var_7, -var_16))) ? -0 : (arr_4 [i_0] [i_1])));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] = (((-var_18 + 2147483647) << var_7));
                    var_24 = (max(var_24, var_3));
                }
            }
        }
    }
    var_25 = 0;
    #pragma endscop
}
