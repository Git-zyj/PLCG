/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_16 = 4;
        var_17 += arr_2 [i_0] [i_0];
        var_18 = 65529;
        var_19 = (min(var_19, ((((arr_1 [i_0]) || (8 && 1))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_20 = (((12 - (arr_1 [i_1]))));
        var_21 = ((1 ? (((1 && (arr_4 [i_1] [i_1])))) : (arr_0 [i_1])));
        arr_5 [10] = 65532;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_22 = ((((((((65530 ? (arr_9 [i_1] [i_2] [i_2 + 1] [5]) : var_2))) && (((15 << (((arr_0 [i_1]) - 37)))))))) / ((((-9223372036854775807 - 1) <= (((-17340 ? var_10 : 15))))))));
                    var_23 -= max((arr_3 [i_1] [i_2 + 2]), ((max(65532, (arr_0 [i_2 - 1])))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_24 ^= (-(arr_0 [i_5]));
                                arr_17 [i_2] [i_3] [2] [i_5] = (((((arr_6 [i_2] [i_2 - 1] [14]) ? (max((arr_8 [i_1] [i_1]), var_4)) : var_9)) != ((((arr_9 [i_5 - 1] [i_2 + 2] [i_2 + 3] [i_1]) / (arr_9 [i_5 + 1] [i_2 + 3] [i_2 + 1] [i_1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_4;
    #pragma endscop
}
