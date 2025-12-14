/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = ((var_5 ? (~37099) : ((-(arr_1 [i_0 + 2])))));
                var_18 = (min(var_18, (1773471159 % 1773471159)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_19 = (min(var_19, (((1617144222 ? 17001063397543666390 : (((15080987494190600244 ? var_4 : (arr_6 [i_3] [i_3 + 1] [i_3] [i_3])))))))));
                            var_20 = (min(var_20, ((((arr_0 [i_3 + 2]) ? (~var_8) : (max((arr_5 [i_0 + 1] [i_0 + 1] [i_3 - 1] [6]), -1323530518)))))));
                        }
                    }
                }
                var_21 = (max(var_21, ((((arr_0 [i_0 - 2]) / -39)))));
            }
        }
    }
    var_22 = (min(var_22, var_12));
    var_23 = (max(var_23, var_1));
    var_24 = (((!var_14) ? 2677823046 : var_8));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_25 = (arr_17 [i_7] [i_7 - 1] [i_7] [i_7]);
                                var_26 = (min(var_26, ((max(((+(((arr_16 [19] [i_7] [i_7]) ? -1937617349 : var_14)))), ((var_12 ? (arr_17 [i_8] [i_7 + 3] [i_6] [i_4]) : var_3)))))));
                            }
                        }
                    }
                    var_27 = (((((841957833 + (arr_15 [i_6] [i_5] [i_4])))) - (((arr_12 [i_4]) ? ((((arr_19 [i_4] [i_6]) % (arr_16 [i_4] [i_5] [i_6])))) : var_16))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_28 = (((arr_12 [i_10 + 3]) + (arr_20 [i_10 - 1])));
                                var_29 = (max(var_29, ((((var_10 ? var_9 : (arr_15 [i_10 + 3] [i_4] [i_4])))))));
                                var_30 = (arr_19 [i_4] [i_5]);
                            }
                        }
                    }
                    var_31 = (max(var_31, ((min(((max((arr_11 [i_6]), 0))), (((arr_11 [i_5]) ? var_9 : (arr_11 [i_4]))))))));
                    arr_27 [i_4] [i_4] [i_4] [i_4] = ((var_8 / (((1617144250 ? (arr_21 [i_5] [i_6]) : (arr_21 [i_5] [i_6]))))));
                }
            }
        }
    }
    #pragma endscop
}
