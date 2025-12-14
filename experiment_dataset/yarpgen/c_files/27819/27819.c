/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (534858540 < var_9);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            var_11 = 15211304309467289761;
            var_12 = (((arr_2 [i_0] [i_1 + 1] [i_1]) ? (arr_2 [i_1 + 2] [i_1 - 2] [i_1]) : (arr_2 [i_0] [i_1 - 1] [1])));
            var_13 = ((~(((1704349070 && (arr_1 [i_0]))))));
        }
        arr_5 [i_0] [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : 1704349065));
        var_14 = (max(var_14, (((arr_4 [i_0] [i_0]) / (arr_1 [i_0])))));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_15 -= arr_2 [i_0] [i_2] [i_2];
            var_16 ^= (~-1704349065);
        }
    }
    #pragma endscop
}
