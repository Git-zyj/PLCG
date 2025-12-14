/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 ^= (((((!(~-6456)))) >> ((((!var_9) >= ((-(arr_1 [8]))))))));
        arr_3 [i_0] [i_0] = ((~((-(((var_16 <= (arr_0 [i_0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [2] [i_1] [i_2] = ((+(((((arr_5 [i_1 - 2] [i_0]) / -47)) ^ ((-(arr_2 [i_2] [9])))))));
                    var_20 = ((-(((var_0 + var_13) - ((var_13 + (arr_6 [1] [i_1] [i_2])))))));
                    arr_11 [i_0] [i_2] = ((-(~-124)));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        arr_20 [i_4] [i_4] [i_4] [i_5] [4] = ((((~(var_8 - var_2))) ^ (((var_0 * (!var_5))))));
                        arr_21 [i_4] [i_4] [i_3 + 1] [i_4] = (!((((((((arr_13 [0]) | 41)) + 2147483647)) << (((var_5 + 10104) - 13))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_21 *= ((-((((arr_24 [i_0] [i_0] [i_7] [i_0]) <= ((~(arr_22 [i_0] [i_7] [3]))))))));
                    var_22 = ((((1680385149 >> ((((var_7 - (arr_0 [i_0]))) - 2560374843)))) << ((-((((arr_14 [i_6] [i_6] [i_6 + 1]) >= (arr_2 [i_0] [i_7]))))))));
                    var_23 = ((!(((((4149737195 >> (arr_16 [i_0] [i_0] [6]))) << (((255 * 3123535686) - 1932650149)))))));
                    arr_27 [1] [i_7] [i_6] [5] = ((~((~(~-47)))));
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 17;i_8 += 1)
    {
        var_24 = ((((~(~64))) >= (((!(100 / var_11))))));
        var_25 = (min(var_25, (((-(-var_18 - var_17))))));
        var_26 ^= ((((!(((arr_29 [i_8]) || (arr_28 [9]))))) || ((!(var_0 || 1)))));
    }
    var_27 = ((-(1 <= 13831)));
    #pragma endscop
}
