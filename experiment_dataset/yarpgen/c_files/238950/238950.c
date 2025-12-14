/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = (min(var_17, ((var_0 ^ (arr_0 [i_0])))));

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            var_19 = (arr_0 [4]);
            arr_7 [i_1 + 2] [i_0] [i_0] = (arr_4 [i_0] [i_1 - 1]);
            arr_8 [10] [4] [4] &= 4323455642275676160;
            arr_9 [i_0] = (i_0 % 2 == zero) ? ((((((arr_0 [i_1 + 3]) ? (arr_6 [8] [i_0] [i_0 + 1]) : (arr_6 [i_0] [i_0] [i_0 + 2]))) << ((((((max(var_17, -73))) ? (arr_5 [i_0]) : ((~(arr_2 [i_0]))))) - 49))))) : ((((((arr_0 [i_1 + 3]) ? (arr_6 [8] [i_0] [i_0 + 1]) : (arr_6 [i_0] [i_0] [i_0 + 2]))) << ((((((((max(var_17, -73))) ? (arr_5 [i_0]) : ((~(arr_2 [i_0]))))) - 49)) - 2)))));
            var_20 *= ((-((min((arr_5 [0]), (arr_5 [6]))))));
        }
    }
    var_21 = var_16;
    #pragma endscop
}
