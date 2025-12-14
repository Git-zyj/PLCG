/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        arr_9 [i_0 + 1] [i_2] [i_2] [i_3] = (max(((min(2046, var_8))), var_5));
                        var_20 = (min(var_20, ((min((max((arr_8 [i_2] [9] [i_2 - 1] [i_3 + 1] [i_0 + 2]), ((max(4294965250, 4294965249))))), 2047)))));
                        var_21 = (arr_6 [i_0] [i_1] [9]);
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 20;i_4 += 1)
                    {
                        var_22 = (((arr_0 [i_0 - 2]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 3])));
                        arr_12 [i_0] [i_1] [i_2] [i_4] = ((~(arr_10 [4] [i_2] [10] [i_0 - 1] [i_4] [12])));
                    }
                    var_23 = ((-((144080003703767040 ? (((max(7, (arr_7 [i_0] [i_1] [i_2] [i_0]))))) : -144080003703767040))));
                    arr_13 [i_2] = min(144080003703767056, (max(-64, -144080003703767040)));

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_24 = (max(var_24, (~var_5)));
                        arr_17 [i_2] = (var_3 ? 0 : (((!((min(4294965227, (arr_7 [7] [i_1] [i_2 + 1] [i_5]))))))));
                        arr_18 [i_0] [i_0] [i_1] [i_0] [7] [i_2] = var_1;
                    }
                }
            }
        }
    }
    #pragma endscop
}
