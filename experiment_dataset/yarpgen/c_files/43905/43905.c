/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_12 = (min(var_12, (((var_6 ? (arr_10 [i_2 - 1] [i_1] [i_2 - 1] [i_1] [i_1] [i_1]) : (arr_6 [i_2 - 3] [i_2 + 1] [i_2 - 2] [i_2 - 2]))))));
                            arr_11 [i_0] [i_1] [i_3] [i_1] = (max(-1874264044944283550, (((-1655259108 % (arr_8 [i_0] [i_2 - 3] [i_2 - 3] [i_3]))))));
                            var_13 = ((1874264044944283546 && ((((max(1718116105, (arr_7 [i_0] [i_1] [i_2] [i_3]))) * ((((!(arr_8 [i_0] [i_0] [i_0] [i_0]))))))))));
                            arr_12 [i_3] [i_2 - 1] [i_3] = (~26607);
                        }
                    }
                }
                var_14 += (var_3 * ((max(((1926504755 / (arr_1 [i_1]))), ((((arr_2 [i_0] [i_1]) ? var_1 : (arr_9 [i_0] [i_0] [i_1]))))))));
                var_15 = arr_2 [i_0] [i_1];
                var_16 = ((~(((!(arr_10 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1]))))));
                arr_13 [i_0] [i_1] [i_1] &= var_7;
            }
        }
    }
    var_17 = (1011863838 - -120);
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    arr_21 [i_4] [i_6] [i_4] [i_4] = (((((-1926504755 ? (((~(arr_18 [i_5] [i_6])))) : ((var_6 ^ (arr_18 [i_4] [i_6])))))) ? ((~(((arr_19 [i_4] [1] [i_6] [i_5]) ? var_10 : (arr_15 [i_4] [i_4]))))) : ((1926504750 ? 17479319136824122019 : -120))));
                    arr_22 [22] &= (~-1285);
                }
            }
        }
    }
    #pragma endscop
}
