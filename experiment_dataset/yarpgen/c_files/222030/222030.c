/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (!var_1);
                arr_6 [1] [i_0] = ((~((((max(4, -2489767415324478632))) ? -6200333100206468586 : var_0))));
                var_14 = (min(((((~var_2) > (!var_2)))), (((var_8 ? var_2 : var_9)))));
            }
        }
    }
    var_15 &= ((~((min(6200333100206468586, 6200333100206468586)))));
    #pragma endscop
}
