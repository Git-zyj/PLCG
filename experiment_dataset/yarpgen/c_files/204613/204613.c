/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    var_17 = (arr_1 [i_1] [i_0]);
                    var_18 = (206 <= 1055660133);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 ^= arr_10 [i_0] [i_1] [i_2 + 1] [i_0] [i_1] [i_4 - 1];
                                var_20 = (12747 & 65534);
                                var_21 |= var_4;
                                var_22 = (-12747 >= 14924);
                            }
                        }
                    }
                    var_23 = 216;
                    var_24 = ((-12747 ? 15187079452470042251 : 50633));
                }
                arr_14 [i_0] [i_1] [i_1] = var_12;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                {
                    var_25 = var_7;
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_26 = -12747;
                                arr_28 [i_9] [i_7] [i_7] [i_7] [i_5] = ((9 ? 50611 : -1073741824));
                                arr_29 [i_5] [i_5] [i_7] [i_8] [i_9] = ((((((var_14 ? 252 : var_8)) * ((3 ? 251 : 255))))) + (((arr_4 [i_7 - 1] [i_8 - 3] [i_6]) & 2305843009213693952)));
                            }
                        }
                    }
                    var_27 = (min(18446744073709551615, 4));
                }
            }
        }
    }
    #pragma endscop
}
