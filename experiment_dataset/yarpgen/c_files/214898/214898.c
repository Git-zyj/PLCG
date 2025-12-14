/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((var_17 ? 4294967295 : ((((max(var_14, var_6))) ? ((var_1 ? var_9 : var_15)) : var_14))));
    var_21 = (((var_16 > 51410) < ((((!(~var_0)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_22 = ((4294967292 ? 4294967295 : 1));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_3] = ((((((arr_9 [i_0] [i_1] [i_3]) ? (arr_0 [i_0] [i_0]) : 65533))) || 16098));
                        var_23 = (236 & 1002250213);
                        var_24 = ((!(((var_0 ? 1 : (arr_4 [i_0]))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        var_25 += (((((arr_9 [i_0] [i_4] [i_2]) != 1)) ? (!var_17) : 127));
                        arr_15 [i_0] [i_0] [16] [i_0] [3] = 1;
                    }
                    var_26 = (max((((((var_14 ? 16595015685817476110 : (arr_8 [i_0]))) != (max((arr_2 [i_1]), var_10))))), ((((var_15 >= (arr_13 [i_0] [i_1] [i_0] [3]))) ? var_12 : (max((arr_6 [15] [i_1] [i_2]), 12))))));
                }
            }
        }
    }
    var_27 = (min(var_27, (!var_5)));
    #pragma endscop
}
