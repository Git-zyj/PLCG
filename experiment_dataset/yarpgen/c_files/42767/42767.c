/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((((max((23681 + var_2), (((-23682 ? -23668 : -23667))))) < (var_7 & 23666))))));
    var_17 = (max(-23681, (max(var_10, ((var_7 ? 23668 : var_4))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, var_1));
                    var_19 = ((-((((max((arr_5 [i_2] [i_0]), (arr_5 [i_0] [4])))) ? -23681 : (((arr_1 [i_0] [i_0]) / -23703))))));
                    var_20 = var_9;
                }
            }
        }
    }
    #pragma endscop
}
