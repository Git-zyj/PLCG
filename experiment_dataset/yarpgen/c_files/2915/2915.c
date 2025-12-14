/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((0 <= ((var_0 ? var_17 : 0)))))));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] [i_0 + 1] = (((-(var_7 - var_18))));
        arr_5 [i_0] = 2528361875;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_20 = arr_7 [i_1] [i_1];
        arr_8 [i_1] [i_1] = (arr_6 [4]);
        arr_9 [i_1] [i_1] = -65030;
        var_21 = (max(var_21, (((+((var_8 ? (arr_6 [i_1]) : 23831)))))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        var_22 = (max(var_22, (arr_11 [i_2])));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_23 *= 3989727312;
            var_24 = (max(var_24, 11));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_25 &= (((!17371) | 0));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            arr_24 [i_4] [i_4] [i_4] = 1766605421;
                            arr_25 [i_5] &= var_3;
                        }
                    }
                }
            }
        }
        var_26 += (~var_4);
        var_27 = (min(var_27, 20));
        var_28 = (((((1 >> (var_11 - 61924)))) ? ((2666799999 ? 1194580796 : 1)) : ((1622870296 ? 4294967295 : -1))));
    }
    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {
        arr_28 [i_8] = arr_26 [i_8];
        var_29 = ((+((((arr_27 [i_8]) || var_17)))));
        var_30 = ((+(((arr_27 [i_8 + 1]) ? (arr_27 [i_8 + 1]) : var_12))));
        arr_29 [i_8] |= (1664156845 >> (var_13 - 41576));
    }
    var_31 = (min(var_31, var_13));
    #pragma endscop
}
