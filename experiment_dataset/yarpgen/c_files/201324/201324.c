/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 = (((((var_5 ? var_7 : 9))) - 8968450014296677394));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (((((((((var_7 != (arr_3 [i_0] [i_0]))))) * 935242450))) || ((!((min(8968450014296677413, var_13)))))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_17 ^= (max((arr_1 [i_1]), (max(26, (arr_1 [i_1])))));
            arr_6 [i_0] [i_0] [i_1] = (((((-125795042099485020 < var_6) == ((max(var_13, (arr_5 [i_0])))))) ? var_2 : (((((arr_1 [i_0]) || 7502992092328754549))))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_9 [16] |= ((433995445 << ((((max(-91, 86))) - 164))));
            arr_10 [14] [i_2] |= (arr_2 [i_2]);
        }
    }
    #pragma endscop
}
