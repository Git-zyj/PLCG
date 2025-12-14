/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = (((1936 && var_3) % 5566833305083544901));

                    for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        var_19 = (min(var_8, ((~(arr_5 [i_0] [i_1] [i_2] [i_0])))));
                        arr_10 [i_0] = (((arr_0 [i_0]) ? 8191 : (arr_9 [i_0] [i_1] [i_0] [i_2])));
                        var_20 += (-6568 >= 18905);
                        var_21 = ((((((!((((arr_1 [i_0]) ? 2176006225 : 8048968323770249503))))))) + (((arr_1 [i_3 - 1]) ? var_0 : 9223372036854775807))));
                    }
                    for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_22 = (max((~var_4), ((var_7 ? 24379 : (max(var_8, (arr_4 [i_0] [i_0])))))));
                        var_23 = (((arr_11 [i_0] [i_0] [i_0] [i_0]) ? ((var_15 ? (arr_5 [i_0] [i_2] [i_2] [i_0]) : 14244771305334980626)) : (+-10329)));
                        var_24 = (min(var_24, ((((((16383 ? var_0 : 3615806197))) && (((arr_5 [i_0] [i_1] [i_2] [i_2]) && 1056964608)))))));
                    }
                    var_25 = (arr_12 [i_0] [i_0] [2] [i_1] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
