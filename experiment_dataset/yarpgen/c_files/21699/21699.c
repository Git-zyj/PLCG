/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_12 = (min(var_12, (((var_6 * ((((arr_4 [i_0 - 1] [4] [i_1]) >= (max(var_9, 6454273667479727141))))))))));
                    var_13 += ((((((arr_0 [i_0 + 1] [i_1]) ? var_9 : (arr_0 [1] [i_1])))) ? (((arr_0 [i_1] [i_1]) % var_4)) : (min(var_7, var_0))));
                    var_14 = ((((~(max(var_8, (arr_1 [i_0]))))) * (((arr_1 [i_0]) - (((max(var_2, (arr_0 [i_0] [i_0])))))))));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_15 = var_10;

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_16 = (((((((!(arr_7 [i_0] [i_0] [i_3] [i_0]))) ? ((-(arr_4 [i_1] [i_1] [i_0]))) : (((((arr_1 [i_0]) != var_2))))))) ? var_7 : var_7));
                        arr_13 [i_0 - 1] [1] [i_3] [i_0] [i_4] [i_4] = ((((((arr_3 [i_0]) / var_4))) ? ((-(arr_3 [i_0]))) : 60298));
                        var_17 = (15 ? 65535 : 1);
                        var_18 = ((~(max((var_1 != var_9), (min(var_3, 31))))));
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_19 = ((((((arr_14 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0]) ? (0 * var_7) : (((arr_10 [i_1] [i_1] [9]) ? var_1 : (arr_2 [i_0])))))) / (max((var_0 > var_6), (~var_5)))));
                        var_20 = (arr_10 [i_0] [i_0] [4]);
                        var_21 *= ((-(arr_8 [i_0 - 1] [6] [i_5])));
                    }
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        var_22 -= 2965816382;
                        var_23 = (min(var_23, var_4));
                        var_24 = (((~((~(arr_7 [14] [14] [i_3] [i_6 + 1]))))));
                        var_25 = (min(var_25, ((((37037 ? var_4 : var_10))))));
                    }
                }
                var_26 -= (((-(31 || -27588))));
            }
        }
    }

    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        arr_20 [i_7] = (max((arr_5 [i_7] [i_7] [i_7]), (arr_4 [i_7] [i_7] [i_7])));
        arr_21 [i_7] = (((((((arr_6 [i_7]) % var_7))) ? ((var_8 ? var_10 : var_6)) : (var_1 || var_10))));
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        var_27 ^= ((-var_5 ? 255 : (((65528 && (((var_0 ? 65535 : var_1))))))));
        arr_25 [i_8] = (((arr_24 [i_8]) ? var_10 : var_3));
        var_28 = var_6;
        var_29 += (!(((65509 ? var_6 : 60268))));
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_30 ^= (~var_10);
        var_31 |= min((2078702697 - 65535), (((~(!var_2)))));
        arr_28 [1] &= (-(((arr_6 [2]) ^ (arr_8 [4] [4] [1]))));
    }
    var_32 = ((~(var_0 % var_6)));
    #pragma endscop
}
