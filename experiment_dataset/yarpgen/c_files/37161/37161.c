/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        arr_9 [i_0 + 4] [i_1] [i_1] [i_2] [i_3 + 1] = (3567772450 | var_11);
                        var_15 = (min(var_15, ((min((((3567772427 >= ((~(arr_5 [i_2] [i_1] [i_2])))))), (+-102))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        arr_12 [i_1] [i_4 + 2] [i_2] [i_2] [i_1] [i_1] = ((var_1 << (arr_7 [i_0 + 4] [i_1])));
                        arr_13 [i_1] = ((~(727194863 & -1064018713)));
                    }
                    for (int i_5 = 3; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_16 = (min(var_16, ((((((-2387779877287448660 ? (arr_2 [0] [i_0 + 4] [i_5 + 1]) : (arr_2 [1] [i_0 + 4] [i_5 + 1])))) ? 2231206926781504933 : var_4)))));
                        arr_16 [i_1] [i_1] [i_1] = (1023 / 3567772428);
                    }
                    for (int i_6 = 3; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_1] [i_1] [i_1] [i_2] [i_2] = (~-2387779877287448663);
                        arr_21 [i_0] [i_0] [i_1] [i_1] [i_6] = ((((((arr_5 [i_2] [15] [i_0 + 3]) ? 56750 : ((((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 1]) || 2052762173)))))) ? (((arr_1 [i_2]) ? ((89 ? (arr_17 [i_1] [i_2] [i_1]) : (arr_10 [i_0] [i_1] [i_0]))) : (((~(arr_17 [i_0 + 2] [i_0] [i_1])))))) : (((((((var_13 >> (5221568650515373966 - 5221568650515373948)))) && var_1))))));
                        var_17 ^= ((-((~(((arr_3 [i_0]) * var_9))))));
                    }
                    arr_22 [i_1] [i_1] [i_2] = ((((arr_8 [i_0] [i_1] [i_1] [i_0] [i_2] [i_2]) ? -2387779877287448663 : -6645914942789039269)));
                }
            }
        }
    }
    var_18 = ((var_8 ? (1024 / 17669376945077727540) : (((((8388608 ? 19 : -2387779877287448660)) + (9223372036854775779 || 149))))));
    var_19 = ((min(var_9, (((var_6 ? 0 : 54))))) <= ((((var_7 - var_14) / var_0))));
    #pragma endscop
}
