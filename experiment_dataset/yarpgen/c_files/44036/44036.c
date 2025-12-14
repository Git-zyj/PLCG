/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_3 + 2147483647) << ((((var_3 ? ((var_15 ? var_1 : var_8)) : (var_2 | var_8))) - 8453584651848082793))));
    var_20 = ((((!(((var_10 ? var_11 : var_4))))) ? var_3 : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_1] = (((min((!-8879584413843129741), (max((arr_3 [i_1] [1]), var_8)))) > (min(366353796, (arr_7 [i_2 + 2] [i_2 - 3] [i_2 - 1])))));
                    var_21 = ((((min(26, -62))) ? ((((!(arr_3 [i_1] [i_1]))))) : ((-(arr_7 [i_2 - 2] [i_2 - 1] [i_2 + 1])))));

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        var_22 = (min((arr_0 [i_2] [i_2 - 1]), (arr_0 [i_2 - 2] [i_3 + 1])));
                        arr_11 [6] [i_1] [22] [6] = ((arr_4 [i_1]) ^ (arr_7 [i_2 - 3] [i_3 + 1] [21]));
                    }
                    arr_12 [i_2 + 2] [i_1] [i_1] [11] = (max(((min(105, 2741113683361182300))), (min(var_9, var_12))));
                    arr_13 [i_0] [1] [i_1] = ((+(((arr_1 [i_0] [i_1]) ? (arr_1 [i_0] [i_0]) : (arr_1 [12] [i_1])))));
                }
                var_23 = (min(var_23, ((((arr_3 [8] [8]) >> (((((~var_5) ? (arr_5 [22]) : ((var_16 ? var_0 : (arr_4 [6]))))) - 9726077861676184214)))))));
                var_24 = (arr_9 [5] [i_0] [5]);
            }
        }
    }
    var_25 = var_3;
    #pragma endscop
}
