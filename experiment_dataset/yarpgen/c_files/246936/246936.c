/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 += (max((((518987734 / var_6) ? (((-518987757 ? -1 : var_7))) : (~var_5))), ((~(arr_2 [i_0 + 2])))));
                    var_17 = ((((min((arr_3 [i_0] [i_0 - 1] [i_0]), 18446744073709551615))) ? -var_6 : 118));
                }
            }
        }
    }
    var_18 = (((min((max(16, 0)), (min(125, 13926002344484015802)))) <= (min(var_2, -518987746))));
    var_19 = (min(var_19, var_2));
    #pragma endscop
}
