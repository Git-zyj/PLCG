/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 ^= (((!12) >= (arr_0 [i_0])));
        var_15 = ((-((((137 ? (arr_0 [i_0]) : var_7)) | var_2))));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        arr_6 [9] = (~9223372036854775807);
        arr_7 [i_1 - 2] [i_1 - 1] = (min((arr_2 [i_1 + 1] [i_1 - 1]), ((~(arr_5 [i_1 + 2])))));
        var_16 += (max(((min((arr_2 [i_1] [i_1 - 3]), 142938992))), (((((9223372036854775807 ? 4235285545 : (arr_3 [i_1])))) ? 9223372036854775799 : ((((arr_3 [4]) ? 417330215 : (arr_5 [i_1]))))))));
        arr_8 [i_1] = ((!((((arr_3 [i_1 - 2]) ? 9223372036854775807 : var_4)))));
    }
    var_17 = var_9;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_18 = 417330204;
                                var_19 *= ((!((max((min(var_12, var_10)), -22513)))));
                                var_20 ^= -9223372036854775798;
                            }
                        }
                    }
                    arr_21 [i_2] [i_3] = (max(12505151179212271741, ((4110905982 ? -var_7 : -254189347))));
                    var_21 ^= 9223372036854775798;
                    var_22 = var_9;
                    arr_22 [1] [8] [i_3] [i_4] = (~-1304334277);
                }
            }
        }
    }
    var_23 ^= (min(((3968 ? var_2 : var_7)), var_10));
    #pragma endscop
}
