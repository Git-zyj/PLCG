/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = (arr_8 [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0] [3]);
                                var_17 = 252;
                                var_18 = 65519;
                                var_19 -= var_0;
                                arr_10 [i_0] [i_0] [3] [i_0] [i_0] = (min((65528 > 4095), (arr_4 [i_0] [i_1] [i_2])));
                            }
                        }
                    }
                    var_20 = var_0;
                    var_21 = (((((arr_0 [i_0 - 1]) ^ var_1)) <= 16));
                    var_22 -= ((-((1048575 ? (((max(16, 12)))) : (((arr_6 [0] [0] [0] [i_1]) / 16))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                arr_17 [i_6] [12] = (max(((((arr_15 [i_5] [i_5] [i_5]) ? (arr_13 [i_6]) : (arr_12 [i_5])))), (((-32765 == var_0) ? (max(var_7, var_13)) : (min((arr_16 [i_5]), var_9))))));
                var_23 = ((((18446744073709547517 ^ (arr_14 [i_6]))) << (32765 - 32754)));
                var_24 = arr_16 [i_6];
            }
        }
    }
    var_25 = (!240);
    var_26 = ((~(((-2147483647 - 1) ? 32764 : 18446744073709547503))));
    #pragma endscop
}
