/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = ((-((50331648 ? 18446744073709551615 : 12376))));

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_1] = (min(((58751 < (arr_0 [i_0] [i_1 + 2]))), 4244635640));
            var_13 = (((max((arr_0 [i_1 - 1] [i_1 + 2]), (arr_0 [i_1 - 1] [i_1 + 2])))) < -33172);
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    {
                        var_14 = -12;
                        var_15 = (((((58740 >> (666917005 - 666916980)))) ? ((-712611888 ? 20824 : 0)) : (max(var_5, ((var_0 ? 0 : 18446744073709551615))))));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            var_16 = var_11;
            var_17 = ((7 ? 58751 : 18446744073709551597));
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_16 [i_0] [i_0] = (((!58750510) ? 268435455 : 118));
            var_18 = (arr_1 [i_0]);
            arr_17 [i_0] [i_0] = ((((min(144, 3))) | 212));
        }
        var_19 = (min((((58751 <= (!2475137281)))), ((-(arr_7 [i_0])))));

        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
        {
            var_20 = ((-1 ? (((((2244333967617349165 ? 1221918770 : (-32767 - 1)))) ? 536870912 : (11003389742185519671 | 0))) : (((175 ? 3343887827 : 1819830015)))));
            var_21 = 10694;
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
        {
            var_22 = (((~var_2) | (((((arr_10 [i_0] [i_7]) && ((min(var_1, 0)))))))));
            arr_23 [i_7] = (1 > 1819830011);
            arr_24 [i_0] [i_7] [i_7] = (arr_20 [i_7] [i_0]);
        }
    }
    var_23 = -65531;
    #pragma endscop
}
