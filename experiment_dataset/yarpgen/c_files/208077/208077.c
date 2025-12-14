/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_10 = (arr_6 [5] [i_1 - 3] [i_0]);
                    var_11 -= (((var_4 == (arr_2 [i_1 + 4] [i_1 - 3]))) ? ((((((var_4 | var_4) + 9223372036854775807)) << (((arr_2 [i_1] [i_2]) - 60962))))) : (max((arr_4 [i_0] [i_1] [i_2]), ((((arr_1 [i_1] [i_2]) ? (arr_1 [i_0] [i_1]) : (arr_3 [i_2])))))));
                    arr_7 [i_2] [4] [i_2] [i_2] = var_7;
                    arr_8 [i_2] [2] [i_2] = (max(var_1, (arr_4 [i_2] [8] [i_0])));
                    arr_9 [i_0] [i_2] [i_0] [i_0] = (max((min(34017, (arr_5 [i_2] [i_1] [i_0] [i_0]))), (min(1, ((max(1, 55751)))))));
                }
            }
        }
    }
    var_12 |= var_5;
    var_13 = (!var_4);
    #pragma endscop
}
