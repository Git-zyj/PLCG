/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_10 = var_8;
                var_11 &= (arr_4 [i_0]);
            }
        }
    }
    var_12 = (((((min(var_2, (1793633644 / -1210))) + 2147483647)) >> (var_7 - 2110345280)));
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                var_14 -= (min(((var_1 << (min((arr_6 [i_2 - 1]), var_6)))), (((((min(1793633654, var_3))) ? ((-12060 ? var_5 : (arr_2 [i_2]))) : (arr_2 [i_2]))))));
                arr_11 [i_2] = (((min(var_6, (~var_6))) | (arr_6 [i_2])));
            }
        }
    }
    #pragma endscop
}
