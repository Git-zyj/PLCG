/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = ((0 ? 6144 : 20235));
        arr_2 [i_0] = (!0);
        arr_3 [i_0] = (((arr_1 [i_0]) && -var_6));
        var_18 = ((~(~20228)));
    }
    for (int i_1 = 4; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_19 |= ((max(((54816 ? var_10 : 13760), (var_11 ^ 51776)))));

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_9 [i_1] = -20228;
            arr_10 [i_1] = arr_6 [i_1 - 4];
            arr_11 [i_1] [i_1] = (8074 >= 65535);
        }
        arr_12 [i_1] = (!45307);
        var_20 = var_1;
        arr_13 [i_1] [i_1] = 31424;
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 19;i_3 += 1) /* same iter space */
    {
        var_21 |= ((var_14 ? (((!(arr_6 [i_3])))) : -var_9));
        var_22 = (~1329);
        arr_18 [i_3] = arr_7 [i_3] [i_3 - 3];
    }
    for (int i_4 = 4; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_23 = 20228;
        arr_23 [i_4 + 1] [i_4 + 2] = ((((~(arr_19 [i_4 - 3]))) < (36419 != var_4)));
        var_24 += (~var_3);
    }
    var_25 = (((((45301 >= var_14) ? ((min(57565, 31285))) : var_16)) | (((65530 / 9835) ? 65531 : (0 ^ 45301)))));
    var_26 = -51263;
    var_27 = (max(((768 ? var_9 : (4002 > 51263))), (max((65525 - 16), var_0))));
    #pragma endscop
}
