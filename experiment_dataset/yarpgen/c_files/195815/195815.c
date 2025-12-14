/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -15962;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (((!(((453470806 ? -453470804 : -15953))))) ? -1 : (max((((arr_0 [i_0]) ? var_9 : 453470806)), (min(1, -638295258)))));
                arr_7 [i_1] &= (min(126, ((((max((arr_6 [i_0] [1]), (arr_1 [i_0 - 2])))) ? 1 : ((1 ? var_17 : var_2))))));
            }
        }
    }
    var_20 = var_16;
    var_21 = 0;
    #pragma endscop
}
