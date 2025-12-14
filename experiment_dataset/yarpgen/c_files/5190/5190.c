/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = min(var_7, (((120 ? -121 : -16029))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (((((arr_0 [i_0 + 1] [9]) ? (arr_0 [i_0 + 3] [i_0 + 3]) : (arr_1 [i_0 - 2] [i_1])))) ? (((((16029 << (76 - 62)))) ? (((arr_1 [i_0] [i_0 - 2]) ? -3367346479376208900 : (arr_1 [i_0 - 2] [i_0]))) : (((var_12 ? (arr_0 [i_0] [8]) : (arr_0 [i_0] [i_1])))))) : (((((var_10 / (arr_3 [4]))) << (((arr_3 [i_0 + 1]) - 189))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_11 [i_0 - 1] [i_0 - 1] [i_1] [i_3] = var_1;
                            var_15 = (max((((arr_6 [i_0 - 2]) / var_12)), ((max(58, 1)))));
                        }
                    }
                }
                var_16 = (((max((min(var_11, (arr_1 [i_0] [i_0]))), (((1 != (arr_8 [i_0 + 1])))))) == (64 && 940593865754605935)));
                var_17 += ((((((arr_1 [i_0 + 3] [i_0 - 1]) != (arr_1 [i_0 - 2] [i_0 + 2])))) - ((var_6 ? (arr_1 [i_0 + 1] [i_0 - 1]) : (arr_1 [i_0 - 2] [i_0 - 2])))));
                arr_12 [i_0] [i_1] = (((((~(var_4 & 983040)))) ^ 5288395154207065048));
            }
        }
    }
    var_18 ^= var_2;
    var_19 ^= (min((((var_4 ? (var_8 ^ 2147483647) : var_0))), (((min(10859920215323442867, var_10)) + var_1))));
    #pragma endscop
}
