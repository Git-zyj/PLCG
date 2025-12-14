/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (!var_18)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 += ((((((arr_1 [i_2]) ? (((arr_5 [i_0] [i_0] [i_2]) ? var_17 : (arr_4 [i_0] [i_0]))) : (~var_0)))) ? (((arr_1 [i_1 + 1]) & (arr_3 [i_1 - 1]))) : ((var_14 ? (((var_2 ? var_0 : var_0))) : var_8))));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            var_21 = (((arr_2 [i_1 - 1]) & var_0));
                            var_22 = (!var_17);
                            var_23 = (min(var_23, var_12));
                            var_24 = (max(var_24, ((53195 ? 12341 : 12341))));
                        }
                        var_25 = (arr_9 [i_2] [i_1 + 1] [i_2]);
                        var_26 = ((arr_8 [i_1 - 1] [i_1 - 1] [i_1 + 1]) ? (((arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1]) & (arr_8 [i_1 + 1] [i_1 + 1] [i_1 - 1]))) : (arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1]));

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_27 = ((1728050134 ? 13615639277976274133 : 9375));
                            var_28 = var_8;
                        }
                        var_29 = (((((((arr_13 [i_0] [i_0] [i_2] [i_0] [i_3]) ? (arr_2 [i_2]) : var_8))) ? (max(var_8, var_2)) : (var_7 ^ var_13))));
                    }
                    var_30 += ((!(((max(var_5, (arr_5 [i_0] [i_0] [i_0])))))));
                }
            }
        }
    }
    var_31 ^= (max((((var_8 ? ((var_8 ? var_9 : var_7)) : (!var_12)))), var_10));
    var_32 += ((~(((~var_10) & (var_18 & var_0)))));
    #pragma endscop
}
