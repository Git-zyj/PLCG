/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-((-((2413773246 ? 1881194056 : var_4))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = ((min(1830906587, (1 % 1051389201609477228))));
        arr_3 [i_0] = var_8;

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_12 += (arr_4 [18] [i_1]);
            arr_6 [1] [i_0] = (((((21 % (arr_1 [i_0])))) ? var_4 : (min((arr_0 [i_0]), (min(1881194058, 0))))));
            var_13 = (max(177, (min((min(1, 103557093)), (arr_2 [i_1] [i_1])))));
            arr_7 [20] [i_1] = min((((arr_0 [i_0]) ? var_8 : ((2991375361 ? -116 : 1830906611)))), (((!(1 & -29858)))));
        }
    }
    #pragma endscop
}
