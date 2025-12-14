/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((var_8 ? var_13 : (max(var_13, var_14))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 -= (arr_2 [i_0]);
        var_17 -= (arr_0 [i_0] [i_0]);
    }
    var_18 = (min(var_18, ((var_6 ? (min(var_12, (min(var_8, var_7)))) : var_1))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            {
                var_19 += (!var_2);
                var_20 = (max(var_20, var_4));
                var_21 -= arr_4 [i_2];

                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    var_22 += ((-(((!((max(var_2, (arr_1 [i_3])))))))));
                    var_23 ^= (max(((min(20, (arr_3 [i_1])))), ((var_5 ? var_1 : var_2))));
                }
            }
        }
    }
    var_24 ^= 0;
    #pragma endscop
}
