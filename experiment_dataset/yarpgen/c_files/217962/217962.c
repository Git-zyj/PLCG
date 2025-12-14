/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_6 [7] [i_1] [5] [8] = (min((((arr_3 [i_0] [i_0] [2]) ? -var_11 : ((var_9 ? 18 : var_0)))), ((min(-73, (arr_2 [i_2 + 1]))))));
                    arr_7 [i_0] [10] [i_2] = (arr_1 [i_0]);
                }
            }
        }
    }
    var_19 = ((var_12 ? (max((~25057), ((1 << (var_1 - 21339))))) : var_16));
    var_20 |= 2021323165;
    var_21 = (max(((min(var_14, (-116699232 ^ 1)))), (var_13 / -var_0)));
    #pragma endscop
}
