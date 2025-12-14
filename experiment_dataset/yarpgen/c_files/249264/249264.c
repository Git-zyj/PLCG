/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 = (max((max((arr_2 [i_0] [13]), (arr_0 [i_0] [i_0]))), (arr_2 [i_0] [i_0])));
        var_15 = (max((min(((min((arr_2 [i_0] [i_0]), (arr_2 [5] [17])))), (arr_0 [12] [12]))), (min((min(144112989052600320, -882623331)), (arr_1 [11])))));
        var_16 = (arr_1 [16]);

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_17 *= (min((max((arr_3 [i_1] [12] [i_1]), (arr_5 [i_0]))), (arr_5 [i_0])));
            var_18 ^= (arr_4 [i_0]);
            var_19 = (arr_5 [i_1]);
        }
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_20 = (min(var_20, (arr_1 [i_2])));
        var_21 = (arr_7 [i_2]);
        var_22 -= (arr_4 [i_2]);
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_12 [i_3] = (max((arr_1 [i_3]), (max((min((arr_0 [i_3] [i_3]), (arr_10 [i_3] [11]))), ((max(-882623331, 2130631745)))))));
        arr_13 [10] &= (arr_10 [i_3] [i_3]);
    }
    var_23 *= var_0;
    #pragma endscop
}
