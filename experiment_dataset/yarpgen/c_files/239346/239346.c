/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_9 ? (((1535445916 >> 1) >> (var_4 - 179))) : (!var_6)));
    var_12 |= var_10;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = (max(var_8, 1));
                    var_14 = (min((!-72), (min((max(var_3, 1)), ((min(27723, 1)))))));
                    var_15 *= ((((-var_7 / (arr_5 [i_2] [i_1 - 3] [i_0]))) - 1));
                }
            }
        }
    }
    #pragma endscop
}
