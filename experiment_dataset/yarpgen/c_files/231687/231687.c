/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (((min(var_5, (min(var_9, 8536979728979150687)))) << (var_8 - 2870950932)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_11 = (((((var_2 * (arr_0 [i_0])))) ? ((((arr_0 [i_0]) && (arr_0 [i_0])))) : (((arr_0 [i_0]) ^ (arr_0 [i_0])))));
        arr_2 [i_0] [i_0] = ((min(-var_7, (arr_1 [i_0]))));
        var_12 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_13 = (((min((arr_6 [i_1]), var_5))));

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            var_14 = ((arr_1 [i_2]) / (arr_7 [i_1] [i_1]));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        var_15 = 1609456066;
                        arr_14 [0] = (arr_0 [i_4]);
                        var_16 = (max(var_16, (((((((arr_8 [i_3 - 1] [12] [i_3 - 1]) | 4074465826))) || ((((arr_8 [i_3 - 1] [i_3 - 1] [i_3 - 1]) ? (arr_8 [i_3 - 1] [i_3] [i_3 - 1]) : (arr_8 [i_3 - 1] [i_3] [i_3 - 1])))))))));
                    }
                }
            }
        }
        var_17 = (((~4294967295) ? (((arr_11 [i_1]) | (arr_12 [i_1] [i_1] [i_1] [i_1]))) : (arr_12 [i_1] [i_1] [i_1] [i_1])));
    }
    var_18 = (min(var_1, 14));
    #pragma endscop
}
