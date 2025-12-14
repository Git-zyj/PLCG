/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-19330 - var_14);
    var_18 -= ((-(((!var_14) << ((((max(0, 207))) - 199))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = (max(var_19, ((((((((arr_2 [i_0]) ? var_0 : var_13)) - (!var_7))) % (~65535))))));
        var_20 += (((((max(15650454282320528368, (arr_1 [i_0]))) ? (arr_2 [i_0]) : ((-19965 ? var_2 : 15))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_21 = (((arr_3 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1])));
            arr_7 [5] = (((((var_8 ? 0 : 0))) ? 15 : 106));

            for (int i_3 = 4; i_3 < 19;i_3 += 1)
            {
                arr_10 [8] [8] &= (((arr_3 [i_3 - 3]) ? 15650454282320528368 : (arr_9 [i_1] [i_3 - 4] [i_3 + 1])));
                var_22 = ((!(((var_12 ? 66 : var_12)))));
                arr_11 [i_1] [i_3] = 240;
                var_23 = (((((arr_4 [i_1]) ? 65535 : (arr_6 [i_1] [i_2] [i_2])))) / ((var_12 << (((arr_3 [i_3]) + 83700473576834034)))));
            }
            var_24 = (~var_1);

            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                arr_14 [i_4] [i_4] [19] = ((-65535 ? ((var_7 ? var_12 : 240)) : 15));
                arr_15 [20] [8] = 590516835;
                arr_16 [i_1] [i_2] [8] [i_4] = 17462;
            }
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_25 = (127 ? 3 : 13728219312184318769);
                var_26 = -var_0;
                var_27 += -2012;
            }
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
        {
            arr_22 [i_6] [i_1] &= ((((((arr_21 [i_1]) ? (arr_21 [i_1]) : var_4))) ? (arr_21 [i_6]) : ((((arr_21 [i_1]) < var_16)))));
            var_28 = (min(((((((27936 ? 5227338019375210589 : (arr_12 [i_1] [12] [i_1])))) ? (arr_6 [i_1] [i_6] [i_6]) : ((((!(arr_20 [i_1] [i_1] [i_1])))))))), ((66 ? 32319 : (min(4925194892184651598, -2825))))));
        }
        var_29 = (((((18446744073709551615 ? (((arr_8 [i_1] [i_1] [i_1]) ? 1998565305236530139 : 1)) : (max(233, 5782236705895415824))))) ? ((((30683 ? (arr_17 [i_1] [i_1] [i_1] [i_1]) : var_4)))) : var_14));
    }
    #pragma endscop
}
