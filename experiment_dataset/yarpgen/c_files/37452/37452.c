/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 *= (((((((1 ? 0 : 73)) == 24181))) > ((((38 && 24172) || (!-30194))))));
                    arr_8 [i_0] [i_0] [i_2] |= (((-24180 * 38) * (((1 / 87) * 195))));
                    var_17 = ((128 ? (0 / 1) : 32757));
                }
            }
        }
    }
    var_18 = (((((~(!53)))) ? (((32753 < (32742 - 1)))) : (((188 - 19) + var_14))));
    var_19 = ((-(var_8 && 85)));
    #pragma endscop
}
