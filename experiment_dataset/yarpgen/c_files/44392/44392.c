/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = -62;
                var_21 = ((((min((!var_11), (max((arr_2 [i_0] [i_0]), (arr_1 [i_0])))))) & (arr_6 [i_0] [i_0] [i_0])));
            }
        }
    }
    var_22 = (((((((var_0 ? var_12 : var_3))) && (((var_5 ? var_7 : 13529693161292002689))))) ? 4917050912417548927 : var_7));
    #pragma endscop
}
