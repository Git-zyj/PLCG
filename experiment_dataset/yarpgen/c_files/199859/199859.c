/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 1] [i_1] [i_0 - 1] &= ((~(((arr_3 [i_0 + 1] [i_0 - 2]) >> (arr_3 [i_0] [i_0 + 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 ^= ((var_10 ? ((((-3721212113771151922 & var_8) == (arr_6 [i_0] [i_1] [i_1] [i_3])))) : 31));
                                var_18 -= (var_0 + var_10);
                            }
                        }
                    }
                    arr_16 [i_0] [12] [i_2] [i_0] = var_11;
                    var_19 = ((((((((~(arr_13 [i_0 - 3])))) ? -2015662175 : 503316480))) ? -1602796083 : (~8826547361376098731)));
                    var_20 &= (arr_8 [i_2] [i_2] [i_1] [i_0]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                arr_22 [i_6] [i_6] = -var_3;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_21 = (min(var_21, (((((arr_4 [i_5 + 1]) ^ (arr_11 [i_5] [i_7] [i_8] [i_8])))))));
                            arr_28 [i_5] [i_6] [i_6] [i_7] [7] [i_6] = (arr_3 [i_7] [i_7]);
                            arr_29 [i_5] [i_6] [i_6] [i_6] = ((~(arr_20 [i_5 - 1])));
                            var_22 = ((+((var_7 ? (arr_23 [i_5] [i_5 + 4] [10]) : (arr_26 [i_5] [i_5 + 2] [2] [i_5])))));
                        }
                    }
                }
                var_23 = 8826547361376098731;
            }
        }
    }
    #pragma endscop
}
