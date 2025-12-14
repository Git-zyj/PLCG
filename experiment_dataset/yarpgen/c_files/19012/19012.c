/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (arr_3 [i_0] [1]);
                var_13 = (((((0 ? 4491133779885408726 : -25443))) ? (((!var_6) ? 14452 : (arr_0 [i_0]))) : (!-52)));
                var_14 += ((((((((max(42336, -108)))) + (~var_9)))) ? -14426 : (((-84 + 2147483647) >> (((arr_0 [2]) - 21476))))));
            }
        }
    }
    var_15 |= ((+(min((((var_10 + 2147483647) >> (var_9 - 7208785486604170793))), (!var_1)))));
    #pragma endscop
}
