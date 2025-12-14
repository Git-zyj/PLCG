/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    var_21 = ((var_6 & ((((var_15 < 3385272220144816201) >= 1)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_22 = (((arr_0 [i_0]) ? ((-411079843750547157 ? (arr_1 [i_0]) : var_15)) : (((var_6 >> (3385272220144816201 - 3385272220144816172))))));
        var_23 = ((-16662 - ((1 ? 135 : var_8))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_24 = (((((~(arr_4 [i_1])))) ? ((((1 >= var_9) % -399738047))) : ((((((arr_3 [i_1] [i_1]) >> (var_3 - 236)))) ^ (min((arr_5 [i_1]), (arr_4 [i_1])))))));
        arr_6 [i_1] [i_1] = (min((!-3385272220144816201), (min((var_7 >= var_19), -1173246231))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_2] [i_3] = 11466081944238373102;
                    arr_12 [9] [i_2] [i_2] = var_7;
                    arr_13 [i_2 - 3] = var_4;
                    arr_14 [i_1] [i_1] [i_3] = (min(-16662, 2125640323));
                }
            }
        }
    }
    #pragma endscop
}
