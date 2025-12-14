/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 4294967295;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (((((min((19 % 8), 12))) ? (((arr_2 [i_0]) ? (-9223372036854775807 - 1) : (arr_2 [i_0]))) : ((((arr_5 [16] [i_2 - 1]) ? ((6608188053399156942 ? (arr_0 [i_0]) : 19)) : (((arr_0 [5]) ? 15 : 4294967276))))))))));

                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        var_17 = ((min(var_6, (arr_10 [i_0] [i_1] [i_2 - 2] [i_3]))));
                        arr_11 [i_1] [i_1] [i_1] = ((((((-9223372036854775807 - 1) | (arr_2 [i_3 + 3])))) ? (((min((arr_1 [i_2 - 1] [i_2 - 2]), (arr_1 [i_2 - 3] [i_2 - 1]))))) : (min(4294967295, 86))));
                        arr_12 [i_3] [i_1] [i_2] [i_1] [i_0] = 9223372036854775807;
                    }
                    for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_1] [0] [i_0] = 86;
                        var_18 = (max(var_18, ((((-102 + 2147483647) << (1 - 1))))));
                        arr_17 [i_0] [i_1] [i_2] [i_1] = (((arr_14 [i_2 - 1] [i_2 - 1]) >> (((min((arr_9 [7] [i_4] [1] [7] [7] [i_4 + 1]), ((((-9223372036854775807 - 1) + 19))))) - 5889610915940416730))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
                    {
                        arr_22 [i_0] [i_1] [i_0] [i_0] [i_0] = var_0;
                        arr_23 [4] [9] [i_2] [i_1] = (((arr_1 [i_0] [i_0]) > 12));
                        var_19 = (arr_9 [1] [i_1] [i_2 + 1] [i_2] [i_5] [i_1]);
                    }
                }
            }
        }
    }
    var_20 = (~28822);
    #pragma endscop
}
