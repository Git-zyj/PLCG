/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, (arr_2 [i_0])));
                            arr_9 [i_0] [i_0] [i_0] [i_0] = ((((((0 && (arr_3 [i_2] [i_2]))))) ? 18446744073709551615 : ((((!(18446744073709551615 || 0)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_16 = (min(var_16, 29));
                            var_17 = (((((arr_7 [i_0] [i_0] [i_4] [i_5]) + 0))));
                            var_18 += (arr_10 [i_0] [i_1] [i_1]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                var_19 -= min((((0 > 0) >> -43)), ((42 << (var_7 - 3121667172))));
                                arr_30 [i_8] [i_8] [i_8] [i_10] [i_10] = var_0;
                                var_20 = (((((14863050419402874334 ? (arr_19 [i_6] [i_7] [i_8]) : var_2))) ? (((!((max(var_1, 54)))))) : ((((42 - (arr_24 [17] [i_7] [17] [i_9] [i_10])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            {
                                var_21 = (~var_11);
                                var_22 += (((min(var_7, (~5))) >= 4294967295));
                                arr_35 [i_8] [i_8] [i_8] [i_8] [i_7] = (((3583693654306677281 << (-674352813 + 674352852))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 25;i_14 += 1)
                        {
                            {
                                arr_40 [i_6] [i_7] [i_8] [i_8] [i_14] [i_14] = (!674352812);
                                arr_41 [22] [i_14] [i_8] [i_14] [i_8] = (((!-2062334062) % (min(17438310078829099640, -11062))));
                                var_23 = ((((~(arr_22 [i_8] [i_8] [i_6]))) != (((((var_11 || 17438310078829099640) || var_0))))));
                                arr_42 [i_13] [i_8] = (!var_7);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
