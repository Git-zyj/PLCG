/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_14 = (arr_2 [2]);
            arr_6 [1] [1] = (min(3176757395, ((min((max((arr_4 [i_1]), 54895)), 65535)))));
            var_15 = var_1;
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_10 [18] [i_2] [i_2] = ((~(max(((1257534209 ? 189 : (arr_2 [i_0]))), -19))));
            arr_11 [i_0] |= 32959;
        }
        var_16 = (arr_2 [20]);
        arr_12 [12] = (((arr_9 [i_0] [i_0] [i_0]) ? 1 : (max((~32577), 32976))));
    }
    var_17 ^= ((-132221645 / ((max(32560, 32577)))));
    #pragma endscop
}
