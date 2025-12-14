/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [2] [i_1] = ((((min(208, 1))) ? var_1 : var_5));
                var_19 -= (min((~var_15), var_6));
                var_20 = (((((arr_3 [i_0]) != 3987124578)) ? 115 : ((min((max(14975, (arr_5 [i_0] [i_1] [i_1]))), ((min((arr_4 [i_1] [i_0]), 254))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_21 = (min(var_16, var_13));
                arr_11 [i_2] [i_3] = (min((((45 ? var_12 : var_8))), ((~(min(250, (arr_10 [i_3])))))));
                var_22 = arr_10 [i_3];
                var_23 = (((((((arr_10 [i_3]) && (arr_10 [1]))))) ? (max(var_4, var_6)) : (!var_12)));
                var_24 = var_9;
            }
        }
    }
    var_25 = var_15;
    var_26 = (((((var_2 ? var_0 : 1))) ? var_7 : ((min((((var_15 << (var_7 - 12041218112294057471)))), (min(var_8, 693489015)))))));
    #pragma endscop
}
