/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = var_3;
                var_16 = (min(var_16, ((((((var_2 + var_5) + (arr_0 [i_1]))) > (((~(arr_4 [i_1 + 1] [i_1 + 1] [i_1])))))))));
            }
        }
    }
    var_17 = ((~(var_7 ^ var_14)));
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 13;i_3 += 1)
        {
            {
                arr_12 [i_3] [i_3 + 1] [i_2] = ((+((((max((arr_7 [i_2 - 1] [i_3]), var_8))) ? var_1 : var_0))));
                var_18 ^= (((-(var_12 - var_1))));
            }
        }
    }
    #pragma endscop
}
