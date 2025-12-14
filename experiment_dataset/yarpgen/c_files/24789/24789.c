/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (var_0 || var_0);
        arr_3 [i_0 - 2] = var_0;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_12 = (~var_0);
        var_13 = var_2;
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        var_14 = (!1);
                        var_15 = 6175577396271694132;
                    }
                }
            }
        }
        arr_13 [8] |= 4294967295;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_21 [12] [i_6] [i_6] = ((!(((-1655306326 ? var_8 : var_1)))));
            arr_22 [i_6] = ((-var_8 == (~8882651120958161290)));
            var_16 = var_1;
            var_17 = 14577340783760509974;
            var_18 = (((((var_2 ? var_7 : var_1))) ? (((var_6 ? 1 : var_10))) : (var_6 * 1)));
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            var_19 = var_9;
            arr_25 [i_5] [i_7] [i_5] = var_9;
            arr_26 [i_5] [i_5] = (~4294967295);
            arr_27 [i_5] = (~var_11);
        }
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            var_20 = (((var_3 > 9223372036854775807) ? var_3 : ((0 ? var_8 : var_10))));

            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                var_21 = (!var_2);
                var_22 = ((var_10 ? (!14939) : (var_3 <= var_4)));
            }
            arr_33 [i_8] [i_8] [i_5] = ((4736224379848862638 ? var_3 : var_6));
        }
        arr_34 [i_5] |= 943908398;
    }
    var_23 |= var_6;
    var_24 |= ((+(min((!49014), (~var_1)))));
    var_25 = ((~((var_0 ? (((var_7 + 2147483647) << (101 - 101))) : var_0))));
    #pragma endscop
}
