/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 = (((((((var_9 || (arr_1 [i_0])))) / ((var_13 + (arr_2 [1]))))) + (var_1 + -24924)));
                    arr_6 [i_2] = (((((!var_4) >= (((arr_2 [i_0]) * (arr_3 [i_0] [i_1]))))) && var_5));
                    arr_7 [i_2] = ((((max((arr_4 [i_0] [i_0] [i_1] [2]), var_11))) / var_5));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                arr_15 [i_3] = 26229;
                arr_16 [i_3] [i_4] = (((arr_13 [i_3 - 2] [i_3 + 1]) ? ((var_7 ? ((((arr_10 [i_3]) ^ -41))) : (arr_0 [1]))) : (arr_1 [i_3])));
            }
        }
    }
    #pragma endscop
}
