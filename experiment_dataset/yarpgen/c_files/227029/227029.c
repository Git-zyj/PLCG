/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 = (!var_2);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = ((~14) - (max(((max(14784, 14))), ((var_12 ? (arr_1 [i_0]) : 18446744073709551615)))));
        var_17 = 14793;

        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        {
                            arr_16 [i_4] [i_4 - 2] [i_0] [i_2 - 2] [i_0] [i_1 - 2] [i_0] = ((var_6 || 14346) != var_3);
                            arr_17 [i_0] [i_1] [i_2] [i_3 - 1] [i_0] = (((max((2147483647 >= 31744), (max(-1987852493437243701, (arr_3 [i_0] [i_0])))))) ? 4080 : 0);
                        }
                    }
                }
                arr_18 [i_0] = (arr_0 [i_0] [i_1 - 2]);
                var_18 = (min((min((~-14779), 8955451499421713484)), (arr_7 [i_0] [i_0] [i_0])));
            }
            var_19 = (((-1 && 0) || ((max((arr_12 [i_1 + 2] [i_1 - 2] [i_1 - 2] [i_1 + 1]), -4164612188990194361)))));
            arr_19 [i_0] = (i_0 % 2 == 0) ? ((max((((((max(var_9, var_11)) + 9223372036854775807)) << (((arr_3 [i_0] [i_0]) - 5633)))), ((((3 ? var_11 : 14784)) & 24848))))) : ((max((((((max(var_9, var_11)) + 9223372036854775807)) << (((((arr_3 [i_0] [i_0]) - 5633)) - 21093)))), ((((3 ? var_11 : 14784)) & 24848)))));
            arr_20 [i_0] [i_0] [i_0] = ((-(((5639183597047533738 < var_9) ? (arr_1 [i_0]) : (arr_2 [i_0])))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 12;i_6 += 1)
                {
                    {
                        arr_28 [i_6] [i_0] [i_1 - 1] [i_0] [i_0] = -14799;
                        var_20 = (max(var_6, (min((arr_24 [i_1 + 3] [i_0]), (arr_12 [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1 + 2])))));

                        for (int i_7 = 1; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            arr_33 [i_7] [i_6] [i_0] [i_1] [i_0] = var_7;
                            var_21 = ((-(((14761 * var_12) - ((var_1 ? var_5 : 14841900546442418101))))));
                        }
                        for (int i_8 = 1; i_8 < 12;i_8 += 1) /* same iter space */
                        {
                            arr_36 [i_0] [i_1] [i_0] [i_6] [i_8] = var_5;
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] = ((!((((arr_11 [i_0] [i_1] [i_5] [i_0]) - (arr_27 [i_0] [i_5] [i_1 + 2] [i_0]))))));
                        }
                    }
                }
            }
        }
    }
    var_22 = (!var_3);
    #pragma endscop
}
