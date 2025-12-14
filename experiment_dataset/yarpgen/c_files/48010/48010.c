/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((var_0 ? (((!(((-2147483647 - 1) || 2147483647))))) : (min(var_3, 1))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [i_0] = (arr_1 [i_1]);
                var_12 = ((((((var_5 >> (arr_2 [i_0 + 1]))))) ? 3120311927 : ((((max(8249370058728016394, 4)) > 1029008266)))));
            }
        }
    }
    #pragma endscop
}
