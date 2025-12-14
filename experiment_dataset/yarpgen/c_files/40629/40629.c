/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = ((min((arr_1 [i_0]), 4247324343910273945)));
        arr_3 [i_0] [i_0] = ((~((~((80 - (arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 10;i_1 += 1)
    {
        var_15 = ((((20647 >= (arr_6 [i_1]))) ? 26043 : (arr_0 [i_1] [i_1])));
        arr_7 [i_1] [i_1] = ((~(~236)));
    }
    var_16 = ((((-5684987321598284271 <= var_13) ? (((19 >> (226 - 199)))) : (min(var_10, 20746)))));

    for (int i_2 = 1; i_2 < 7;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_17 = 29166;

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_18 = 0;
                var_19 = (min(var_19, ((~(arr_14 [i_2] [i_3] [i_4])))));
            }
        }
        var_20 -= ((117 ? -19486 : 4368543950671251311));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {

        for (int i_6 = 4; i_6 < 18;i_6 += 1)
        {
            arr_19 [i_5] [i_6 - 1] = ((~(((((arr_1 [i_5]) * 0))))));

            /* vectorizable */
            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                var_21 = -3086477966173299000;
                var_22 = (min(var_22, 1));
            }
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                var_23 -= (((arr_1 [i_5]) - -26));
                var_24 = (min(var_24, ((((((max((arr_24 [i_6] [16] [16]), (arr_1 [i_8])))) - 8641343675971146554))))));
                var_25 ^= -31483;
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    arr_31 [i_5] [i_9] [11] [i_5] = (((~561507802) ? (arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] [4]) : ((~(arr_27 [i_9])))));
                    var_26 = ((20746 | (arr_27 [i_5])));
                    var_27 = ((((75 ? 1 : 5169976574279251805)) * 1076419743));
                }

                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    var_28 = (max(var_28, (arr_16 [i_6] [i_6])));
                    arr_34 [i_5] [i_6] [i_6] [i_9] = ((1 ? -107 : 226));
                }
                arr_35 [i_5] = -2033239709;
            }
        }
        var_29 = (~-1528956611);
    }
    var_30 = (min(var_30, (((((var_10 ? ((max(-31, 1))) : (1 && var_6))) ^ var_3)))));
    #pragma endscop
}
