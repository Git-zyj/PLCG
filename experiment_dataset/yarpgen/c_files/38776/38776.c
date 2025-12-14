/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_13 [i_0 + 1] [i_0] [i_0 + 1] [i_2] [6] [i_3] = var_0;
                            arr_14 [i_2] [i_2] [i_2] |= (arr_11 [i_2]);
                        }
                    }
                }
                arr_15 [i_1] [0] [0] |= (min(((var_6 ^ ((-25645 ^ (arr_3 [i_0]))))), (arr_10 [i_0 + 1] [14] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0])));

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_12 = min(((((max(var_0, (arr_18 [i_0] [i_0] [i_0]))) <= (arr_16 [i_0] [6] [i_4] [i_4])))), ((((min(65468, 184))) * (arr_0 [i_0 + 1]))));
                    var_13 ^= ((var_7 ? 10700 : ((7680 ? (arr_5 [i_1] [i_1] [i_1]) : 35893))));
                }

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {

                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        var_14 = var_4;
                        var_15 *= (((arr_23 [i_0 + 1] [i_1] [i_5] [i_5]) + -1820300125));
                        arr_26 [i_0] [i_0] = (~(-2147483647 - 1));
                    }
                    var_16 = (max(var_16, 1));
                }
                /* vectorizable */
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    arr_30 [i_0 + 1] [i_1] [i_7] [i_0] = (arr_10 [i_0] [i_0] [i_1] [i_7 + 1] [i_7] [i_0]);
                    var_17 = (arr_25 [i_7 - 2] [i_0 + 1] [i_0] [i_0 + 1]);
                    arr_31 [i_0] [i_1] [14] [i_0] = (arr_0 [i_1]);

                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_18 = (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_19 = ((18374686479671623680 ? ((var_8 ? var_8 : (arr_16 [i_0 + 1] [i_1] [i_8] [i_8]))) : (arr_32 [3] [3])));
                        var_20 = (arr_27 [i_0] [i_0] [i_0 + 1] [i_0]);
                    }
                }
            }
        }
    }
    var_21 = (min(var_21, ((min(var_0, var_6)))));
    var_22 = ((var_3 << (var_6 - 189)));
    var_23 = (var_1 || var_3);
    #pragma endscop
}
