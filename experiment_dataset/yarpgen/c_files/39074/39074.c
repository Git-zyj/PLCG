/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (((((((arr_0 [i_1 + 3] [i_1 - 2]) ? 1948 : -125))) ? ((var_6 ? (arr_8 [i_0 + 1] [i_2]) : var_2)) : (((max((arr_7 [i_0] [i_1 - 2] [i_0] [i_2]), (126 <= var_6))))))))));
                    var_21 -= (max((min((arr_3 [i_1 + 1] [i_0 + 1]), var_14)), ((((arr_0 [i_1 + 1] [i_0 + 1]) >= (arr_3 [i_1 - 2] [i_0 + 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
