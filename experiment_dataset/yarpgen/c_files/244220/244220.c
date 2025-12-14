/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_13));
    var_17 = (min(1, 1));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = (min((1 & 1), (min((arr_6 [i_2 + 2] [16] [i_0 + 2]), (arr_3 [i_0])))));
                    var_19 = (min((((!((min(9223372036854775807, 2147483647)))))), (((arr_4 [i_0 - 1]) ? var_3 : 21638))));
                    arr_9 [i_0 + 1] [i_1] |= (max(1, (max(57158, (~0)))));
                }
            }
        }
    }
    var_20 = var_10;
    #pragma endscop
}
