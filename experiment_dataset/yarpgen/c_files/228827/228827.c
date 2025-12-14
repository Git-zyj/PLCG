/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0 + 1] = var_1;
                    arr_9 [i_0] = (min(13, -1));
                    var_17 = (((min((arr_0 [i_2] [i_2]), (arr_0 [i_2] [i_2]))) & (arr_0 [0] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = max(((max(-14, 9223372036854775802))), 16);
                                arr_14 [i_0] [8] [i_0] [2] [i_3] [i_3] [i_0] = (((((((max((arr_4 [12] [i_0]), (arr_11 [i_3] [i_1] [4] [i_3] [i_1] [i_2])))) ? (38 || 21) : (arr_10 [12] [9] [i_2] [i_2] [i_2])))) ? var_5 : (((~(arr_12 [i_0] [i_0 + 1] [i_2] [i_4 - 2] [i_0]))))));
                                var_19 = ((((max(4, (arr_11 [i_0] [i_3] [i_2] [i_3] [i_0] [i_4]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [12] = (((min((arr_1 [i_0 + 1] [i_0 + 1]), var_11)) * (((((max(250, var_6))) || ((min(var_12, (arr_6 [i_0] [i_2])))))))));
                                arr_24 [i_0] [i_1] [i_0] [i_5] [i_6] = ((((((min((arr_15 [4] [i_0] [i_0] [11]), 2147483647))) ? ((var_4 ? 238 : 236)) : (min(29, (arr_22 [i_0] [1] [i_1] [i_2] [i_2] [i_0]))))) & var_8));
                                var_20 = (arr_1 [i_6] [i_6]);
                                arr_25 [0] [i_1] [i_1] [i_0] [0] = 2;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_3;
    var_22 = -var_7;
    var_23 -= ((var_6 ? 248 : var_7));
    #pragma endscop
}
