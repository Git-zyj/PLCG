/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = min(((~((~(arr_2 [i_2] [i_1] [i_0]))))), (((-(!-112161137)))));
                    var_16 = var_5;
                }
            }
        }
    }
    var_17 = (min(var_17, var_1));
    var_18 = ((~(max(((var_7 ? var_5 : var_5)), 112161124))));
    var_19 = (min(var_19, ((((~var_2) && ((((~var_4) ? -112161137 : (var_8 < var_9)))))))));
    #pragma endscop
}
