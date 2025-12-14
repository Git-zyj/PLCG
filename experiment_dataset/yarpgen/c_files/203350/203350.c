/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_4);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((-((188 ? 48 : -19))));

        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                arr_7 [i_1] = (!252);
                arr_8 [i_0] [i_0] [i_0] [i_0] = (arr_6 [i_1 - 2] [i_1 - 1]);
            }
            for (int i_3 = 3; i_3 < 12;i_3 += 1)
            {
                arr_12 [8] [8] = (((817783166 ? var_2 : var_7)));
                arr_13 [i_0] [i_0] [5] = (((arr_3 [i_1 + 3] [i_1 + 2]) == 245));
                arr_14 [i_3] [i_1 - 2] [i_0] = ((56574 ? var_4 : (arr_9 [i_1] [i_1] [i_1 + 2] [i_1])));
            }
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                arr_19 [i_0] [i_1] [i_0] = ((var_4 ? -122 : ((var_8 ? var_4 : 253952))));
                arr_20 [i_0] = (((((7046344149658580103 ? -4651301853436825419 : (arr_9 [i_0] [i_1] [i_1] [i_4])))) ? var_0 : 56554));
            }
            arr_21 [i_0] = var_8;
        }
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            arr_26 [13] [i_0] [i_5] = ((-(arr_3 [i_5 - 1] [i_5])));
            arr_27 [i_5] = (~var_2);
            arr_28 [i_5] [1] [i_5] = (((((arr_6 [i_0] [i_5 - 1]) ? 1475225795 : (arr_24 [i_5])))) || (((var_4 ? 205 : (arr_23 [6])))));
        }
    }

    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        arr_31 [i_6] = ((1358767107 ? var_7 : (((5572 ? 2026325804 : 3548272914)))));
        arr_32 [i_6] = var_5;
    }
    var_12 = ((((min(var_1, var_10))) ? (((max(86, 56531)))) : ((5817429897100546245 ? -var_0 : (var_0 - 1040384)))));
    var_13 = ((2147483647 ? (((((((var_9 ? var_5 : 59964))) || (((var_1 ? var_8 : 51))))))) : ((44009 / (min(3643757697763070255, 2060408002))))));
    #pragma endscop
}
