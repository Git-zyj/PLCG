/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = ((var_3 ? ((-(var_0 / var_14))) : (((arr_5 [i_1] [i_2 - 1] [i_1] [i_2 - 1]) << (var_17 - 25479)))));
                    var_20 = ((var_9 ? ((1 ? ((max(-4444, -89))) : var_16)) : (max(((-(arr_1 [i_0]))), (arr_5 [i_0] [i_0] [i_0] [i_0])))));
                    arr_7 [i_0] [i_0] [i_1] [i_2 - 1] = ((((1 ? -7459 : 1)) < (arr_0 [i_1 - 1] [i_0])));
                    arr_8 [i_0] [i_0] [i_0] [i_2] &= ((-(max(var_17, 1))));
                }
            }
        }
    }
    var_21 = ((((var_4 ? 3225 : (var_8 - var_2))) << ((((var_11 / ((max(1, var_14))))) + 23))));
    var_22 = (((max(-var_16, ((1 ? 14 : 1)))) << 1));
    #pragma endscop
}
