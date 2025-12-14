/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, -84));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    {
                        var_17 = (max(var_17, (((!(25750 && 16727051331529474127))))));

                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            var_18 = ((~((268435328 ? 127 : 32764))));
                            arr_14 [i_4] [i_4] = ((!(arr_12 [i_1 - 4] [i_1 - 4] [i_2] [i_4] [i_0] [i_2])));
                            var_19 = (min(var_19, -6020));
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_18 [i_3] [i_0] = 142337360;
                            var_20 = ((-121 + (arr_9 [i_5] [i_3 - 1] [i_1 + 2] [i_1 + 1] [i_0])));
                            var_21 ^= (!13);
                        }
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            arr_21 [i_0] [i_1] [i_0] [i_1] = (!1719692742180077488);
                            arr_22 [i_0] = ((127 ? 127 : -32763));
                            arr_23 [i_1] [i_2] [i_6] = (1251301133 <= -127);
                        }

                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            var_22 = (-32764 == -49);
                            var_23 -= (~-69);
                            var_24 = ((~(arr_16 [i_1 + 3] [i_3] [i_7])));
                            var_25 = var_6;
                            var_26 -= (((arr_10 [i_0] [i_0] [i_3] [i_0] [i_7]) ? 107 : -98));
                        }
                        var_27 -= -1283;
                        arr_27 [i_0] = ((!(arr_9 [i_1] [i_1] [i_1 - 4] [i_2] [i_1])));
                    }
                }
            }
        }
        arr_28 [i_0] = (((arr_6 [i_0]) ? (arr_6 [i_0]) : (((var_5 >= (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_28 = -6020;
        var_29 = -2078440577;
        var_30 = (min(var_30, ((max((max((4294967295 > 6005), -1303)), var_0)))));
    }
    for (int i_9 = 3; i_9 < 19;i_9 += 1)
    {
        var_31 = (min((8 <= 2147483647), ((-114 && (arr_12 [i_9] [i_9] [i_9 - 1] [i_9] [i_9] [i_9])))));
        var_32 = (((1985917539 << 1) > (max(53, ((-(arr_15 [i_9] [i_9] [i_9])))))));

        for (int i_10 = 1; i_10 < 18;i_10 += 1)
        {
            var_33 *= ((-85 ? -60 : (min(1484507529, 1))));
            var_34 = ((-47 ? (((var_14 && 3117112125) << ((((-114 ? -31031 : var_0)) + 31053)))) : (((((-(arr_9 [i_9] [i_10] [i_10] [i_9] [i_10])))) ? 2147483647 : 1131))));
        }
        var_35 = arr_4 [i_9] [i_9] [i_9];
    }
    for (int i_11 = 2; i_11 < 15;i_11 += 1)
    {
        var_36 = (min(var_36, ((max((arr_34 [i_11]), (min((max((arr_31 [i_11]), -4346413362092438996)), 32)))))));
        var_37 = 7407252612636872193;
    }
    #pragma endscop
}
