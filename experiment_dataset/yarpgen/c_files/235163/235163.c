/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = (((~-2054740833) ? ((-var_0 ? -var_0 : ((-(arr_0 [i_2]))))) : (((arr_5 [i_2] [i_1] [i_0 - 2] [i_2]) ^ -var_15))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 = (33608 >= 1983476561);
                                var_21 = ((((((arr_6 [i_0 - 2] [i_0 + 2] [i_3] [i_3]) * (arr_11 [i_0] [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_2] [i_0 - 2])))) ? (max((arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2]), (arr_1 [i_0] [i_1]))) : (((arr_4 [i_2]) ? (var_8 / var_15) : -0))));
                                var_22 = (max(var_22, 0));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                arr_20 [i_5 - 1] = (((~0) | 0));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_23 = (((((((arr_19 [i_5 + 2]) ? -2017707032396815193 : 4294967295)) + 9223372036854775807)) << 0));
                            arr_25 [i_7] [i_7] = ((4294967295 ? 0 : (((((0 < (arr_22 [i_8] [i_7] [i_6])))) ^ 35612))));
                            arr_26 [i_5 + 1] [i_5 + 2] [i_5 + 2] [i_7] = (47802 * 0);
                            var_24 = (min(9230098194239084563, 16265));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 16;i_10 += 1)
                    {
                        {
                            var_25 |= (((((536870911 ? 864078587 : 127))) >= ((((min(3000239997925130451, var_14))) ? (arr_28 [i_5] [i_5] [i_5 + 2]) : (4294967295 + var_10)))));
                            var_26 = (arr_27 [i_10 - 1] [i_10 - 1] [4]);
                            var_27 ^= var_2;
                            var_28 = ((~((((arr_22 [i_5 + 1] [i_5 - 1] [i_10 - 3]) <= (arr_27 [i_5 + 1] [i_5 - 1] [i_10 - 3]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
