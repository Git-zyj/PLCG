/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_5 ? (((var_2 ? -172398928041432118 : var_7))) : ((((max(172398928041432124, var_8))) ? ((var_12 ? 145 : var_0)) : var_3))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = 6140800416206340161;
                arr_5 [i_0] = var_2;
            }
        }
    }
    #pragma endscop
}
