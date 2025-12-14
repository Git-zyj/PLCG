/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = (((~((~(arr_1 [i_1] [i_0]))))));
                    var_12 &= (~27247);
                    var_13 = (min(var_13, (((((((arr_6 [i_1] [i_2 - 1] [i_1] [i_1]) ? var_5 : var_0))) ? (arr_6 [i_2 - 1] [i_0] [i_1] [i_0]) : (arr_1 [i_0] [i_0]))))));
                }
            }
        }
    }
    var_14 -= (max((min((var_1 & var_7), 1694909865)), ((max(var_9, (max(-27247, 27247)))))));
    #pragma endscop
}
