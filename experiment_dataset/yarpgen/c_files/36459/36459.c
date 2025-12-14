/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((~505527546), ((~(var_1 ^ 8401617957695029624)))));
    var_18 = (max((min(var_12, var_10)), -var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 &= (((!var_3) ? var_2 : (arr_0 [i_2])));
                    var_20 &= (min((((arr_4 [i_0]) ? (arr_0 [i_2]) : (arr_0 [i_1]))), (!3221225472)));
                    var_21 = var_15;
                }
            }
        }
    }
    #pragma endscop
}
