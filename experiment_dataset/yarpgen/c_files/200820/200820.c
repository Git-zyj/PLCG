/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = ((((min(111, 3707753168))) ? (((10183 <= 0) | (min(var_15, var_11)))) : (((var_6 > (var_15 + var_1))))));

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        var_21 = (((((var_11 ? ((max(var_5, var_12))) : var_8))) & (~var_9)));
                        arr_11 [11] [i_1] [i_2] [i_0] = ((((((((var_11 ? var_1 : var_4))) || ((((-22 + 2147483647) >> (111 - 98))))))) * ((((var_12 / var_13) >= ((var_10 ? var_11 : var_5)))))));
                    }
                    var_22 = ((0 ? -1 : 55355));

                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        var_23 = ((((var_16 << (var_7 - 508785280040589293))) << (((var_5 && var_4) - 1))));
                        arr_14 [i_0] [i_1 + 1] [i_1 + 1] [22] [i_0] = ((((((var_8 == var_1) <= ((var_1 ? var_0 : var_12)))))) & (var_17 % var_14));
                        var_24 &= (((var_18 ? var_4 : var_4)));
                        arr_15 [i_4] [6] [i_4] [i_4] &= -var_11;
                        var_25 = (var_11 && var_9);
                    }
                }
            }
        }
        var_26 = ((~var_0) ^ var_3);
        var_27 = (((((var_2 > var_6) == var_16)) ? ((var_0 >> (var_16 - 56))) : (var_0 != var_10)));
        arr_16 [i_0] [i_0] = ((var_3 << (var_16 - 3536449227063995243)));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_19 [i_5] = -var_0;

        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_28 = (var_5 >= var_15);
            var_29 = (((((var_4 ? var_1 : var_14))) ? ((max(var_13, var_17))) : (min(var_7, var_2))));
        }
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            var_30 = (((((((var_13 ? var_2 : var_7)) >> var_18))) && ((((var_12 == var_5) ? (!var_10) : ((var_11 ? var_5 : var_11)))))));
            arr_24 [i_7] [0] = ((var_18 <= (var_6 >= var_8)));
            var_31 = (((var_5 <= var_9) ? (var_0 > var_2) : (var_9 % var_17)));
        }
        var_32 = (55371 <= var_0);
    }
    var_33 ^= ((var_15 ? var_14 : ((var_0 ? (var_19 * var_2) : (var_8 | var_15)))));
    #pragma endscop
}
