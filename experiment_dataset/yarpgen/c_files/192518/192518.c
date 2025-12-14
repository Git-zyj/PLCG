/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    var_20 = (((24 && 1) && var_13));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] &= 65535;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_21 = (min(var_21, 18446744073709551605));
            arr_7 [i_1] [1] [17] = ((((var_10 << (18446744073709551569 - 18446744073709551555))) == var_7));
            arr_8 [0] [0] = (~-56);
            arr_9 [i_1] [i_1] [19] = (!67108863);
        }
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = ((!(((67108864 | (((1 >> (-67108863 + 67108871)))))))));
        var_22 = (var_15 & 26218);
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_23 = (((~var_14) != (~var_16)));
                        var_24 = (max(var_24, (var_16 % -7)));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        arr_24 [i_2] = (1 & 13063140388410395121);
                        var_25 = (min(var_25, var_10));
                    }
                    var_26 = (((~((-67108864 ? var_7 : var_16)))));
                }
            }
        }
    }
    var_27 = ((var_17 ? var_18 : (var_8 < var_12)));
    #pragma endscop
}
