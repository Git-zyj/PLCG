/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_13);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] = (min(((min(var_12, 8397))), ((28 & ((max(var_7, (arr_0 [i_1] [i_0]))))))));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = -536870912;
                }
            }
        }
    }
    #pragma endscop
}
