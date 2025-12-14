/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((1 ? 63 : 3));
    var_21 = ((var_15 ? (var_1 % var_14) : ((var_17 - ((3764388515 ? 7 : 65512))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_22 *= ((((((arr_3 [i_1]) ? ((-49203397 ? 18 : 3)) : ((((arr_1 [i_1]) && -11689)))))) && (((arr_3 [i_1]) >= (arr_3 [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_1] [i_3] = (arr_8 [i_3] [i_0] [i_2] [i_2 - 2] [i_0] [i_2 + 1]);
                            var_23 = ((+((-(((-1498720624 + 2147483647) << (64171 - 64171)))))));
                            var_24 = (arr_0 [i_0]);
                        }
                    }
                }
                var_25 = (((((~(arr_5 [i_0] [i_0] [i_0])))) | ((~((var_4 & (arr_8 [i_0] [i_1] [i_1] [i_1] [i_0] [9])))))));
                arr_11 [i_1] [i_0] [i_1] = ((((arr_2 [i_0] [i_0] [i_0]) >= (arr_3 [i_0]))) ? (((-(((arr_0 [i_0]) ? var_4 : var_15))))) : ((max((arr_6 [i_0] [i_1]), -74))));
                var_26 = ((-((var_18 ? (arr_2 [i_0] [i_0] [i_1]) : (arr_0 [i_0])))));
            }
        }
    }
    #pragma endscop
}
