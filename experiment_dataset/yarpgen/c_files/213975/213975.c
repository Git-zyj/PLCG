/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [15] [i_2] [i_0] = (arr_0 [i_2] [i_1 + 1]);
                    arr_8 [i_0] [i_0] [i_0] &= 31809;
                    var_16 = (((((-(((arr_6 [i_0] [i_1 - 1] [i_2] [i_2]) ? 648258329 : var_12))))) ? (max((arr_4 [i_0]), (min(var_8, 4412932513207776704)))) : ((((var_7 > var_3) ? (18446744073709551610 == 18446744073709551615) : var_11)))));

                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        var_17 = var_11;
                        var_18 = (max(var_18, ((!(arr_4 [i_3 - 2])))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            arr_15 [i_0] [i_1 + 1] [i_2] [i_2] [i_4] = 8962037206604569937;
                            var_19 *= 1;
                            var_20 = (((arr_12 [i_3 - 2] [i_3 + 1] [i_3 - 2] [i_3 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) >> (arr_12 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 - 2] [i_1 - 1] [i_1 + 1] [i_1 + 1])));
                            arr_16 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] = (((var_13 > -13) * (arr_6 [i_0] [i_0] [i_0] [i_0])));
                            var_21 ^= (arr_2 [i_0] [i_1 + 1] [i_2]);
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(((var_15 ? var_15 : var_5)), var_8));
    #pragma endscop
}
