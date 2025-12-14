/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = ((-var_6 ? ((var_5 ? ((min((arr_0 [i_0] [i_1]), 0))) : ((min(var_7, (arr_1 [8] [8])))))) : (((var_3 ^ (arr_0 [i_0] [i_0]))))));
                var_16 ^= (max((max(var_7, (arr_4 [i_0] [18]))), var_13));
                var_17 = (~var_10);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_18 ^= (min(((200 ? ((var_11 ? -1392742645 : (arr_1 [i_2] [i_3]))) : var_11)), ((+(((arr_10 [i_2] [i_2] [i_3]) ? 255 : (arr_0 [i_3] [8])))))));
                var_19 = var_0;

                for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                {
                    var_20 = ((min(((-(arr_1 [i_4] [i_3]))), ((~(arr_5 [i_4]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [i_3] [i_4] [i_3] [i_4] = (min(var_11, -1392742645));
                                arr_19 [i_4] [i_4] = (((arr_0 [i_2] [i_2]) / (arr_0 [i_4] [3])));
                                var_21 = ((((var_2 ? (((arr_6 [i_2] [5]) ? var_3 : var_2)) : var_2))) && var_1);
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                {
                    var_22 -= (~((-(arr_0 [i_3] [i_7]))));
                    var_23 = (min(24, ((max(var_9, ((((arr_16 [i_2] [9] [i_7]) > (arr_12 [i_2] [i_2] [i_2])))))))));
                    var_24 *= (!((((~var_0) ^ var_1))));
                    var_25 |= (((var_0 | -var_13) ? ((-((~(arr_2 [17] [i_2] [17]))))) : (((var_7 ? var_11 : (arr_21 [4] [i_3] [i_7]))))));
                }
            }
        }
    }
    var_26 = 0;
    #pragma endscop
}
