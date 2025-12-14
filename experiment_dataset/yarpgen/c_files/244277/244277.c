/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = 1743818855497644340;
                var_13 += (((arr_0 [i_0]) && -1));
                arr_5 [i_1] = (((((arr_1 [i_0 - 2] [i_0 + 1]) ? (arr_1 [i_0] [i_0 - 1]) : 1)) >= (arr_1 [17] [i_0 - 3])));
                var_14 = (arr_2 [i_0 - 2] [i_0 - 1] [i_1]);
            }
        }
    }
    var_15 = (min(var_15, ((((69 >= ((var_11 ? var_0 : var_7))))))));
    var_16 -= ((((((84 ? 13685 : var_9))) ? 6117 : var_10)));
    var_17 = var_10;
    #pragma endscop
}
