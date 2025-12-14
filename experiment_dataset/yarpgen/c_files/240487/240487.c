/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((~(min(var_8, 1))))) ? (!var_2) : (!-2047492115)));
    var_13 = (max(((~((var_4 ? var_9 : var_7)))), ((max((max(var_0, var_0)), (min(var_7, 255)))))));
    var_14 = (min(var_14, ((max((~-175), ((~(max(var_8, var_8)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (max(var_15, 25370));
                var_16 = ((~(min(((~(arr_4 [i_0]))), (~var_6)))));
            }
        }
    }
    #pragma endscop
}
