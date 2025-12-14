/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (var_15 / -var_8)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_21 = 18327638177101052413;
        var_22 = -9401;
        var_23 -= ((var_4 ? (arr_1 [i_0]) : var_10));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_24 = (min(var_24, 217));
            var_25 = (51403 | 247);

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_26 |= (arr_1 [i_0]);
                var_27 = (arr_1 [i_0]);
                arr_6 [i_1] = ((9223372036854775807 ? var_5 : -110));
            }
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {

                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    arr_14 [i_3] [i_3] [i_3] [9] = -9401;
                    var_28 = ((~(arr_8 [i_0] [i_4 - 1])));
                    var_29 = ((1606026889917268483 ? 7 : 4294967289));
                    var_30 = (((~var_5) ? (arr_13 [i_4] [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4] [i_4]) : 42));
                }
                arr_15 [i_1] [i_0] = (!var_15);
                var_31 = (max(var_31, var_4));
                arr_16 [i_3] [1] [i_3] = var_0;

                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {

                    for (int i_6 = 4; i_6 < 12;i_6 += 1)
                    {
                        var_32 = (arr_0 [i_3] [i_1]);
                        var_33 = ((arr_13 [i_6 + 1] [i_6] [i_6 - 3] [i_6 - 3] [i_6 - 4] [1]) ? 109 : 4);
                        var_34 |= (arr_21 [i_6 - 3] [i_5 - 1]);
                    }
                    var_35 |= 12940;
                    var_36 += (((arr_11 [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_1]) - var_1));
                    var_37 = ((arr_5 [i_5 - 2] [i_5 - 1] [i_5 - 1]) ? var_11 : 14141);
                }
            }
            arr_22 [i_0] = 109;
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_38 = (arr_23 [i_0] [i_7]);
            var_39 = (~65535);
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
    {
        var_40 |= (arr_2 [i_8]);
        var_41 = (max(var_41, (((15443 ? (arr_21 [i_8] [i_8]) : (~var_17))))));
        var_42 |= (((!(arr_26 [i_8]))) ? var_5 : 65535);
    }
    var_43 &= var_0;
    #pragma endscop
}
