/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = ((((var_12 + var_17) * (arr_2 [i_0]))));
                var_20 = ((((min(1380668151, (-9223372036854775807 - 1)))) ? ((min(-1380668164, (max((arr_1 [i_1]), -52))))) : (max(var_0, (arr_1 [i_1 + 2])))));
                var_21 = (arr_1 [i_0]);
                var_22 += var_4;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_23 = (max(var_23, ((((((max(7553065016746207471, (arr_4 [i_2] [i_2]))))) != ((~(arr_4 [i_2] [13]))))))));
                var_24 = var_13;
            }
        }
    }
    var_25 = (max(var_25, (((var_14 ? ((-(min(var_9, var_2)))) : -347782816508183498)))));
    var_26 = var_6;
    var_27 = (max(var_27, ((min((max(1344389535922135911, var_11)), (((var_13 ? 1380668151 : ((var_12 ? var_5 : var_7))))))))));
    #pragma endscop
}
