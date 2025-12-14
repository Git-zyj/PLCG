/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((((((!var_5) ? (var_9 % 60) : (var_7 > var_9)))) ? var_9 : 195));
    var_11 = (max(60, var_4));
    var_12 = ((((min(var_6, (var_5 % var_4)))) | (max((1 != var_0), (min(11343788141394725309, 39))))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_13 &= (~var_5);
            arr_5 [i_0 + 1] [i_0] = 2809625306;
        }
        var_14 = (min(var_14, (((((var_2 ? (arr_4 [i_0 + 2]) : (arr_4 [i_0]))) == (((arr_4 [i_0 - 1]) ? 154 : (arr_4 [i_0 - 1]))))))));
        var_15 *= (!18001737401100241550);
    }
    #pragma endscop
}
