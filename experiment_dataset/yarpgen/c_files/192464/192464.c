/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 += -var_7;
                arr_4 [i_1] = max(((((~var_3) | var_13))), (((arr_3 [i_0] [i_1]) ^ (max(var_8, 3588506863)))));
                var_17 = (arr_3 [i_0] [i_1]);
                var_18 = (max(var_18, (arr_0 [i_0])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 7;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    arr_13 [3] [i_3 + 1] [i_2] [i_2] = -var_10;
                    var_19 = var_3;
                    var_20 = 9223372036854775794;
                    var_21 ^= ((-((-(arr_11 [i_3 + 1] [i_3 + 1] [i_4])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_22 = (!0);
                                arr_20 [i_2] [i_3 + 3] [i_4] [i_5] [i_6] = var_2;
                                var_23 = (max(var_23, ((((arr_19 [i_2] [i_2] [i_4] [i_5] [i_2]) ? 0 : (arr_3 [i_2] [i_2]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
