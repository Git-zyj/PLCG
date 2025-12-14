/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 *= (~231);
        var_19 = ((((max((144115188075855871 == 2), (arr_1 [i_0])))) <= (-269880596 & 89)));
    }
    var_20 = 24656;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            {
                arr_8 [i_2] = ((~(min(var_1, (arr_7 [i_2 + 2] [i_2 + 2] [i_2 + 4])))));
                arr_9 [18] [i_2] = var_8;
            }
        }
    }
    #pragma endscop
}
