/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((min(5910217374702509413, ((min(var_4, var_15))))), var_4));

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_17 *= (-127 - 1);
        var_18 ^= ((var_11 >> ((((var_11 > (arr_2 [10])))))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_19 ^= (((((((max((arr_4 [i_0]), (arr_3 [i_0] [i_0]))) > var_12)))) >= var_13));
            var_20 = (min(var_20, ((((min((arr_3 [i_0 + 1] [i_0 - 2]), (arr_3 [i_0 + 1] [i_0 - 2]))) + (~127))))));
            var_21 &= 3924162360752836261;
            var_22 = (max((min(127, 2148657329)), var_5));
        }
        var_23 = (min(var_23, (~1)));
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                var_24 = (min(var_24, ((max(9007199254740991, 12536526699007042202)))));
                var_25 = (arr_9 [i_2] [i_3]);
            }
        }
    }
    #pragma endscop
}
