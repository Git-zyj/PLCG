/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_17 = (((arr_1 [0] [i_0]) ? (((max(var_8, -1163270327)) ^ 0)) : ((((arr_2 [i_0] [i_0]) == 1628959928)))));
        var_18 = var_8;
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            {
                var_19 = (arr_8 [i_2]);

                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    arr_12 [i_1] [i_2] = ((((var_10 & 71) ? (-1628959928 != 55) : (((arr_2 [i_1] [i_3]) ? (arr_8 [i_2]) : var_11)))) == var_12);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                arr_19 [i_1] [i_2] [i_2] [i_2] = (((((-(arr_2 [i_2] [i_2])))) ? (arr_16 [10] [i_2] [i_3] [i_1 + 2] [i_1 + 1] [i_2 + 1]) : 6106185997324812688));
                                arr_20 [i_2] [i_2] = ((var_3 ? ((((arr_5 [6]) ? ((-(arr_3 [4] [4]))) : (192 || 1)))) : (((var_15 || var_5) ? ((4294967295 ? -204670680711997415 : var_9)) : 1628959928))));
                                arr_21 [15] [i_2 + 1] [i_2] [i_3] [i_3] [3] [3] = (((((111 ? (arr_10 [i_2]) : 503316480))) ? var_5 : 175));
                            }
                        }
                    }
                    var_20 = ((~((((arr_15 [i_2 - 1] [i_1 + 2] [i_2 + 1] [i_1] [i_1 - 1]) >= var_3)))));
                }
                var_21 = (((((!(!37276)))) << (var_2 - 22)));
                var_22 = ((((((arr_14 [i_1 - 1] [i_1 - 1] [i_1] [i_2] [i_2] [i_2]) ^ var_0))) ? 1558763531473464333 : var_4));
            }
        }
    }
    #pragma endscop
}
