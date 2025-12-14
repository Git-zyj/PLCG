/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (~var_13);
    var_16 = (~var_8);
    var_17 ^= min((~8512385298478300133), 2420071014730493410);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_10 [5] [5] [i_2] [4] = (((arr_4 [i_0 + 3] [i_2 - 2] [i_2 - 2]) ? (max((((13 ? var_7 : (arr_7 [0] [19] [i_2] [i_2])))), ((1625613962 ? var_3 : 2420071014730493410)))) : (((((var_1 ? var_12 : (arr_0 [i_0]))) * (((!(arr_3 [2])))))))));
                            var_18 = var_5;
                            var_19 = (((-2420071014730493403 - 2420071014730493410) ? 11259 : 18446744073709551595));
                        }
                    }
                }
                var_20 = (((arr_1 [i_0]) | -0));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_21 |= (arr_13 [i_0] [i_0 - 1] [i_0] [i_4] [i_6]);
                                var_22 = (((((arr_15 [i_0 + 1] [i_0] [i_0]) != (arr_15 [6] [i_0] [i_0]))) ? (~1) : ((-66 ? 242 : 18446744073709551615))));
                            }
                        }
                    }
                }
                var_23 -= (arr_3 [i_1]);
                var_24 &= -2420071014730493410;
            }
        }
    }
    var_25 = ((51 && (((((-2420071014730493415 ? 62 : -2420071014730493415))) > var_8))));
    #pragma endscop
}
