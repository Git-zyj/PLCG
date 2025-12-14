/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_19;

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (max((arr_1 [i_0]), ((9223372036854775807 ? -1968530848185848486 : (((62261 ? 3287 : (arr_2 [i_0]))))))));
        arr_4 [i_0] [i_0] = (arr_2 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_21 = ((arr_5 [i_1] [i_1 + 3]) ? (((-2122300075 + 2147483647) << (2122300074 - 2122300074))) : (arr_6 [i_1]));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_9 [i_2] [i_1] = 9056020745729911669;
            arr_10 [i_1] = ((var_2 ? var_17 : (arr_7 [i_1 + 3])));

            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_22 = ((!var_0) + ((62233 ? var_16 : -9223372036854775807)));
                            arr_20 [9] [9] [i_3] [i_4] [i_5] = (((arr_13 [i_3 - 1] [i_3 - 1]) > var_5));
                            arr_21 [i_1 + 4] [6] [i_2] [10] [i_4] [i_5] [i_5] = (((var_0 - (arr_8 [i_1] [i_2] [i_5]))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_23 = (max(var_23, ((((arr_27 [i_1 - 1] [i_2] [i_1 - 1] [i_6] [i_7]) && (arr_18 [i_1 + 3] [i_3 + 1] [i_3] [i_3 - 1] [i_3 - 1]))))));
                            var_24 = (min(var_24, ((((~9223372036854775807) ? 9056020745729911669 : ((((arr_12 [i_2] [13]) - var_2))))))));
                            var_25 = (((var_13 + 2147483647) >> (((arr_27 [i_1 + 4] [i_2] [i_3 - 2] [i_1 + 4] [i_7]) - 11092))));
                        }
                    }
                }
            }
            var_26 &= (arr_28 [i_1] [i_1] [i_2] [i_2] [i_2]);
        }
    }
    #pragma endscop
}
