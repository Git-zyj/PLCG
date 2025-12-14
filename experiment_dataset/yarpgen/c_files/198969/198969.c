/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= (var_16 ? var_16 : var_13);
        var_17 &= 262143;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = (-1605908751 / 10);
        var_18 ^= ((127 < (min(-61782118, (arr_0 [i_1])))));
        var_19 = (max(((((var_4 ? -747919439 : (arr_0 [7]))))), (arr_3 [i_1] [i_1])));
        var_20 ^= (min((min((arr_1 [i_1]), (arr_3 [i_1] [i_1]))), (arr_3 [i_1] [15])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_21 = (((((arr_6 [i_2]) + 2147483647)) << (((((var_0 + 2147483647) << (149960536 - 149960536))) - 1096530603))));
        var_22 = (max(var_22, (((41169 / (arr_0 [i_2]))))));
    }
    var_23 ^= var_12;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                var_24 = min(8388607, (!24865));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 7;i_7 += 1)
                        {
                            {
                                arr_24 [i_3] [i_3] [8] [i_6] [i_7] = (((arr_1 [i_6]) / -149960557));
                                var_25 = (((((var_4 ? var_1 : (((arr_20 [i_4] [i_4] [i_3] [i_3] [i_3] [i_3]) ? var_3 : (arr_6 [i_5])))))) ? (arr_20 [i_7 - 1] [i_7 - 1] [i_7] [i_7 + 2] [i_7] [i_7]) : (min(((-(arr_4 [i_5]))), (((arr_1 [i_6]) ? 31 : var_16))))));
                            }
                        }
                    }
                }
                arr_25 [8] &= ((((max(3011719722, var_14)) >> (-18266 + 18269))));
                var_26 = -55;
            }
        }
    }
    #pragma endscop
}
