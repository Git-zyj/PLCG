/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (var_7 / -252);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_8 [i_1] = (arr_1 [i_0 - 3]);
                    var_16 |= ((((arr_4 [i_0] [i_1]) < (arr_0 [i_0 + 1]))));
                    var_17 = (max(var_17, (arr_2 [i_0 - 2])));
                    var_18 = (arr_1 [i_0 - 2]);
                }
                var_19 *= (((arr_6 [i_0] [i_0] [i_1] [20]) ? ((((arr_6 [22] [i_1] [i_1] [6]) ? -1578278012 : (arr_2 [i_1])))) : ((((((arr_0 [3]) ? (arr_7 [2]) : -6451)))))));

                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    var_20 ^= 6450;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_21 = (arr_12 [i_0] [i_1] [i_1] [i_4] [i_5 - 3] [i_4]);
                                var_22 = 10396;
                                var_23 = (arr_10 [i_1] [i_1] [i_1] [i_4]);
                                var_24 = (((var_6 << (arr_0 [i_0]))));
                                var_25 = (arr_4 [i_0] [13]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = var_11;
    var_27 |= var_14;
    var_28 = (!76);
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                arr_23 [i_7] [i_7] = (((!(((-4358869067086750306 ? 95 : 59))))));
                var_29 = (i_7 % 2 == 0) ? ((((((arr_6 [i_6] [i_6] [i_6] [i_7]) + 9223372036854775807)) << ((147 ? (arr_0 [22]) : var_14))))) : ((((((arr_6 [i_6] [i_6] [i_6] [i_7]) + 9223372036854775807)) << ((((147 ? (arr_0 [22]) : var_14)) - 2)))));
            }
        }
    }
    #pragma endscop
}
