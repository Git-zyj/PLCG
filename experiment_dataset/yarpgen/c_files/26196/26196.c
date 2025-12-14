/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 = (max(var_14, 3711517087));
    var_15 = ((0 ? 1 : 1));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = ((((min((((-18 <= (arr_6 [i_0] [i_1] [i_2] [i_2])))), (max(var_9, -25))))) ? ((((arr_8 [i_0] [i_1] [i_0] [i_0 + 1]) >> 0))) : ((0 ? ((-21 ? (arr_6 [i_2] [11] [i_0 + 1] [i_0 + 1]) : 1392901192)) : var_3))));
                    arr_10 [i_1] [i_0] [i_0] [i_1] = ((arr_2 [i_0]) + (!20));
                    arr_11 [i_2] [i_1] [i_1] = 1;
                }
            }
        }
    }
    var_16 ^= var_6;
    #pragma endscop
}
