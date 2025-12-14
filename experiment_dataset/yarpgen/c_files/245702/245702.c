/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [12] [i_1] [i_1] [i_0] = (max((-9223372036854775807 - 1), -9223372036854775800));
                    var_13 = ((((((var_4 ? var_2 : var_1))) ? 32760 : ((var_8 ? (arr_0 [3]) : 176)))));
                    arr_8 [i_1] [i_1] [i_2] = (((max(-9223372036854775792, (arr_3 [i_1]))) & (((min(var_9, (arr_3 [i_1])))))));
                    arr_9 [i_0] [i_1] [i_0] [i_0] = (min(0, (((~(arr_4 [i_0 + 2] [i_0 + 2] [i_1]))))));
                }
            }
        }
    }
    var_14 = var_0;
    #pragma endscop
}
