/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = ((!(arr_2 [i_0 + 4] [i_1 - 1])));
                arr_7 [13] [i_1] [i_1] = (max((21 > var_9), (((arr_0 [i_0 + 3]) <= 21398))));
            }
        }
    }
    var_19 = (min(var_19, var_9));
    #pragma endscop
}
