/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 -= (65535 > -32764);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (~65535)));
                    arr_9 [i_2] = (arr_6 [4] [i_1] [i_2] [i_2]);
                }
            }
        }
    }
    var_15 = ((var_0 ? ((min((11 >> 0), ((var_4 >> (var_10 + 6590427854970031269)))))) : ((~((var_3 ? 2961224357 : 2961224335))))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    arr_16 [i_3] = -var_7;
                    var_16 += ((min(var_1, (arr_1 [i_5] [i_5]))));
                    arr_17 [i_3] [i_3] [6] [i_3] |= ((!(arr_7 [i_3] [i_4] [0])));
                }
            }
        }
    }
    #pragma endscop
}
