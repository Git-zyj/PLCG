/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((((arr_5 [i_1] [i_0]) - ((var_3 ? var_11 : var_0))))) ? ((((min(var_3, var_9))))) : 2639686056));
                var_12 = (!var_7);
                var_13 = (arr_3 [i_0]);
            }
        }
    }
    var_14 -= ((((var_3 && (!var_11))) || (min(var_5, (!var_9)))));
    var_15 = (min(((((var_0 ? var_4 : var_2)) - var_3)), var_8));
    #pragma endscop
}
