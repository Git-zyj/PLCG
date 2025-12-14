/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((var_11 << (((((1 ? var_7 : var_4)) == 128))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = arr_1 [i_0];
        var_15 += 853142611;
        arr_2 [i_0] = (arr_1 [i_0]);
    }
    var_16 = ((((min(var_11, var_6))) ? var_0 : 64));

    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_17 = 1;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_18 = 102;
                        arr_13 [i_4] [i_4] [i_2] [i_1] [i_1] = (arr_10 [2] [i_4] [17] [1]);
                        var_19 = (arr_6 [10]);
                        var_20 = (min(var_20, 32));
                    }
                }
            }
        }
        var_21 ^= (((arr_8 [8]) ? ((var_1 & (arr_4 [0] [i_1 + 1]))) : ((((arr_10 [i_1 + 2] [i_1 - 1] [i_1] [0]) / 109)))));
    }
    for (int i_5 = 3; i_5 < 15;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = (max(4621784466943350974, ((((arr_14 [i_5 - 3]) - var_4)))));
        var_22 = (max(var_22, ((((arr_8 [14]) > 7068358275953577619)))));
        var_23 = (((!81) ? (((-65 ? (arr_8 [6]) : (arr_6 [i_5])))) : var_1));
        var_24 ^= var_10;
    }
    #pragma endscop
}
