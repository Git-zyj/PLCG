/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = (((arr_4 [i_2 - 1]) ? (min((var_12 + var_9), (((var_8 ? 77 : 3586660827))))) : (((arr_8 [i_1] [i_1 + 1] [i_0]) ? var_0 : 4055543537791488240))));
                    arr_9 [i_1] = var_5;

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_12 [i_1] = var_14;
                        arr_13 [i_0] [i_1] [i_0] [i_1] = var_14;
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_2] [i_1] [i_4] = (max((((((var_13 ? (arr_8 [i_0] [0] [i_4]) : 9223372036854775785)) * 8236190141347050378))), (((arr_15 [i_0] [i_1 + 1] [i_2 - 3] [i_2 + 1] [i_4]) / var_9))));
                        arr_19 [i_0] [i_1] [i_1] [i_1] = ((((~((var_9 ? 34193 : (-32767 - 1)))))) == ((~(max(var_14, var_0)))));
                        var_16 = ((((((((arr_6 [i_0] [i_1] [i_2] [i_4]) | -9223372036854775780)) | (~var_7)))) ? var_13 : ((((min(var_4, 62))) ? 0 : (~var_6)))));
                    }
                    var_17 = 107;
                    arr_20 [i_0] [i_1] [i_1] = (((arr_4 [i_2 - 3]) ? var_6 : -1));
                }
            }
        }
    }
    var_18 = (var_6 - 31343);
    var_19 *= (((!32767) ? var_12 : (((((-811157536135206476 ? var_10 : var_11))) ? (var_3 + 28185) : (-32767 - 1)))));
    #pragma endscop
}
