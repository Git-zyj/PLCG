/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_12 = 1553723105;
                    var_13 ^= ((10303 ? ((((arr_3 [i_0]) && (arr_3 [i_1])))) : (min(20373, 4080))));
                    var_14 = ((min(0, 2147483647)));
                }
                var_15 = (min(-32762, 13));
            }
        }
    }
    var_16 = var_0;
    var_17 = ((((((var_5 ? 240 : var_8)))) ? (((var_8 ? -1079906491 : 7))) : (40060 | -2147483647)));
    #pragma endscop
}
