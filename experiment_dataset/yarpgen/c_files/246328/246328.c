/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (min(var_16, -2321));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, ((+(max((arr_3 [8] [i_1 - 1] [i_1 - 2]), (arr_2 [i_0] [i_1] [i_1 + 1])))))));
                            var_18 = var_0;
                            arr_10 [i_0] = ((((var_12 == (min(-2294, var_0)))) ? var_8 : (min((arr_8 [i_0]), (arr_0 [i_0] [i_3])))));
                            var_19 = ((-29142 << ((((max(((max(2321, 2321))), -1))) - 65514))));
                            var_20 += var_11;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_21 = (((arr_1 [i_5]) ? ((~(arr_6 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1] [i_1 - 2] [13]))) : (((((649050527 ? 26860 : (arr_17 [i_5] [9] [i_5] [i_5])))) ? (min((arr_5 [i_0] [i_1 + 1] [i_1]), (arr_16 [10] [i_4] [i_4] [10] [i_0] [i_0]))) : 0))));
                            arr_18 [i_0] [i_1 - 2] [i_1 + 1] [i_4] [i_5] [i_5] = (((arr_0 [i_0] [i_5]) ? ((max(9429, 11))) : (arr_6 [i_0] [i_1 - 2] [9] [i_4] [i_5] [i_5])));
                        }
                    }
                }
            }
        }
    }
    var_22 ^= -var_11;
    /* LoopNest 3 */
    for (int i_6 = 3; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                {
                    var_23 = ((max(var_6, (arr_19 [i_7]))));
                    var_24 = (min(((((((!(arr_23 [i_6] [i_7] [i_8]))))) + (arr_1 [i_8]))), (!1)));
                    arr_27 [i_8] [i_8] [9] [i_8] = (!var_2);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            {
                arr_34 [i_9] [i_9] [i_9] = (arr_26 [i_10]);
                arr_35 [i_9] = (((arr_5 [i_9] [i_9] [i_9]) | (arr_6 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])));
            }
        }
    }
    var_25 = var_12;
    #pragma endscop
}
