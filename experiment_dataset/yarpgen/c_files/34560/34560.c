/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((((!571380289594598982) ? -571380289594598983 : (arr_0 [5] [i_0]))));
                arr_7 [i_1] [i_1] = (((arr_5 [i_0]) | (((~-571380289594598983) ^ 571380289594598975))));
                var_10 = (((2147483647 / 22835) >> (((!(arr_5 [i_0]))))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    var_11 = (~571380289594598972);
                    arr_12 [i_1] [i_1] = ((~(arr_5 [i_2 - 1])));
                }
            }
        }
    }
    var_12 = (!var_5);
    var_13 = (!50334);
    #pragma endscop
}
