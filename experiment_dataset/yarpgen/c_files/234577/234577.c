/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 6144;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = var_6;
                    arr_9 [i_0] [i_1] [i_1] = (max(((var_1 ? (min(var_14, -2147483631)) : 910)), (arr_0 [i_2 - 3])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                {
                    arr_19 [i_3] [i_5] [i_4] [i_3] = ((!(-26 && -6116)));
                    var_21 ^= ((-(((13783450446279883273 & -1) + (((var_6 ? var_0 : var_7)))))));
                    arr_20 [6] [i_4] [i_5] &= (((4 | 32752) ? ((((1997279842 ^ 4294967287) & (arr_12 [12])))) : (max(((max(-2151, var_17))), (~10604759969095917008)))));
                }
            }
        }
    }
    var_22 = var_6;
    var_23 = ((min((min(var_8, var_3)), var_14)));
    #pragma endscop
}
