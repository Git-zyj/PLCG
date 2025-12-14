/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 += (((min(var_9, 102))));
                    var_19 = ((((max((arr_7 [i_1] [i_1 + 1] [16]), (arr_5 [i_1 - 1] [i_1 - 4] [i_1])))) || ((((min(var_16, -2078090484))) || var_12))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = (((((105 * (arr_2 [i_1 + 1] [20])))) ? (((!(((arr_4 [i_0]) >= -2078090484))))) : 27525));
                }
            }
        }
    }
    var_20 = (min((~-65), (min(var_10, var_12))));
    var_21 = var_1;
    var_22 ^= var_2;
    #pragma endscop
}
