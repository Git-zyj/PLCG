/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~var_2);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = ((~(arr_1 [i_1 - 1])));
                arr_4 [i_0] [i_0] = (min(1581261252, -1223630382));
                var_12 = (max(var_9, ((((arr_1 [i_0 - 2]) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 + 3]))))));
            }
        }
    }
    var_13 = (min(var_13, (!var_1)));
    var_14 = (max(var_5, (min(((min(0, 11))), ((var_0 ? var_3 : 11))))));
    var_15 = var_6;
    #pragma endscop
}
