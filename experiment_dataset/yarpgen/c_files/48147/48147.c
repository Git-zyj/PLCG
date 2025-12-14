/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, 4294967286));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_0] [1] [i_0] |= ((((((((min(var_6, 35027))) - 102)) + 2147483647)) << ((((((var_5 / (arr_0 [i_1 + 1] [i_1 - 4]))))) - 1))));
                arr_8 [i_0] [i_0] = (arr_1 [i_1] [i_0 + 4]);
                arr_9 [i_0] [i_1] = var_19;

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_21 = (max((arr_1 [i_0 + 2] [i_1 - 4]), (((~(arr_4 [i_2]))))));
                    arr_12 [i_0] [4] [i_2] = (((!35028) ? (((arr_6 [i_1 - 1]) ? (-9223372036854775807 - 1) : (arr_6 [i_1 - 4]))) : (((((arr_6 [i_1 - 4]) < (arr_6 [i_1 - 1])))))));
                }
            }
        }
    }
    var_22 = (min(var_22, var_16));
    #pragma endscop
}
