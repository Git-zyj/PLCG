/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((arr_0 [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_0]));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_6 [11] [18] = ((((var_2 << (12733189700842381289 - 12733189700842381270))) - (arr_5 [i_0] [i_0] [i_1])));
            var_19 = (((12733189700842381280 ? 17232383797859947516 : 14396157508179627862)));
            var_20 = -8393215854798263943;
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_9 [i_0] [i_0] = (~14396157508179627882);
            var_21 = 71;
            arr_10 [i_0] [i_2] = (~(((arr_0 [i_0]) ? var_18 : var_2)));
            var_22 = 40;
        }
        arr_11 [i_0] = (!var_6);
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 7;i_3 += 1)
    {
        var_23 ^= (arr_2 [i_3]);
        var_24 = (((arr_0 [i_3]) || 5192240362631590558));
        arr_14 [i_3] [i_3] = var_13;
        var_25 ^= var_3;
    }
    var_26 += (min(((min(80, (67 >= -62)))), var_8));
    var_27 += (~4739593730988685005);
    var_28 = var_15;
    var_29 = var_9;
    #pragma endscop
}
