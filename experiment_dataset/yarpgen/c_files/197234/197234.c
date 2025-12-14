/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_15 |= (max(((((arr_0 [i_0 + 1]) > (arr_0 [i_0 + 1])))), (max((!109), (min(241, (arr_0 [i_0 + 1])))))));
        arr_2 [i_0 + 3] = (arr_0 [i_0]);
        var_16 = (max(((~(arr_0 [i_0 + 3]))), (((2221103909 && (arr_0 [i_0 + 3]))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            {
                var_17 = (arr_3 [i_1]);
                arr_7 [i_1] [i_1] [i_2] = ((~(arr_5 [i_2])));
                arr_8 [i_1] [i_2] = ((arr_1 [i_1]) ? ((+(((arr_0 [i_1]) * (arr_0 [i_1]))))) : (((max((max(127, 1)), (!1))))));
                var_18 = (((~25921) || ((!(!var_3)))));
                var_19 = var_2;
            }
        }
    }
    #pragma endscop
}
