/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [8] = ((((((arr_1 [i_0 + 1] [i_0]) << (((arr_4 [i_0] [i_0 + 1] [i_1]) - 145804827365603771))))) && ((((arr_0 [i_1 - 1]) * (arr_4 [i_0 - 1] [i_0 + 1] [i_1]))))));
                var_10 = ((max(var_7, var_8)));
            }
        }
    }
    var_11 = ((((min(417800670, var_7))) ? 52019 : 9220));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                {
                    arr_13 [i_3] [8] [i_3] [i_3] = ((((((arr_2 [i_4 - 2] [i_4 - 2]) ? ((max((arr_9 [i_2] [1]), var_9))) : (arr_12 [i_4] [i_3] [i_2])))) < 137434759168));
                    var_12 = (((arr_7 [i_2]) ? ((var_8 ? ((var_3 ? var_2 : (arr_3 [i_3] [i_3]))) : ((var_1 ? var_8 : var_7)))) : (((min(var_5, var_2))))));
                }
            }
        }
    }
    var_13 = (min(var_13, var_8));
    #pragma endscop
}
