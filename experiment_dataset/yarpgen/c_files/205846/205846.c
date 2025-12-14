/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((!(var_6 - 3549320865)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 = (((((var_8 + ((max(var_6, var_9)))))) ? var_9 : ((3549320865 ? (-9223372036854775807 - 1) : 745646406))));
                    arr_9 [i_2] [i_2] [i_1] [i_0] |= (2147483635 ^ 745646431);
                }
            }
        }
    }
    var_12 = (((-9223372036854775807 - 1) ? var_3 : ((min((var_2 > 1), ((var_5 >> (-2147483635 + 2147483645))))))));
    #pragma endscop
}
