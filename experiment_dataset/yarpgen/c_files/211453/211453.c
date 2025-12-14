/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 = 7634548825549268088;
                arr_4 [i_0] [i_1] [i_1] = (!var_13);
            }
        }
    }
    var_19 = ((!(~var_15)));
    var_20 = (((max((var_3 & var_12), var_11)) != ((var_1 ? -var_17 : -var_17))));
    var_21 = var_7;
    #pragma endscop
}
