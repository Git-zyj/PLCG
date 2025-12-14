/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_5 & (((var_8 + var_0) ? ((var_8 ? var_0 : 312687683)) : ((var_11 ? var_9 : (-32767 - 1)))))));
    var_14 = (((((65535 ? 18 : ((3379144648363597382 ? -30322 : 59748))))) ? ((((30317 ? 2 : 3458764513820540928)))) : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((((((((var_2 ? 2 : var_10))) > -8581276030115132439)) ? (min((arr_0 [i_0] [i_0]), (((18446744073709551615 ? (arr_9 [i_0]) : (arr_9 [i_0])))))) : ((((min((-9223372036854775807 - 1), (arr_5 [6] [i_0])))))))))));
                                arr_11 [i_0] [i_1 - 1] [i_2] [i_2] [i_2] [i_4] = (min(((+((min((arr_5 [i_2] [i_2]), 65517))))), (((((16010 ? var_12 : 7685766154816902438))) ? ((((arr_10 [i_0] [i_1 + 1] [i_1 + 1] [10] [i_3] [14]) <= (arr_5 [i_0] [i_2])))) : (arr_4 [i_0] [i_1] [i_2])))));
                                var_16 -= (((min(((((arr_2 [i_0]) | (arr_0 [i_0] [i_0])))), (((arr_8 [i_0] [i_1] [i_2] [i_3]) & 8036201028807777505))))) ? ((var_1 ? ((65532 ? 18446744073709551615 : 2147483647)) : (((((arr_2 [7]) > var_9)))))) : var_1);
                                arr_12 [i_3] [14] [i_2] [i_2] [i_0] |= -8581276030115132462;
                            }
                        }
                    }
                }
                var_17 = ((((((~(arr_4 [i_0] [i_1] [i_1]))))) ? (((((32459 && (-2147483647 - 1)))) ^ ((10 ? var_5 : 32767)))) : ((((((arr_2 [i_0]) ? (arr_3 [i_1] [i_0]) : var_0))) ? var_0 : (arr_8 [i_0] [i_1] [i_0] [i_1 - 2])))));
                var_18 = (max(-17923, 65517));
            }
        }
    }
    #pragma endscop
}
