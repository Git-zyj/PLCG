/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_12));
    var_17 -= (~var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = 16384;
                arr_4 [i_0] [i_1] [i_1] = (((4641854707302268441 ? (arr_3 [i_0] [i_1]) : (((arr_2 [i_1]) / (arr_3 [i_0] [i_1]))))));
            }
        }
    }
    var_19 = (min(((((((var_10 ? var_2 : var_13))) ? -1024 : ((-4641854707302268450 ? var_10 : var_9))))), var_7));
    var_20 = (~var_15);
    #pragma endscop
}
