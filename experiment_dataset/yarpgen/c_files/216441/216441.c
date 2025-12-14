/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_5;
    var_15 = 8767269581742099783;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 *= -17649;
                arr_7 [i_1] [1] = ((32 ? ((~(arr_2 [i_0]))) : (min(-17649, (arr_3 [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
