/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (((~(arr_2 [i_0]))));
        arr_4 [i_0] [8] = -7061;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_15 *= ((((min(-846273900, var_0)) != (arr_6 [i_1] [i_1]))));
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                {
                    arr_14 [i_1] [i_1] [i_1] [i_1] = ((~(arr_7 [i_3 - 1])));
                    var_16 &= (((var_1 + (arr_6 [13] [i_2]))));
                }
            }
        }
    }
    #pragma endscop
}
