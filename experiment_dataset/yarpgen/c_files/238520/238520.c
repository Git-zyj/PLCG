/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((min((30 / var_9), var_10)), var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = ((((max((arr_4 [i_1] [i_0]), (arr_4 [i_0] [i_1])))) / ((((arr_1 [i_0]) >= (arr_1 [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_14 = (((((30 - 65512) + 2147483647)) << (((((max(var_6, (arr_8 [i_0] [i_0] [i_0] [i_0])))) == ((max(var_5, var_1))))))));
                            var_15 *= (((var_2 || 28053) >= (((-8589 || ((((arr_6 [i_0] [i_1] [i_2 - 1]) * 0))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_16 = (max((var_6 ^ 1697497731), (18446744073709551615 * 0)));
                            var_17 ^= (min((min(var_6, var_2)), (max((arr_4 [i_1] [i_5]), var_2))));
                            var_18 = (min(var_18, ((max((min(0, (arr_11 [i_5 + 3] [i_5] [i_5 + 2] [i_5 + 2] [i_5] [i_5 - 2]))), ((max(var_5, var_2))))))));
                            var_19 = ((((((max(var_1, var_9)) != (((max(var_10, 27))))))) | ((1 * (20 && 1)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 13;i_7 += 1)
                    {
                        {
                            arr_17 [0] [i_6] [i_1] [i_0] |= ((((((arr_12 [i_7 + 2]) <= (((max(var_5, var_10))))))) >= (((-2 + 2147483647) << (var_9 - 1200822229258082550)))));
                            var_20 += (((min(854749641, (arr_10 [i_7 - 4] [i_7 - 3] [i_7 - 1] [i_7 - 2]))) != (var_10 || var_11)));
                            var_21 += (((((min(var_2, 1)))) / (max(18446744073709551615, (arr_8 [i_7 - 3] [i_7 - 1] [i_7] [i_7])))));
                        }
                    }
                }
            }
        }
    }
    var_22 = ((((max((91 ^ 7626), (var_4 + 190)))) / ((var_2 / (min(1, var_9))))));
    var_23 = (max(var_23, (((var_6 ^ ((((20940 / var_3) < (var_5 < 65)))))))));
    #pragma endscop
}
