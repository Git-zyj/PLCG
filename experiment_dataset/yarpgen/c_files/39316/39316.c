/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((((max((arr_5 [i_0] [i_1 + 3] [i_1 + 1]), (arr_5 [i_0] [i_1 - 1] [i_1 + 2])))) * ((max((arr_5 [i_0] [i_1 + 3] [i_1 - 2]), (arr_5 [i_0] [i_1 + 1] [i_1 + 3])))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 = 65526;
                                var_20 *= (((((4651663474966015500 && var_9) ? (((arr_14 [i_4] [i_0] [i_0] [i_0] [i_0]) ? 19747 : (-2147483647 - 1))) : (((arr_4 [i_0] [8] [i_0]) ? 0 : var_11)))) % 65522));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_1] = ((!((((((arr_2 [i_1]) ? var_1 : 0)) % (((arr_4 [8] [5] [i_1]) ? 3466454443 : (-2147483647 - 1))))))));
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((((arr_6 [i_1] [i_7]) <= 8)))));
                                var_22 = (max((max(0, 13361126297928256292)), ((max((arr_14 [i_0] [i_0] [i_5 + 1] [i_1 + 2] [i_7]), (arr_14 [i_1] [i_0] [i_0] [i_1 + 3] [1]))))));
                                var_23 += (((~13533) ? (~65521) : (((!((max(-1162311349, 4294967295))))))));
                            }
                        }
                    }
                }
                var_24 = (max((min((arr_14 [i_1 + 3] [i_1] [1] [i_1] [i_1 + 1]), 201222159)), (((3818143436 && (arr_14 [i_1 - 2] [i_1] [i_1] [i_1] [i_1 + 3]))))));
            }
        }
    }
    var_25 = ((max((min(var_13, var_16), ((max(-27, 132)))))));
    #pragma endscop
}
