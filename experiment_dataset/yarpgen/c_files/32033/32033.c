/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (((((-108 <= -381951826) | ((min(var_5, var_4))))) * (var_2 >= 3174585886)));
    var_13 ^= var_0;

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = (max(var_14, 17184998779997586345));
            var_15 ^= ((+((-(min((arr_0 [i_0]), (arr_6 [i_0] [i_0])))))));
            var_16 |= (arr_5 [i_0 - 2]);
        }
        arr_7 [i_0 - 4] |= var_7;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        var_17 -= var_7;
        var_18 = (max(var_18, (((!(arr_9 [i_2 - 1]))))));
    }
    var_19 = (max(var_19, var_6));
    var_20 |= (min((15786175188221043775 ^ 1), var_0));
    #pragma endscop
}
