/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((min(var_4, ((max(var_12, 1))))) * (((max((min(254, var_9)), (max(var_9, var_1))))))));
    var_14 = (var_11 * -var_1);
    var_15 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (((-(202 + -1))))));
                    arr_10 [i_0] = (min(var_7, ((1218391660 ? 16 : (arr_4 [i_1 + 1] [i_1 + 1])))));
                }
            }
        }
    }
    var_17 |= (max((max(var_8, var_4)), ((max((var_7 | var_12), (~var_12))))));
    #pragma endscop
}
