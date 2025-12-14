/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((min(var_10, (min(1, var_11))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 ^= (min(((((max(55, 157))) ? var_6 : (min(var_5, -1)))), (-127 - 1)));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_7 [i_1] = (arr_5 [i_0]);
            var_21 ^= (!118);
            var_22 = (max(var_22, (max((((max(13, var_12)))), (arr_6 [i_0])))));
            arr_8 [i_0] [i_1] = ((max(21150, var_1)));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_23 = (min((((arr_10 [i_0] [i_2]) ^ (((arr_1 [1] [i_2]) ? var_13 : 941356063)))), (((var_4 + (arr_9 [5]))))));
            arr_11 [i_0] [i_2] [i_2] = (((arr_2 [i_2]) ? (min(3407309814, var_6)) : (1850742093 & -0)));
            var_24 = ((min(var_18, (65533 ^ 1))));
            arr_12 [i_0] [i_2] = (arr_9 [1]);
        }
    }
    var_25 = var_17;
    #pragma endscop
}
