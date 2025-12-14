/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 &= var_6;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        var_13 = 250;
                        arr_9 [i_3] [i_2] [i_0] [i_0] = (((64307 ? 4017010598 : 18446744073709551615)));
                    }
                    arr_10 [i_0] [i_0] [i_0] [i_2] = (!-6583);
                }
            }
        }
        var_14 = var_0;
        var_15 = 515174043;
        arr_11 [i_0] [i_0] &= ((((4017010598 ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : 140113814)) | (((var_4 ? 64307 : (arr_2 [i_0] [i_0] [i_0]))))));
    }
    for (int i_4 = 2; i_4 < 17;i_4 += 1)
    {
        var_16 = (min(var_16, (((1228 ? 68 : -109584822)))));
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        var_17 = (arr_14 [i_4]);

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_24 [i_4] [i_4] [i_6] [i_4] [i_4] [i_6] [i_4] = 17575473698168827290;
                            var_18 = (arr_12 [i_4]);
                            arr_25 [i_4] [i_4] = (((((((var_10 ^ (arr_16 [i_6] [i_6 + 1] [i_6]))) ^ var_3))) ? (((arr_16 [i_5 - 2] [i_5] [i_5]) ^ 218)) : (((((58952 ? 4096 : 1))) ? ((~(arr_14 [i_7]))) : (~46489)))));
                        }
                        var_19 += var_4;
                        var_20 *= ((((var_9 ? 58945 : (arr_14 [i_6 + 1]))) + 6591));
                    }
                }
            }
        }
    }
    var_21 |= 64307;
    var_22 = ((109584818 <= (58952 / 58941)));
    #pragma endscop
}
