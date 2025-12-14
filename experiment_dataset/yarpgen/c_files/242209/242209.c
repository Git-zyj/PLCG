/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_11;
    var_14 |= ((~(min(var_9, (~var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((2914139016814264568 + 11948774176010244025) * ((((!(arr_3 [i_0]))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((1 > ((-11948774176010244025 ? (arr_6 [i_2] [i_1]) : 6497969897699307590))));
                    var_15 = var_0;
                }
            }
        }
    }
    #pragma endscop
}
