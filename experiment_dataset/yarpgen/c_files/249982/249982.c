/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((max(6065129936561115029, 2))) ? (((2 ? 7606 : var_2))) : (max(-2405315380429092144, (~0)))));
        arr_4 [i_0] = ((((max(var_0, (arr_1 [i_0] [i_0])))) + (((((var_4 ? 58 : (arr_2 [i_0])))) ? 2080374784 : 134428144522415816))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_7 [i_0] = -var_9;
            arr_8 [i_0] [i_0] [i_1] = (((max((arr_5 [i_1] [i_1] [i_0]), 18446744073709551615))) ^ -2);
            arr_9 [i_0] [i_0] [i_0] = (!10830129579689460678);
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_13 *= (47889 & 6946);
        var_14 = ((7605 >> (((arr_11 [i_2]) - 8948639927222225970))));
        var_15 = var_8;
        arr_12 [i_2] [1] = ((-(arr_0 [i_2])));
    }
    var_16 = (min(var_12, ((((max(193, var_8)))))));
    var_17 |= ((!((((24 >> (var_0 - 1153836922)))))));
    var_18 = ((~(((((var_0 ? var_11 : var_3))) ? (min(var_9, var_1)) : var_2))));
    var_19 = (min(var_19, ((min(var_9, ((min(184, var_9))))))));
    #pragma endscop
}
