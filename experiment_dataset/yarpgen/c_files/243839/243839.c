/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243839
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
                arr_5 [i_0] = arr_1 [1] [i_1];
                var_13 = -24;
                var_14 = 73;
                var_15 = (min(var_15, (-2147483647 - 1)));
            }
        }
    }

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_16 = -9209753770702822414;
        var_17 = ((((max(-74, (arr_7 [i_2])))) ? ((min((arr_7 [14]), 215))) : (((arr_7 [i_2]) ? (arr_7 [i_2]) : (arr_7 [i_2])))));
        arr_9 [i_2] = 2147483647;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    {
                        var_18 = ((((max((arr_17 [i_2] [i_5 + 1] [17] [i_5]), (arr_17 [i_5] [i_5 + 2] [i_4] [14])))) ? ((min((arr_17 [i_2] [i_5 + 2] [i_4] [i_5]), (arr_17 [i_5] [i_5 - 1] [i_4] [4])))) : ((max((arr_17 [i_2] [i_5 + 1] [13] [1]), (arr_17 [17] [i_5 + 2] [0] [i_5]))))));
                        var_19 *= (max((arr_17 [7] [i_3] [i_4] [i_5 + 2]), 58));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {
        var_20 = (arr_19 [4]);
        arr_20 [i_6] = ((((((arr_18 [i_6]) ? 99 : (((arr_18 [i_6]) ? 2147483647 : (arr_18 [i_6])))))) ? (((arr_19 [i_6]) ? ((min(-11, -98))) : (arr_19 [i_6]))) : (arr_18 [20])));
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
    {
        arr_24 [i_7] = 2147483647;
        var_21 = (arr_22 [i_7]);
        arr_25 [8] = (min(31, 1602511542));
        var_22 = (min(var_22, (((188 ? ((max((-2147483647 - 1), (max(-124, (arr_19 [i_7])))))) : (arr_22 [9]))))));
        var_23 = ((((arr_21 [7]) ? ((215 ? 42 : -25)) : ((max(17, (arr_19 [19])))))));
    }
    #pragma endscop
}
