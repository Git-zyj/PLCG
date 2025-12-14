/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((max(var_12, (-32767 - 1))), var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 = 4095;
        var_22 += var_3;
        var_23 += 39492387;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_24 &= (1265358927 / 2073393071094565459);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    {
                        var_25 = (!var_7);
                        arr_14 [20] [i_2] [1] [i_4] = (max((((-var_6 - (arr_2 [i_4 - 1])))), (max(2073393071094565459, 2073393071094565451))));
                        var_26 = (64 % 67);
                    }
                }
            }
        }
        var_27 &= ((~(max(((var_0 ? var_16 : var_13)), var_0))));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            arr_19 [i_5] [4] = var_0;
            arr_20 [i_5] [i_5] [i_6] = var_15;
            arr_21 [i_5] = var_12;
            var_28 = var_9;
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                {
                    var_29 ^= (min(((((((2060035003 ? -2073393071094565440 : 65533))) ? (3840 / 12174) : (var_5 - var_13)))), (((((3730 ? -37 : 1128139875982975625))) ? 17318604197726575991 : (((-(arr_17 [19] [i_7] [i_8 - 1]))))))));
                    arr_27 [i_5] [i_8] [i_8 - 1] [i_7] = (((((arr_22 [i_8] [i_8 - 1] [i_8]) >= (arr_22 [0] [i_8 - 1] [7]))) ? ((((arr_22 [i_8 - 1] [i_8 - 1] [i_8 - 1]) >= 2060035003))) : -2142422903));
                    var_30 |= ((((var_10 ? ((~(arr_26 [i_5] [i_7] [i_5] [i_8]))) : ((min(24576, -732353364)))))) ? ((37980 ? -636019767904382529 : -2073393071094565459)) : ((((arr_5 [i_7]) ? ((var_18 ? 17457 : 164294104)) : (arr_9 [i_5] [i_7] [i_8 - 1] [i_7])))));
                    var_31 = (~((((!var_3) && 17318604197726575990))));
                }
            }
        }
    }
    var_32 = var_8;
    var_33 -= ((2234932293 ? (12158 + 158) : -1187545135));
    var_34 = ((~((var_14 ? var_11 : 18446744073709551606))));
    #pragma endscop
}
