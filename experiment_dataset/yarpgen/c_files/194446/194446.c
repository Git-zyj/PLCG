/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, -25938));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = (arr_5 [i_0] [i_0]);

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] = (arr_7 [i_0] [i_0] [22] [i_3]);
                        arr_14 [i_0] [i_0] = (((-2147483647 - 1) ? 26955 : 5907591362899188300));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_19 -= (arr_19 [i_0] [i_0] [i_2] [i_2] [i_5] [i_0]);
                            var_20 = (arr_0 [i_1]);
                        }
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            arr_24 [i_0] [18] [i_1] [i_2] [i_0] [10] = ((min(-56, (arr_8 [i_1] [i_1] [i_0]))));
                            arr_25 [i_0] [i_1] [i_4] [i_1] [i_1] [i_0] = -2514;
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_21 = var_12;
                            arr_29 [i_0] [1] [i_2] [i_4] [0] = (arr_28 [i_0] [i_1] [i_2] [i_0] [i_4] [i_1]);
                            arr_30 [i_0] [i_0] [i_2] [i_2] [i_7] = (((min((arr_27 [i_0] [i_0] [i_2] [16] [16]), (arr_6 [i_0]))) - (arr_6 [i_0])));
                            arr_31 [i_2] [i_2] [i_2] [i_4] [i_0] = ((5465040483631213374 ? ((~(arr_26 [i_4]))) : (min(30720, 562430257))));
                        }
                        arr_32 [17] [i_0] [i_1] [i_1] [8] [i_0] = -5907591362899188322;
                        var_22 = (arr_9 [2]);
                        var_23 -= (((((-(arr_7 [i_0] [i_0] [i_0] [i_0])))) ? (((min((min(1, 38581)), -31431)))) : 0));
                        arr_33 [i_4] [i_0] [i_2] [i_1] [i_0] [i_0] = ((var_9 > (~-4503599627370495)));
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        arr_36 [i_0] [i_1] [i_2] [i_8] &= ((((min((arr_35 [i_0] [i_1] [i_0] [i_0] [i_0]), (arr_35 [22] [i_1] [i_2] [i_1] [i_0])))) ? (((~(arr_9 [i_0])))) : (((max(-1993319532217065726, (arr_28 [i_0] [i_1] [16] [i_1] [i_2] [6])))))));
                        arr_37 [i_0] [i_1] [i_1] [i_0] |= min(var_1, (arr_26 [i_0]));
                        arr_38 [i_0] [i_0] = (arr_23 [i_0] [i_0] [i_1] [i_0] [i_1]);
                        arr_39 [i_0] = (((~15533) ? ((~(-20 / var_7))) : ((((((arr_6 [i_0]) ? -4503599627370499 : var_17))) ? (((38567 - (arr_19 [i_0] [i_1] [i_1] [i_1] [i_8] [i_8])))) : (((arr_20 [i_0] [i_1] [2] [i_2] [7]) ? -9223372036854775802 : 83))))));
                        var_24 &= (min(131, 49268));
                    }
                }
            }
        }
    }
    var_25 = ((-(min((var_13 / var_2), var_16))));
    var_26 = 1180967491;
    #pragma endscop
}
