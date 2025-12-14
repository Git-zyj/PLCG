/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((255 ? 65535 : 128));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] = (((-(arr_5 [i_1] [i_1]))));
        var_11 = (min(var_11, var_9));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_23 [i_2] = (arr_11 [i_2]);
                                var_12 = ((((var_9 ? (-9223372036854775807 - 1) : 20718)) | 20718));
                                arr_24 [i_2] [i_3] [i_6] [i_5] [i_6] [i_2] = (arr_19 [i_2] [i_3] [i_4] [i_3]);
                            }
                        }
                    }
                    var_13 ^= 18446744073709551608;
                }
            }
        }
        var_14 = (min(var_14, -9223372036854775790));
    }
    var_15 = (max(var_15, 20));
    var_16 = var_3;
    #pragma endscop
}
