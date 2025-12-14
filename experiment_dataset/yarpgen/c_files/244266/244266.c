/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = ((min(0, 9223372036854775792)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [4] |= (((arr_5 [i_0] [i_0] [6] [14]) ? ((var_8 ? (((13 ? (arr_7 [i_0] [1]) : var_8))) : (min(18, 9223372036854775801)))) : (((var_3 - (arr_5 [1] [i_2 + 3] [i_2 + 4] [1]))))));
                    arr_9 [i_1] [i_0] = ((((((((arr_7 [i_0] [i_0]) ? 1 : var_8)) * var_9))) ? ((~(min((arr_6 [i_0] [2] [i_0] [1]), var_9)))) : 251658240));
                }
            }
        }
    }
    var_12 = (~var_3);
    #pragma endscop
}
