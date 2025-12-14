/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (248 != var_18);
    var_21 = (~var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((~(max(var_3, (arr_1 [i_0])))));
                arr_6 [i_1] [i_1] = ((~(min(22, 3002796734))));
            }
        }
    }
    var_22 = (~var_19);
    var_23 = var_13;
    #pragma endscop
}
