/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_20 |= ((((min(-var_6, ((min(1, 1)))))) ? var_0 : ((((138 <= ((1 ? var_6 : (arr_2 [i_0 + 4])))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_21 = ((~(min(((1 ? (arr_5 [i_0]) : 2147352072)), (((114 ? -114 : 76)))))));
                    var_22 = (max((arr_6 [i_0]), 56));
                }
            }
        }
        arr_11 [i_0] [i_0] = ((((((min(-120, (arr_10 [i_0 + 1] [2])))))) ? (min(10790605221306591855, (!122))) : -1));
        var_23 = (((~(-32767 - 1))));
    }
    #pragma endscop
}
