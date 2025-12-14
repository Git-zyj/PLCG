/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-5670 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        var_14 = arr_1 [i_0] [i_0];
        var_15 = var_6;
        var_16 = (max(var_16, var_4));

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_17 += ((((!(arr_1 [i_0] [i_1])))));
            var_18 |= (((2833548516 ? var_5 : (arr_1 [i_0] [5]))) | (!9));
        }
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_7 [0] = ((5681 ? 7852758193295489870 : 17));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_10 [i_2] [i_3] = (~58);
            var_19 -= (min((min((arr_9 [i_2]), 10945)), var_4));
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_20 = (min((((((min((arr_8 [i_2] [i_2] [i_2]), 57))) ? (((((arr_11 [i_4] [i_2] [i_2]) >= -7852758193295489872)))) : (arr_8 [6] [i_4] [10])))), (((arr_12 [i_2] [i_2] [4]) ? (min(12967808652903940423, (arr_12 [4] [4] [i_4]))) : (((-(arr_9 [i_2]))))))));
            arr_13 [13] [11] = min(-7852758193295489853, 14);
        }
        arr_14 [i_2] = ((((min((-7852758193295489871 - 184), (arr_6 [i_2])))) ? ((min(-57, 2926370900))) : (min(-637462802, -3993164297519125605))));
    }
    var_21 -= var_10;
    #pragma endscop
}
