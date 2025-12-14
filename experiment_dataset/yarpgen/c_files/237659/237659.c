/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 ^= -18;
        var_20 = (min(var_20, (~113)));
        var_21 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    arr_11 [1] [i_2] [i_2] [i_2] = (((((4095 ? -2147483642 : 0))) ? (arr_9 [i_1] [i_2] [i_3] [i_3]) : (max((arr_7 [i_1] [i_3]), (arr_7 [i_1] [i_1])))));
                    var_22 = (max(var_22, ((min(((((arr_5 [i_3]) ? (arr_5 [i_1]) : 7))), (((arr_3 [i_2]) ? (((5 ? -2147483642 : 5))) : ((18 ? var_9 : 65523)))))))));
                    var_23 = (((((arr_7 [i_3] [i_2]) ? -3 : (arr_7 [i_1] [i_2]))) | ((-21964 ? 0 : 162))));
                }
            }
        }
        arr_12 [i_1] = (arr_10 [i_1] [i_1] [i_1] [i_1]);
    }
    #pragma endscop
}
