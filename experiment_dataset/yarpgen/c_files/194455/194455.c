/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_14;
        var_20 = (min(var_20, (~35175782154240)));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_8 [i_2] = ((!(arr_4 [i_1])));
            arr_9 [i_1] [i_1] [i_1] = arr_7 [i_2] [i_2] [i_1];
            var_21 = (max(var_21, (((-(arr_5 [i_1]))))));
            var_22 = (max((arr_7 [i_2] [i_1] [i_1]), 10009244));
            arr_10 [i_2] [i_1] = (arr_4 [i_1]);
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_23 = -1;
            var_24 = (max(0, -31));
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_25 = (max(var_25, 167));
            var_26 *= 255;
            arr_16 [i_1] [i_4] = (min((arr_12 [i_1] [i_4] [i_1]), (max((arr_5 [i_4]), (arr_12 [i_1] [i_1] [i_1])))));
        }

        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            var_27 = (min(var_27, (((-((-(arr_6 [i_1] [i_5 - 1] [i_5 + 2]))))))));
            arr_21 [i_1] [i_5 + 3] [i_1] &= (arr_18 [11] [i_1]);
        }
    }
    for (int i_6 = 2; i_6 < 16;i_6 += 1)
    {
        arr_25 [i_6] = 246;
        arr_26 [i_6] = (arr_24 [i_6 - 2]);
        var_28 = (max(((-(arr_23 [i_6 - 2]))), (arr_23 [i_6 - 2])));
    }
    for (int i_7 = 4; i_7 < 15;i_7 += 1)
    {
        var_29 = (arr_23 [i_7]);
        var_30 = (max(var_30, (~122)));
        arr_29 [i_7] = var_13;
        arr_30 [i_7] |= (max(var_11, (~3932)));
        arr_31 [i_7 + 2] = (min((arr_28 [8] [i_7 - 4]), (arr_28 [i_7 - 3] [i_7 - 3])));
    }
    var_31 = 1;
    var_32 = (max(var_5, 10052));
    var_33 = (min((~12624), ((min(var_4, 1)))));
    #pragma endscop
}
