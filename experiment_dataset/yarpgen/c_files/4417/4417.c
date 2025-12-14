/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((((min((~var_16), ((var_7 ? var_12 : var_9))))) ? (min((((var_4 ? var_5 : 1))), (var_14 | var_1))) : ((var_5 ? var_3 : var_6))));
    var_19 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_20 -= (max((max(((min((arr_0 [i_1]), (arr_4 [i_0] [i_1])))), ((var_3 ? (arr_4 [i_0] [i_1 - 3]) : var_16)))), -98));
                    arr_9 [i_0] [i_2] [i_2] [i_2] = (((((+(((arr_6 [i_0] [i_0] [i_0] [i_0]) ? var_4 : (arr_3 [i_2 + 1])))))) ? (((((min((arr_2 [i_0] [i_2]), (arr_5 [i_2])))) ? ((max(1, (arr_8 [i_0] [i_1] [i_2])))) : (arr_8 [i_0] [i_1] [i_2])))) : (arr_5 [i_1])));
                    arr_10 [i_0] [i_2] = (max((arr_3 [i_1 - 2]), (arr_6 [i_2] [i_0] [i_0] [i_0])));
                    var_21 = ((((237 ? 4849693080001235207 : 1)) * ((((!((((arr_7 [i_1] [i_1] [i_1]) ? (arr_1 [i_0] [i_0]) : var_3)))))))));
                }
            }
        }
    }
    #pragma endscop
}
