/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_10 = (((((((min(var_6, var_9))) ? (((min(1, var_9)))) : ((9223372036854775795 / (arr_4 [i_0] [i_2])))))) ? (((((min(var_0, var_9))) + (arr_3 [i_0])))) : (min((min(12553198727743281957, var_3)), ((min((arr_0 [i_2]), (arr_5 [i_2]))))))));
                    var_11 -= (((var_3 ^ (arr_4 [i_0] [i_1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_12 = (arr_1 [i_1] [15]);
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_3] = min((min((((arr_1 [i_1] [i_4]) + var_2)), (arr_6 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))), ((((arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0]) ? (var_8 < var_9) : (arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_3])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_13 = (min((min(9223372036854775792, (arr_10 [i_0] [i_1] [i_2] [i_2] [i_6] [i_6] [i_6]))), var_9));
                                var_14 = (((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [16]) ? (arr_16 [i_0] [i_0] [i_2]) : (max(11479266776778109847, var_6))));
                            }
                        }
                    }
                    var_15 = var_0;
                }
            }
        }
    }
    var_16 = var_3;

    /* vectorizable */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        var_17 = ((var_9 <= (arr_19 [i_7])));
        var_18 = var_6;
        arr_22 [i_7] [i_7] = (((-9223372036854775784 ? 33554431 : var_6)) | (var_2 ^ var_1));
    }
    var_19 = (min(var_6, var_0));
    #pragma endscop
}
