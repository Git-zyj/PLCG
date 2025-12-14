/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= arr_0 [i_0];
        arr_3 [i_0] [i_0] = (~-1);
        arr_4 [i_0] = (max(((((arr_1 [i_0]) <= (arr_1 [i_0])))), (arr_0 [i_0])));
        var_12 ^= (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_8 [i_1] = 46;
        arr_9 [i_1] [i_1] = 1;
        arr_10 [i_1] [i_1] = (arr_6 [i_1]);
        arr_11 [i_1] = (((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_6 [i_1])));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_16 [i_2] = (min((((-2147483647 - 1) ? (-2147483647 - 1) : -1147755818)), var_4));

        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            arr_20 [i_3] = ((((arr_15 [i_3] [i_3 + 2]) - var_10)));
            var_13 = (max((((24730 < 54) ? ((2147483647 >> (-18751 + 18757))) : (arr_19 [i_3 + 3] [i_3 - 1] [i_3 - 2]))), -11));
            arr_21 [i_3] = (i_3 % 2 == 0) ? ((min(((510 << (((min(-36, (arr_17 [i_3]))) + 1905092214)))), (arr_17 [i_3])))) : ((min(((510 << (((((min(-36, (arr_17 [i_3]))) + 1905092214)) - 94966007)))), (arr_17 [i_3]))));
        }
        var_14 = (min(var_14, 54));
    }
    var_15 = ((var_4 ? ((var_11 ? var_0 : -var_6)) : -1));
    var_16 = -1430762090;
    var_17 *= var_2;
    #pragma endscop
}
