/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_2;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_18 += var_0;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 = (min(2392122922, (min((var_2 ^ var_9), (min(2392122933, 1902844359))))));
                                var_20 = ((min((((arr_0 [i_4]) ? -1806468173 : (arr_2 [i_0 + 3] [i_1] [i_3]))), (arr_3 [1]))));
                                arr_11 [i_0] [i_2] [i_2 + 2] [i_0] [i_4 + 3] = arr_6 [i_0 + 1] [i_2];
                            }
                        }
                    }
                    var_21 = (min(var_21, ((min(((~(arr_4 [20] [i_1] [i_1] [i_1]))), (arr_9 [i_0] [16] [i_0] [i_0] [i_0]))))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {

        for (int i_6 = 4; i_6 < 10;i_6 += 1)
        {
            var_22 &= var_14;
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            arr_26 [i_5] [i_6] [i_7] [i_8] [8] = (arr_21 [i_9] [i_8 - 1] [i_8 - 1] [i_6 + 1]);
                            var_23 -= ((((~(arr_17 [i_5] [i_6 - 4] [i_6]))) / (min((arr_17 [i_5] [i_6 + 2] [i_7]), (arr_17 [i_5] [i_6 + 2] [i_6 + 2])))));
                            var_24 = (min((~var_11), (((22 ? (arr_20 [i_9]) : (arr_8 [i_6 - 2]))))));
                        }
                    }
                }
            }
        }
        arr_27 [i_5] = (!var_2);
        arr_28 [i_5] = var_9;
    }
    #pragma endscop
}
