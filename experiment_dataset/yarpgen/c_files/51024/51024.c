/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_4 [6] = arr_2 [i_0];
        var_11 *= ((-(arr_1 [i_0])));

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            var_12 |= (arr_7 [i_0]);
            var_13 = ((((~(127 / -125))) != (arr_1 [i_1])));
            arr_8 [5] [i_1] |= (arr_5 [i_0]);
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_14 = (((((min((arr_1 [i_2]), (arr_7 [i_0]))) % (arr_10 [i_2]))) - (((((~(arr_7 [i_2]))))))));
            var_15 = (arr_0 [1] [i_0]);
        }
    }
    var_16 = ((!((max((~var_10), (var_9 / 29))))));
    #pragma endscop
}
