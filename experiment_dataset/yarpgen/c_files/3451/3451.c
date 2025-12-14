/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1;
    var_18 = ((((681311507 >= 1) >= 1)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 += ((((((var_0 ? -1 : (arr_5 [i_0] [i_1] [9]))) + 2147483647)) << ((((1 ? var_3 : 78)) - 1))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = (arr_10 [i_2 + 3]);
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_0] = (((arr_10 [i_3 - 1]) ? (arr_10 [i_3 + 1]) : (arr_10 [i_3 + 1])));
                            }
                        }
                    }
                    var_21 = ((((arr_5 [i_0] [i_0] [i_2]) ? 540161847 : (arr_4 [i_0] [i_2]))));
                    var_22 = var_1;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    {
                        arr_22 [i_5] = ((var_6 ? var_8 : (-9223372036854775807 - 1)));
                        var_23 = (min(var_23, ((20550 ? (arr_20 [i_0] [i_5]) : (arr_20 [i_5] [i_0])))));
                        var_24 ^= (arr_15 [i_0]);
                        var_25 = (max(var_25, (((arr_10 [i_0]) != (arr_10 [i_5])))));
                    }
                }
            }
        }
        var_26 &= -20561;
        var_27 += ((var_14 ? (arr_1 [i_0]) : -92));
    }
    var_28 = (max(var_3, (min((((var_3 ? 20565 : 65535))), ((var_15 ? var_11 : -9223372036854775793))))));
    #pragma endscop
}
