/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= min(((var_5 ? (max(var_5, var_13)) : (var_12 > -485305875))), var_9);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, ((((((-((min(244, var_10)))))) / ((((-9223372036854775807 - 1) ? var_10 : (arr_6 [i_1])))))))));
                    var_16 = (-14 | var_5);
                    var_17 += var_13;
                }
            }
        }
        var_18 = ((-(((!(arr_0 [i_0]))))));
        arr_9 [i_0] = -17283676347389971141;
        var_19 = 1;
    }
    var_20 = var_5;
    #pragma endscop
}
