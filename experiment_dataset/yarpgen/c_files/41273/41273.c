/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 = (((13011568912682605273 << (-4216690159532558856 + 4216690159532558881))));
                    var_17 = (arr_3 [i_0] [10] [i_2]);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        var_18 = ((((((arr_5 [i_3 + 2] [i_3 + 2] [i_3 + 3] [i_0]) ? (arr_1 [i_3 + 1] [i_3 - 1]) : (arr_8 [i_3 + 3] [i_3 - 1])))) ? 156 : (1 ^ 1)));
                        var_19 = ((min(1125482092439196379, (arr_13 [i_3 - 1] [i_3 + 1] [i_0] [i_3 - 1]))));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_20 = -var_0;
        var_21 = (max(var_21, (((~(~3906991470))))));

        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            var_22 = ((((arr_14 [i_6] [i_6] [i_7] [i_7]) ? (arr_4 [i_7]) : (arr_1 [i_6] [i_6]))));
            var_23 = (arr_4 [i_7]);
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    {
                        var_24 = (((((arr_16 [i_6] [i_7] [i_8] [15]) ^ 4032)) > ((var_8 ? (max(3906991488, var_4)) : (((var_3 ? 0 : (arr_28 [i_6] [i_9] [11] [16] [1]))))))));
                        arr_29 [11] [11] [i_9] [1] = (arr_22 [i_7] [i_7]);
                        arr_30 [i_9] [i_8] [i_9] = ((+(max((arr_27 [i_6] [i_6] [i_7] [i_8] [i_9]), (((-(arr_8 [i_7] [i_8]))))))));
                    }
                }
            }
        }
    }
    var_25 = (var_13 * var_11);
    #pragma endscop
}
