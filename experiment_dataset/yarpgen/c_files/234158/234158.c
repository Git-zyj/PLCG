/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (max(-7322274497223216475, (max(((var_13 ? var_5 : -7322274497223216466)), -7322274497223216492))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = (!-7322274497223216462);
                    arr_7 [i_0] [i_2] [i_0] [i_0] = (--12343);
                    arr_8 [i_2] [19] [i_2] = ((((min(-var_12, ((var_2 ? var_6 : 1))))) ? (((-((-2147483634 ? var_13 : var_7))))) : -7322274497223216493));
                    var_19 = ((var_1 == (max(((-7322274497223216471 + (arr_0 [13]))), 7322274497223216473))));
                }
            }
        }
    }
    var_20 = var_14;
    #pragma endscop
}
