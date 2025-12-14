/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((min((min(2105955120468526008, 4667544688412298590), (min(18446744073709551615, var_9))))));
    var_16 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (arr_0 [i_1]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_9 [10] [i_1] [i_1] [i_2] = 16896324424740171578;
                    var_18 = (min(var_18, (((-2097775643 / (arr_5 [i_0 - 2] [i_0]))))));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_19 = (min(var_2, (((arr_1 [i_0 - 2]) ? var_0 : (arr_10 [i_0 - 1] [i_0 - 1])))));
                                var_20 ^= (((((((arr_1 [i_0]) & 4294967295))) ? (arr_1 [i_0 + 1]) : (var_11 & 1926400601))));
                                arr_18 [i_0] [i_1] [i_0] [i_4] [0] [i_3] [i_5] |= (max(((~(-1 % var_14))), 1926400591));
                                var_21 &= (arr_11 [i_0] [i_0] [i_5]);
                            }
                        }
                    }
                    arr_19 [i_0] [14] [i_0] [i_1] = ((((-1926400591 & (arr_1 [i_0 - 2]))) <= ((((3801779921 < (arr_1 [i_1])))))));
                    arr_20 [0] [i_1] [i_1] = ((((!(arr_1 [i_0 + 1]))) ? ((max(var_1, (arr_8 [i_1] [i_1] [i_1])))) : (arr_12 [i_0] [i_1] [i_1] [10] [i_0])));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    var_22 += (((arr_7 [i_0 - 2] [6]) ? -24924 : 27785));
                    var_23 -= (((32767 != -1926400591) ? 0 : 30));
                    var_24 = var_11;
                    var_25 = ((1 | (arr_11 [i_0 - 2] [i_0 + 1] [i_0 - 2])));
                    var_26 = (max(var_26, var_2));
                }
            }
        }
    }
    #pragma endscop
}
