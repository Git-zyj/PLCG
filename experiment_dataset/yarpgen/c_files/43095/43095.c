/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (((var_3 ? 1 : (~var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_12 |= ((((((18255 > var_4) + (-17963 & -18275)))) ? ((((max(var_4, (arr_6 [i_1])))) << (((arr_3 [i_1]) - 1059043246667419605)))) : ((var_0 ? -var_9 : (-1 || -17961)))));
                var_13 *= (arr_0 [i_0]);
                var_14 = ((((((arr_4 [i_1 - 1]) ? (arr_3 [i_1 + 2]) : var_2))) ? (((((-(arr_6 [i_1])))) * (max((arr_3 [i_1]), var_10)))) : ((-((var_2 ? (arr_2 [i_1]) : var_7))))));
            }
        }
    }
    #pragma endscop
}
