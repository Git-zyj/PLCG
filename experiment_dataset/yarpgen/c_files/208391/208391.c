/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(114, (max(var_5, var_2))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_18 -= (min(14317, (197 != var_12)));
        var_19 -= ((1 % (max((-30493 | 1), (max(271093052, (arr_1 [i_0])))))));
        var_20 = -var_3;
        var_21 -= ((-30490 ? 245 : 13499884134349255264));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    var_22 ^= var_6;
                    arr_10 [i_3] [i_3] = 837316561;
                    var_23 ^= ((0 ? -46 : (1 <= 19)));
                }
            }
        }
        var_24 *= ((288230376151711743 ? (arr_8 [i_1 - 1] [i_1]) : (arr_8 [i_1 - 4] [i_1 - 4])));
        arr_11 [i_1] = (((arr_5 [i_1 - 2]) ? (arr_3 [i_1 + 2] [i_1 + 2]) : 1));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        var_25 = (((arr_13 [i_1] [i_1 - 2]) || -351982529));
                        var_26 *= (arr_18 [i_1 + 3] [i_4] [i_5] [i_6] [i_5]);
                        arr_19 [i_4] [i_5] [i_4] [i_4] = (((arr_14 [i_1] [i_1] [i_1 + 2]) ? var_3 : (arr_14 [i_1] [4] [i_1 + 3])));
                        var_27 *= ((var_9 ? (var_4 < 95) : 44478));
                    }
                }
            }
        }
    }
    #pragma endscop
}
