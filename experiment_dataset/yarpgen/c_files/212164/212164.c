/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (0 + 56);

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_12 = (((((((arr_0 [i_0]) <= (arr_1 [i_0]))) ? (arr_1 [i_0]) : (((arr_1 [i_0]) % (arr_1 [i_0 + 3]))))) == ((((arr_1 [2]) && (arr_1 [i_0]))))));
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) ? (arr_0 [1]) : (((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))) & ((((arr_1 [19]) | (arr_1 [i_0]))))))));
    }
    #pragma endscop
}
