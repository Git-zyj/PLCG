/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_1);
    var_18 = (3189936815 << (8489040509327267672 - 8489040509327267665));
    var_19 |= (((var_8 <= var_6) ? (min(8489040509327267691, -8489040509327267672)) : (((((max(var_2, var_2)) > (var_16 > var_15)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0] [3] [2] = (((max((arr_3 [i_0] [i_2 - 1] [i_2]), ((-(arr_2 [i_0])))))) && ((max(-1426059749, (~8489040509327267672)))));
                    var_20 -= max((arr_8 [i_1 - 2] [i_2 + 1] [i_2]), (!-716503427));
                }
            }
        }
    }
    #pragma endscop
}
