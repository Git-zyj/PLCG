/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_5;
    var_19 = 126;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = 638329263;
        var_21 = 137;
        arr_2 [i_0] [i_0] = var_16;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_7 [i_1] = var_10;
            var_22 = -var_11;
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            var_23 *= ((((4816469376112548503 ? 26147 : -1)) > -419253064));
            arr_11 [i_0] [i_2] = (((13630274697597003101 % -1571270379886960407) / 2618));
            arr_12 [i_2] [i_2] = 4095;
            var_24 = ((139 ? 129 : 4012202872));
        }
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        var_25 = ((~((((((35 ? 1943607980378663762 : 219))) && (13630274697597003113 >> var_3))))));
        var_26 ^= (max((~var_1), 210));
        arr_15 [i_3] = (((~-1682535742) >= (((var_9 | var_17) & (((4294967295 ? 1333891171 : 255)))))));

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_27 ^= 12856;
            var_28 = var_2;
        }
        for (int i_5 = 4; i_5 < 21;i_5 += 1)
        {
            var_29 ^= (((((var_2 ? var_7 : -6225582219741415865))) ? (var_14 / var_16) : (var_0 | var_16)));
            var_30 = 16;
            var_31 = ((((((~var_15) || (-1 + var_0)))) == (var_15 + 210)));
        }
    }
    #pragma endscop
}
