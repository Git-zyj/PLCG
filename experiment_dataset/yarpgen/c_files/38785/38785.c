/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_0;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((max((arr_0 [2]), (min(-115, 120)))))));
                var_16 ^= (min((((!(arr_5 [i_1 + 4] [i_1 + 4] [i_1 + 3])))), (((arr_5 [i_1 - 1] [i_0] [16]) ? (arr_5 [i_1 + 3] [i_1] [i_1 + 3]) : (arr_5 [i_1 + 4] [i_1] [18])))));
            }
        }
    }
    var_17 = ((min(1, (min(-503734758, 167)))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_18 *= (((((!var_6) < (((arr_10 [i_3]) ? (arr_10 [i_2]) : (arr_11 [i_2]))))) ? (((((300104732 <= 1) <= (((arr_12 [i_2] [i_3] [i_3] [i_2]) ^ var_4)))))) : ((var_10 ? (min((arr_16 [i_4] [i_3] [i_4] [2] [i_6]), (arr_14 [i_5] [i_3] [20] [i_2] [i_6] [i_3]))) : (arr_8 [i_3])))));
                                var_19 = (max(var_19, ((((((arr_13 [i_4] [i_3 - 1]) ? (arr_13 [i_2] [i_3 + 1]) : 503734758)) < ((min((arr_13 [i_4] [i_3 - 2]), -19037))))))));
                            }
                        }
                    }
                    arr_17 [i_2] [i_4] [8] &= (max(((var_5 * (arr_14 [i_3 - 2] [9] [i_4] [i_2] [2] [11]))), ((((arr_14 [i_3 - 1] [i_3 - 1] [i_4] [3] [i_2] [i_4]) != (arr_9 [i_4]))))));
                    var_20 = (max(var_20, ((((arr_14 [i_3 + 2] [i_3 + 2] [i_3 - 3] [i_4] [i_4] [12]) ? (max((~11943), (max(var_2, -77323468756720373)))) : (((((var_12 ? 2147483647 : var_1)) - 1))))))));
                    arr_18 [i_2] [i_2] [i_3] [15] = (min((min((!var_9), (var_5 / var_0))), ((((var_7 != 127) >= (arr_6 [i_4]))))));
                }
            }
        }
    }
    #pragma endscop
}
