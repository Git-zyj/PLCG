/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (min(var_2, ((!((min(1, var_13)))))));
    var_16 = (min(var_16, var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (min(var_17, var_2));
                var_18 = (max((arr_2 [i_0] [i_1]), (arr_0 [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 |= 1;
                                arr_13 [i_1] = (max(-8, -127));
                                var_20 = -25315;
                                arr_14 [i_0] [i_0] [i_2] [i_1] [i_4] [i_4] [i_4] = (arr_4 [i_2] [i_1]);
                            }
                        }
                    }
                }
                var_21 += (((~(!59413))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 18;i_7 += 1)
            {
                {
                    arr_22 [i_5] [i_6] [i_7 - 1] = ((1 ? (arr_21 [i_5 - 1] [i_6] [i_5 - 1] [i_7 - 2]) : (max((arr_17 [i_5] [i_5]), (arr_15 [i_6])))));
                    arr_23 [i_7] = (((((~(var_3 & 1)))) ? (((1 | ((min((arr_18 [i_7] [i_6] [i_5]), (arr_18 [i_5] [4] [i_5]))))))) : (arr_17 [i_7] [20])));
                }
            }
        }
    }
    #pragma endscop
}
