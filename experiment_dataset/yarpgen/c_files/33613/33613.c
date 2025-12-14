/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (((-(var_12 / 16360360848508842111))));
                arr_6 [i_0] = (max((((arr_3 [i_0]) & (~-57))), (max(var_15, (arr_1 [i_0 + 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 ^= var_6;
                            var_18 = (min((arr_2 [i_0 + 3] [i_0]), var_11));
                            arr_12 [i_0] [14] [i_2] [i_3] = ((((((arr_8 [i_0] [i_1] [i_2] [i_3]) ? 222 : ((min((arr_7 [i_0] [i_0] [i_0] [7]), (arr_9 [i_0] [8] [i_0]))))))) ? (arr_9 [i_0 + 1] [i_0 - 1] [i_0]) : (arr_4 [i_0] [i_2])));
                            var_19 = 63;
                        }
                    }
                }
            }
        }
    }
    var_20 = var_2;
    var_21 |= var_16;
    var_22 = ((var_13 ? (min(var_14, var_1)) : (((((min(646832325, var_13))) ? 63512 : var_13)))));
    #pragma endscop
}
