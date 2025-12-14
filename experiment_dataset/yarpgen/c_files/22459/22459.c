/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_12;
    var_18 ^= var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (((-(~1))))));
                    arr_7 [i_0] [i_1] [i_1] = (max((min((max((arr_6 [i_2]), 1605950030)), 4294967283)), ((3637548138 ? (2362614232 & 32752) : (max((arr_1 [0]), (arr_0 [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_20 &= max(30, 65535);
                                var_21 |= ((!((max((((var_6 ? 11135 : var_5))), 6793899539267709944)))));
                                var_22 ^= ((((max((!3651), -var_8))) && ((((((1932353055 ? (arr_10 [i_0]) : 0))) ? ((var_13 ? var_13 : (arr_4 [9] [i_1] [i_2 + 2]))) : -1)))));
                                var_23 *= (((min((arr_12 [2] [i_1] [i_2 + 1] [i_3]), (arr_12 [18] [i_1] [i_2 - 3] [i_2 - 3])))) >= ((max((arr_12 [8] [i_1] [i_2 - 3] [4]), (arr_12 [1] [i_1] [i_2 - 3] [i_1])))));
                                arr_14 [10] [i_1] [0] [i_1] [10] = (max(((43435 ? ((-(arr_1 [i_0]))) : ((max(1, 1))))), ((-((max(-6041, var_13)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 ^= var_5;
    var_25 = ((~(max(16894, var_8))));
    #pragma endscop
}
