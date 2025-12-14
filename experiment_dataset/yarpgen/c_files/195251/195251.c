/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_2 ? (max(var_9, var_2)) : ((max(var_10, var_3)))));
    var_14 = ((8 ? 549747425280 : 2370436466810049260));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0 + 3] [18] [i_1] [i_2] &= ((min(((57562 ? 13181 : var_11)), var_11)));
                    arr_8 [i_0] [i_1] [i_1] = (max((((2370436466810049258 && ((min(-32, var_1)))))), ((131071 ^ (arr_4 [i_0 + 3] [i_0 + 1] [i_0 - 3])))));
                }
            }
        }
    }
    var_15 &= var_0;
    #pragma endscop
}
