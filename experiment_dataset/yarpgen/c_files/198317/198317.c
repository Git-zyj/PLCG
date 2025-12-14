/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~-2374253732307505683);

    /* vectorizable */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        var_19 = (14095296025962802547 ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 - 3]));
        var_20 = ((-8937682188437133035 - ((var_14 ? (arr_0 [i_0 - 4] [i_0 - 2]) : var_3))));
        arr_2 [i_0] = ((-18850 | (((arr_1 [i_0]) ? -1 : (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_5 [7] = ((!((min(var_0, 1996510265)))));
        var_21 = min((((!(arr_1 [i_1])))), 320248332156223008);
        var_22 = var_10;
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_23 = (max(var_23, ((((((-6939710197260181793 ? -18825 : 242))) && ((((arr_1 [i_2]) ? 62 : ((-(arr_6 [i_2] [i_2])))))))))));
        var_24 = (min(var_24, (((((min(6939710197260181798, ((((arr_7 [i_2] [i_2]) & 18838)))))) ? (((var_16 & -504871152001337808) & (~var_2))) : ((224 ? ((max(7573561482362987770, 255))) : (var_16 ^ var_4))))))));
        arr_10 [i_2] [i_2] = (((arr_4 [i_2]) ? (arr_9 [i_2] [0]) : (min((var_7 != var_13), 5361606540527813896))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 2; i_4 < 8;i_4 += 1)
        {
            var_25 = var_7;
            var_26 = (arr_0 [i_4 + 1] [i_4 + 1]);
            var_27 = (min(var_27, (((8759817305504699066 ? 5361606540527813898 : 2493457231)))));
            var_28 -= ((~-32761) ? var_10 : (arr_14 [i_3] [i_4]));
        }
        var_29 = (max(var_29, ((((((arr_6 [i_3] [i_3]) ? (arr_6 [i_3] [i_3]) : (max(var_14, var_10)))) % (arr_9 [i_3] [i_3]))))));
        var_30 = (((((arr_15 [i_3]) || 2169545258667683661)) ? var_13 : (!242)));
    }
    var_31 = 5401;
    #pragma endscop
}
