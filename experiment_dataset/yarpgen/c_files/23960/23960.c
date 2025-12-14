/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(18498, (min(var_5, var_15))));

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_17 = (min(var_17, (((-6367362635301488029 * ((max(-6367362635301488029, 11224585042228287979))))))));
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] = 3;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_18 = (max(var_18, ((((((((max((-9223372036854775807 - 1), (arr_0 [i_3])))) ? (65527 == 16) : -6367362635301488012))) ? (max((62718 == 32), var_6)) : (((((((max(0, var_14)))) <= ((18 << (((arr_7 [i_0]) - 15176)))))))))))));
                        arr_14 [i_3] [i_2] [i_0] [i_0] = ((!(~0)));
                        arr_15 [i_3] = 17;
                        var_19 = (min(var_19, (((~(((!(6367362635301488014 ^ var_9)))))))));
                    }
                }
            }
        }
    }
    var_20 = (~9223372036854775807);
    #pragma endscop
}
