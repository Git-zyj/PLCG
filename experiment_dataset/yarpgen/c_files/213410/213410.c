/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    var_19 = ((55415 ? var_16 : var_14));
    var_20 = (((96 % 96) % 81));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            var_21 = (min((((var_12 ? var_8 : var_8))), (max((((arr_4 [i_0] [i_0] [i_0]) ? var_1 : 90)), (!11724714970905072268)))));
            arr_6 [i_0] [i_0] [i_0] = (((arr_3 [i_0 - 1] [i_0] [i_0 - 1]) ? -584659013 : ((11724714970905072268 ? 52 : -337373289))));
            arr_7 [i_0] [i_1 + 3] = (~90);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [16] [i_0] [i_0] [i_0] = ((((!(arr_10 [i_3 + 1] [i_3] [i_3 - 1] [i_3 + 1]))) ? (max(134217724, (((var_14 ? var_17 : 96))))) : (((((((4294950912 ? 337373289 : 162))) != 9084408892607747706))))));
                        var_22 = ((((((((arr_9 [i_0] [i_1 - 1]) * (arr_5 [i_0])))) ? 16383153794009140928 : ((((arr_12 [i_0] [i_0] [i_0 + 2] [i_0]) ? var_13 : -337373289)))))) ? ((11724714970905072247 / (arr_10 [i_1] [i_1 + 3] [i_1 + 3] [i_1 + 3]))) : (((-1784867789 ? (!397726386232714715) : -17481))));

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            var_23 = -949742750;
                            var_24 = (((var_13 ? var_1 : 98)));
                        }
                        var_25 = (((min((var_14 + 2147483647), -337373289)) > (~var_8)));
                    }
                }
            }
        }
        arr_16 [i_0] = var_16;
        arr_17 [i_0] = var_1;
        var_26 = (((arr_3 [5] [i_0] [i_0 + 1]) ? (((!(!24)))) : (((!(arr_3 [i_0 + 1] [i_0] [i_0 + 2]))))));
    }
    #pragma endscop
}
