/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((((var_5 * 0) ? var_10 : var_10))), (min((min(var_6, var_10)), (!2011814406)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (((~((690532988 ? 690532987 : var_7)))));
                    arr_8 [1] [1] &= min((min(8024837347798028080, (690532998 || 222092860))), ((min(((var_7 ? var_5 : 690532993)), 690533002))));
                    var_14 = ((((((var_1 ? (arr_6 [i_0]) : 126))) ? ((min(var_4, var_9))) : 12978031115096654702)));
                }
            }
        }
    }
    #pragma endscop
}
