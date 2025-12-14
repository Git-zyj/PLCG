/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_14 ? 18399981348639810776 : var_3)))) ? ((var_3 ? var_16 : 3374153115067295421)) : (((var_11 ? var_14 : ((56310 ? 6930509940428105326 : var_3)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_20 = 239;
                        var_21 = (min(var_21, (((((min(-100, 104))) ? (min((arr_8 [i_2 - 2] [i_2 + 1] [i_2 - 2]), var_15)) : ((((arr_8 [i_2 + 2] [i_2 - 2] [i_2 + 2]) ? var_13 : var_3))))))));
                    }
                    var_22 = (max(829830392, (((var_11 >= 1270) ? var_7 : (arr_11 [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1])))));
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_15 [i_4] = ((((max(var_5, (!-829830393)))) ? (arr_13 [i_4]) : 122));
        var_23 = var_12;
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 20;i_8 += 1)
                {
                    {
                        var_24 = var_4;
                        var_25 = (min(var_25, (((7145418439800122696 ? -var_6 : (10645 || 18446744073709551615))))));
                    }
                }
            }
        }
        arr_25 [i_5] = (min(((((max(224, var_1))) ? ((((-21697 + 2147483647) << (((var_14 + 647348405) - 18))))) : (3406272050176992493 & var_3))), 1));
        var_26 = ((((max(829830373, ((min(-829830392, var_4)))))) ? (251 > 1815017637) : 1));
    }
    var_27 = ((((min((max(1815017637, 32634)), (min(-1686257465, var_11))))) ? var_6 : 2950635693));
    #pragma endscop
}
