/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = var_12;
        var_16 = (min(var_16, 18446744073709551606));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 19;i_1 += 1)
    {
        var_17 = (min(var_17, ((((arr_4 [i_1]) % (arr_4 [i_1]))))));
        var_18 = (arr_4 [i_1]);
        var_19 = (((36127 ? var_9 : 10)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_20 -= (~29407);
            var_21 = (arr_9 [5]);
            var_22 = (18446744073709551615 - 15431819143802671806);
            arr_11 [i_2] [i_2] = (((arr_4 [i_3]) * var_14));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            arr_14 [i_2] [i_4] [i_4] = (arr_5 [i_2]);
            var_23 = ((-(arr_8 [i_2] [i_2] [i_2])));
            arr_15 [i_2] [i_4] = var_14;
        }
        var_24 = var_14;
        var_25 = -var_7;
        arr_16 [5] = (((~911244684) - (arr_12 [i_2] [i_2] [i_2])));
        var_26 = var_8;
    }

    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_20 [i_5] = ((((~var_7) << var_3)) & (arr_6 [7] [0]));
        var_27 = (min((((!(arr_17 [i_5] [i_5])))), (((arr_13 [i_5] [i_5]) ? ((((!(arr_18 [i_5]))))) : ((var_7 ? (arr_13 [i_5] [i_5]) : (arr_7 [i_5])))))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_28 = (((min((arr_21 [i_6]), 62)) / (((arr_22 [i_6]) / ((max(254, var_11)))))));
        var_29 = (((((((arr_21 [i_6]) | (arr_21 [i_6]))) + 2147483647)) << ((((((((arr_5 [i_6]) ? 3014924929906879827 : var_8))) ? ((10 << (449289140 - 449289114))) : ((((arr_5 [i_6]) + var_2))))) - 671088640))));
        var_30 = (min(var_30, (((!(!-1))))));
        arr_23 [i_6] = (((((min(255, 3014924929906879809))) ? var_8 : (~var_11))));
    }
    var_31 = var_0;
    var_32 = (min(var_32, (-22905 * 18446744073709551615)));
    #pragma endscop
}
