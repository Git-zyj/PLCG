/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_14 ^= ((((((var_9 ? var_5 : var_7)))) ? (((~var_12) ^ var_6)) : ((((!var_0) ? (!56) : var_2)))));
        arr_2 [i_0] [i_0 + 2] = var_2;
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                {
                    arr_10 [i_3] [i_3] [i_3 + 2] = ((var_8 ? ((var_4 / (arr_8 [i_2] [i_3]))) : ((((min(var_8, var_5)))))));
                    arr_11 [i_3] = ((!((min((arr_6 [i_2 + 3]), (arr_6 [i_2 + 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
