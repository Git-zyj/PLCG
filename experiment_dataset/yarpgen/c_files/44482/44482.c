/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max((((-1 && 2305842940494217216) ? (-1 | 3209) : ((10300084200226425713 ? 25 : 10300084200226425714)))), var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = (!3209);
                var_20 = (max(var_20, (arr_3 [1] [i_1])));
            }
        }
    }
    #pragma endscop
}
