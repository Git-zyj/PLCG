/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 9109474934306399924;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = ((7 ? ((30102 ? 2147483647 : (~2147483638))) : -1));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_13 = (arr_3 [i_1]);
            var_14 = (-9223372036854775807 - 1);
            var_15 = var_3;
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_11 [i_4] [i_3] [i_2] [i_0] = ((((min(((min((arr_2 [i_0] [i_4]), var_6))), ((1492549254323228131 ? -32767 : (arr_4 [i_0] [1] [i_0])))))) ? 15741022596292863547 : ((min((arr_1 [i_0]), (arr_1 [i_2]))))));
                        var_16 = (-9223372036854775782 ? 1 : -2763059);
                        var_17 = var_0;
                    }
                }
            }
            var_18 = (((arr_8 [i_2] [i_2] [i_0] [i_0]) ? (max(var_3, 9337269139403151692)) : ((((arr_8 [i_0] [i_0] [i_0] [i_2]) ? var_9 : (arr_8 [i_0] [i_0] [i_2] [i_2]))))));
            arr_12 [i_0] [i_2] [6] = ((8302468913158463320 ? 1 : 0));
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_19 = (((((-((var_4 + (arr_4 [i_9] [i_8] [i_5])))))) ? (arr_17 [i_6]) : (((-(arr_24 [i_8] [i_9]))))));
                                var_20 = (min((max(11717822997666252469, var_5)), ((((arr_22 [i_5] [i_7] [i_7] [i_5 - 1]) ^ (arr_22 [i_5] [i_5] [i_7] [i_5 + 1]))))));
                                var_21 = 10;
                                var_22 = ((var_4 ? ((((1 ? 5 : var_9)) / var_9)) : (!var_6)));
                            }
                        }
                    }
                }
                var_23 = (min(((-(arr_18 [i_6]))), (~var_0)));
            }
        }
    }
    var_24 = (min(var_1, 0));
    #pragma endscop
}
