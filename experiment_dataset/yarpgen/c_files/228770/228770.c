/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((var_0 / var_3) ? (var_6 / var_12) : (((1 ? 4055303165 : 4026531840)))))) ? var_14 : ((((((15 ? 2897657198 : 249))) ? 15015 : 1)))));
    var_16 = max((~1), (268435439 >= -var_9));
    var_17 = (min(var_17, var_6));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = (((((((var_5 ? (arr_0 [11]) : var_1))) && (var_0 || var_3)))) < 1);
        arr_3 [i_0] = (~1935667611263166749);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_19 = (min(var_19, (((-776400660 ? 0 : 1023)))));
                arr_10 [i_1] = min(3, 15);
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 17;i_4 += 1)
                    {
                        {
                            arr_17 [i_1] [i_1] = ((max((max(var_8, 2756668634)), (((3 ? (arr_1 [i_3]) : 0))))));
                            var_20 = (max(((((10625054771750371615 ? 1549 : 21395)) / ((var_0 ? var_13 : -8)))), ((((arr_8 [i_3 - 1]) < var_0)))));
                            var_21 = (min(var_21, ((min(var_7, ((39840 ? 222 : -4611686018427387904)))))));
                            var_22 = (min(var_22, (((!(15 * 5))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
