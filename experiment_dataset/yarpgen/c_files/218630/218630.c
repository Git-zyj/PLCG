/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(((~((-19785 ? var_13 : var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (min((arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1]), ((min((arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 1]), (arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 1]))))))));
                arr_5 [i_1 - 2] = (((((arr_4 [i_0 - 1] [i_0 - 1] [i_0]) + 9223372036854775807)) >> ((((~(((arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]) << (var_12 - 3607))))) + 50))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                var_16 = ((((arr_7 [i_3]) ? 1382297780 : var_2)));
                arr_10 [i_3] [i_2] [i_3] = (arr_9 [12]);
                arr_11 [i_3] = ((-(1141653878 || var_10)));
                var_17 = ((!(((~((-1241482448 ? var_9 : var_1)))))));
            }
        }
    }
    var_18 = ((-((var_1 ? -var_12 : var_0))));
    #pragma endscop
}
