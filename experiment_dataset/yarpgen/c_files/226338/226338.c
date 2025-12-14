/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 = ((!(!var_6)));
        arr_2 [2] = (((((-1268036138 ^ 18118533355490430537) ? -128 : ((var_16 ? var_4 : (arr_0 [i_0])))))) ? 255 : (((~-659883581) ? ((~(arr_1 [5]))) : ((~(arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = (((((((88 ? var_10 : var_14))) ? (((arr_0 [i_2]) >> (var_18 - 84))) : ((var_3 ? var_16 : 1267))))) ? 255 : (arr_4 [i_2] [i_1]));
                    var_22 = ((var_0 * (((((var_10 ? 111 : 9985322242329154051))) ? 0 : -128))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_23 = (((arr_8 [i_2] [i_1]) ? ((((-37 >= 7528896510244299564) ? -145 : 2125878248))) : ((2147483647 ? 18118533355490430541 : (((arr_5 [i_1]) & var_2))))));
                        var_24 = (((((~(arr_1 [i_0])))) ? (328210718219121075 / 26017) : ((var_5 ? 11 : ((13 ? var_3 : var_10))))));
                        var_25 |= ((((~((158 ? 1185103263 : 34810)))) >= -543714467));
                        var_26 = -var_15;
                    }
                }
            }
        }
        var_27 = (((((2032 ? var_1 : (arr_1 [i_0])))) ? (((var_1 ? var_18 : var_7))) : ((1 ? (arr_1 [i_0]) : var_11))));
    }
    var_28 = var_9;
    #pragma endscop
}
