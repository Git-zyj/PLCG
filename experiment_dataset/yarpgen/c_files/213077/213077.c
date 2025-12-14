/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    var_18 = min(var_9, ((var_10 ? var_15 : (17484251608589431479 > var_6))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = 2203413982000680042;
                    var_20 = max((--2203413982000680052), ((var_8 - (var_7 * 13))));
                }
            }
        }
    }
    #pragma endscop
}
