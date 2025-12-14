/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = ((6139123511903924034 ? 23 : 233));
                var_20 = ((var_15 ? -32 : 46));
            }
        }
    }
    var_21 = var_2;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                var_22 = 106;
                arr_10 [i_2] [i_2] [i_3] = max(23, -23);
            }
        }
    }
    var_23 = var_6;
    #pragma endscop
}
