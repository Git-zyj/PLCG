/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (((((((!var_13) && ((min(-13, -50236873))))))) % (((((12020083406498023018 ? 105 : var_3))) ? (((var_2 ? -50236873 : 18364))) : (-561 + var_13)))));
                var_15 -= (((361447681 ? 18364 : var_4)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_11 [8] [8] |= ((~(((var_0 ^ 255) ? (560 < -4726247982015326223) : -560))));
                            var_16 = (((!var_9) * ((-(-127 - 1)))));

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_17 = (2438465019 ? (17803630973848665262 == -536) : var_13);
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((-361447681 / (~var_12)));
                                var_18 = ((~((-var_0 ^ ((var_7 ? 148 : var_5))))));
                            }
                            var_19 = (((32767 ? var_9 : 1)));
                        }
                    }
                }
            }
        }
    }
    var_20 = 17384518422291708377;
    var_21 = ((((~-558) | (~-4726247982015326223))));
    #pragma endscop
}
