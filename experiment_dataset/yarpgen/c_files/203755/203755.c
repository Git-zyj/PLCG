/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (min(((var_3 ? (arr_3 [i_0 - 1] [i_0 + 1]) : (arr_3 [i_0 - 1] [i_0 - 1]))), (max((arr_0 [i_0 + 1] [i_0 - 1]), var_14))));
                var_18 *= 1487160397;
            }
        }
    }
    var_19 += ((var_3 - (min(2003489673, (527416683 > 17153)))));
    #pragma endscop
}
