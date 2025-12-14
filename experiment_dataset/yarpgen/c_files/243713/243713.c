/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 0;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 = (((((arr_0 [1]) == var_7)) ? (((arr_2 [i_0] [i_0]) & var_5)) : 4));
        var_15 += (var_4 ? (arr_2 [i_0] [i_0]) : (((arr_3 [i_0]) ? -3 : -17773303)));

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            var_16 = (min(var_16, (~var_8)));
            var_17 = var_6;
            var_18 = var_2;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_19 |= (min(-0, (17999 / 241)));
                            var_20 = ((-(17445 * 99)));
                            var_21 = var_3;
                            var_22 = (((!1) || ((min(((var_1 ? 18446744073709551599 : var_5)), (1 || 2857958596250139360))))));
                            var_23 = (((((~((max(var_1, var_2)))))) ? (((var_9 << var_12) % (arr_3 [i_0]))) : (min(-1045936652, ((min(var_1, -28246)))))));
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_17 [i_0] [i_5] = (arr_3 [i_0]);
                            var_24 = (((((((1 >> (17592177655808 - 17592177655758))) & (~18446744073709551599)))) ? (((var_2 << (((arr_16 [19] [6] [i_2] [i_3] [i_1 + 1]) - 12851))))) : (((~4261412864) ^ -22086))));
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_25 = var_8;
                            var_26 = ((((241 || (arr_5 [i_6] [i_1]))) ? (-23306 == 1) : ((var_12 ? (~-23) : (!var_11)))));
                            var_27 = (~var_1);
                        }
                        var_28 = ((((arr_15 [i_2] [i_1] [1]) + (3 + 15))));
                        var_29 = (max(var_29, (27615 & 1829103200)));
                        var_30 = (((~0) ^ 1045936651));
                    }
                }
            }
        }
    }
    #pragma endscop
}
