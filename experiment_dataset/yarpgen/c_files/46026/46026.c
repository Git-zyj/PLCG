/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (12 * var_15);
    var_19 &= (max((((var_4 ? 0 : var_8))), (0 % var_16)));
    var_20 = (((((var_1 ? (!var_13) : (-3 || var_1)))) || ((((65535 ? var_11 : var_3))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_21 -= (max((min((arr_0 [4] [7]), var_2)), ((min(((~(arr_1 [4]))), (arr_4 [1] [5] [1]))))));

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_22 = ((((arr_0 [13] [13]) ? ((min(12, 8))) : (arr_5 [10] [10] [i_1 - 1]))) + (~10));
                    arr_9 [8] [8] [8] [8] [1] [1] = (((((((arr_2 [i_0] [8] [i_0]) ? (arr_0 [i_0] [13]) : (arr_6 [0] [1] [1] [1]))))) || ((((arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (arr_8 [i_1] [6] [i_1 - 1] [i_1]) : (arr_8 [i_1] [1] [1] [i_1 - 1]))))));
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_23 *= (-(((10654850196418976991 + var_0) - (((~(arr_8 [i_0] [i_0] [i_0] [3])))))));
                            arr_16 [11] [i_5] [i_5] [9] [12] = (max((((65530 ? 58 : 1))), ((-(arr_2 [i_1] [i_1 - 1] [i_1 - 1])))));
                            arr_17 [1] [1] [4] [3] [i_5] [i_5] = (((((~var_17) ? (((arr_2 [0] [7] [3]) * 3)) : ((((arr_15 [1] [1] [i_5] [1] [11]) / var_0))))) == ((((-(arr_14 [7] [0] [7] [2] [0] [4] [2])))))));
                        }
                    }
                }
            }
        }
        for (int i_6 = 2; i_6 < 13;i_6 += 1)
        {
            arr_22 [1] = ((var_6 ? (arr_5 [11] [11] [4]) : (((arr_19 [0] [1] [i_6 + 1]) ? (arr_19 [i_0] [3] [i_6 - 1]) : (arr_19 [i_0] [1] [i_6 + 1])))));
            var_24 = var_0;
            arr_23 [i_0] [7] [5] = (((((((arr_19 [i_0] [i_0] [i_0]) ? var_9 : var_2)))) ? (((-65520 ? ((min(0, (arr_0 [i_0] [i_0])))) : (arr_15 [10] [10] [10] [10] [i_0])))) : ((((min(103, 29833))) ? var_16 : (arr_19 [i_0] [1] [1])))));
            var_25 = (min(var_25, (((var_11 * (((var_8 ? var_14 : -87))))))));
        }
        arr_24 [i_0] = (min((arr_10 [6] [1] [13] [1]), (arr_10 [i_0] [i_0] [i_0] [i_0])));
        arr_25 [6] = ((~(((~(arr_1 [8]))))));
    }
    #pragma endscop
}
