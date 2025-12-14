/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 53769;
    var_11 = (min((((~53769) % var_5)), var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [6] |= (((((min(var_9, var_9)))) ? (arr_3 [i_1 - 1]) : (53769 >= 9189398097983387281)));
                    var_12 += ((!(((var_9 ^ (arr_5 [i_0] [i_2 + 1] [i_2 - 1]))))));
                    var_13 = 7640;
                    var_14 = (max((max((min((arr_0 [i_0]), var_8)), -2641524699171774845)), (((var_4 | (~var_0))))));
                }
            }
        }
    }
    #pragma endscop
}
