/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_15;
    var_18 |= var_5;
    var_19 |= var_0;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0 + 1] |= ((48503 ? -32748 : (51982 ^ 32752)));
        arr_5 [i_0] = (arr_0 [i_0] [i_0]);
        arr_6 [i_0] [i_0 - 1] = ((~(arr_1 [i_0 + 4])));
        arr_7 [i_0] [i_0] = (~((~(arr_3 [i_0 + 1]))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        arr_11 [i_1] = 32747;
        arr_12 [i_1] [i_1] = ((!((min((arr_8 [i_1]), (arr_8 [i_1]))))));
        arr_13 [i_1] = ((7932 ? -20135 : 255));
        arr_14 [i_1] [i_1] = (((arr_1 [i_1 - 1]) ? ((127 % (((arr_9 [i_1] [i_1]) ? (arr_10 [i_1]) : 4386403292057729130)))) : (arr_2 [i_1] [i_1])));
    }
    #pragma endscop
}
