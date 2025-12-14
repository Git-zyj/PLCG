/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_6 && (((max(var_2, 0)) == var_3))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 |= ((((((19231 << (-19236 + 19242))))) << (((arr_4 [i_0] [i_0] [i_0]) + 25))));
                    var_22 = ((~((min((arr_5 [i_0 + 1] [i_2 - 4] [i_2] [i_2]), var_5)))));
                    var_23 = (((arr_6 [i_0] [i_0] [i_2] [i_1 - 1]) ? ((min(-19232, (min(var_16, var_6))))) : (max(((((arr_4 [i_2] [i_1] [i_0]) ? (arr_2 [i_0]) : 49792))), (max((arr_4 [i_0] [i_1] [i_2]), var_7))))));
                }
            }
        }
    }
    #pragma endscop
}
