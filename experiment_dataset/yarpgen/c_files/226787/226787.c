/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((((((arr_1 [i_0] [i_1]) * ((var_5 ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0] [i_1])))))) ? ((min((!var_2), (min((arr_0 [i_1] [i_1]), (arr_2 [i_0] [i_0])))))) : (max(-83, 18446744073709551615)))))));
                var_16 = (((max((1 * 1), 2185976108))) ? (((arr_1 [i_1] [i_0]) ? (arr_3 [i_0]) : (arr_1 [i_1] [i_1]))) : -var_0);
            }
        }
    }
    var_17 = var_12;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 21;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_18 |= ((((~(((arr_16 [i_2]) & var_13)))) & (2108991202 % 2108991209)));
                                var_19 = (min(-120, ((((max((arr_15 [i_4]), (arr_8 [i_3] [i_3])))) ? (arr_6 [i_2] [i_2]) : var_0))));
                            }
                        }
                    }

                    for (int i_7 = 3; i_7 < 18;i_7 += 1)
                    {

                        for (int i_8 = 2; i_8 < 20;i_8 += 1) /* same iter space */
                        {
                            var_20 ^= (((((+(min((arr_7 [14] [i_3]), (arr_5 [i_2] [i_2])))))) ? (((arr_16 [i_3]) ? (min((arr_17 [i_2] [i_3] [2] [i_7 + 1] [i_8]), 2147483648)) : 116)) : (~var_1)));
                            arr_24 [i_2] [i_3 - 1] [i_2] [i_4 - 2] [i_4] [i_8 - 1] = (((~(arr_7 [i_8 - 1] [i_3 + 1]))));
                        }
                        for (int i_9 = 2; i_9 < 20;i_9 += 1) /* same iter space */
                        {
                            arr_27 [i_2] [i_2] [i_4] = (min((max(((((arr_18 [i_2] [i_4] [i_2] [i_9]) << 0))), (((arr_4 [16] [i_3]) ? var_8 : (arr_22 [i_4] [9] [i_4] [i_4 - 1] [9] [i_4]))))), ((((496714173 || (-2147483647 - 1))) ? 59448 : (min(49, (arr_19 [i_2] [i_2] [i_4 - 3] [i_4] [i_9] [i_3])))))));
                            var_21 ^= ((((arr_26 [19] [i_3] [i_3 - 1] [i_3] [i_3 - 1]) ? (arr_26 [i_3 - 1] [i_3] [15] [i_3] [i_3 - 1]) : (arr_26 [i_3] [12] [i_3] [i_3 + 1] [i_3 - 1]))));
                            var_22 = 18693;
                        }
                        arr_28 [i_7] [i_4] [i_4] [i_2] = ((var_2 ? ((212 ^ (~var_2))) : ((((min((arr_22 [i_4] [i_4] [i_4] [i_7] [i_2] [i_7]), (arr_20 [i_7] [i_4 - 3] [i_3] [i_2] [i_2])))) ? ((max(229, var_11))) : 80))));
                    }
                }
            }
        }
    }
    var_23 = -3599336896920887230;
    var_24 ^= -var_8;
    #pragma endscop
}
