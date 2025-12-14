/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [10] [i_2 - 1] = max(((var_11 ? (min((arr_5 [i_1] [i_0]), (arr_0 [i_1]))) : (arr_7 [i_0] [10] [i_2 + 1] [i_0]))), ((max(4285698830, 1297228709))));
                    arr_9 [i_0] [i_1 - 1] [i_2] = (!4294967295);
                }
            }
        }
    }
    var_14 = (max(var_14, (((((!(((var_2 ? var_7 : var_12))))) ? -123 : var_7)))));
    var_15 = (min(2997738586, ((var_4 ? var_9 : 3634724055))));
    #pragma endscop
}
