/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_3] [3] [i_1] [i_1] [i_1] [i_0] = (max((((((min((arr_2 [i_1]), 127)))) * (max((arr_10 [i_4] [i_3] [i_2] [i_1]), (arr_10 [i_4] [i_3 + 1] [i_0] [i_0]))))), -19));
                                var_16 = (min(var_16, 15594294355419384356));
                                arr_14 [i_0] [i_1] [7] [13] [i_4 + 2] = 15594294355419384356;
                                arr_15 [i_0] [i_1] [11] [i_3] [i_4] = (max(((((arr_10 [i_0] [11] [i_2] [i_3]) ? var_6 : 1))), ((min(var_11, var_7)))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_17 *= 1;
                        arr_19 [22] = (56 / -302252116);
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_18 *= (((arr_3 [i_2 - 1] [i_0 + 1]) ? ((min(((max(-89, 1))), (max(2147483647, 233341041))))) : (arr_3 [1] [i_1])));
                        var_19 = (max(var_19, -44));
                    }
                }
            }
        }
    }
    var_20 -= 13;
    #pragma endscop
}
