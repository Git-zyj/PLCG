/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((-2147483647 - 1) + 2147483647)) + 2147483647)) << (35520 - 35520));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_21 ^= ((-(max((arr_6 [i_2] [11] [i_0]), -16901556599223378302))));
                    arr_9 [10] [i_1] [i_2] [i_0] = (!2147483641);
                }
            }
        }
    }
    var_22 = (((((max((max(-19614, 23868)), (0 < -2104754517369955704))))) ^ var_5));
    #pragma endscop
}
