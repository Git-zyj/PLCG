/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!((!((max(7925, var_5)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] = ((~(min(-1, ((~(arr_6 [i_2])))))));
                    var_18 = -17854;
                    var_19 = (max(((max((~1246795874), var_16))), ((-(max((arr_8 [i_0] [i_0] [i_0]), 5444))))));
                }
            }
        }
    }
    var_20 = ((-((-(max(13404, var_7))))));
    var_21 *= (!0);
    #pragma endscop
}
