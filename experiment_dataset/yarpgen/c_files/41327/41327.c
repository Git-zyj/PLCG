/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_2] [i_2] [i_1] [i_0] [i_0] = (arr_3 [i_0] [i_0 + 1]);
                        var_17 &= (min((!2047), 2147483647));
                    }
                }
            }
        }
        arr_11 [i_0 + 2] [i_0] = ((1 != (var_12 / -20666)));
        var_18 = (arr_7 [i_0]);

        /* vectorizable */
        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                var_19 = (!var_5);
                arr_17 [i_0] [i_4] [i_0] [i_0] = (!0);
            }
            var_20 = var_12;
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_21 = (min(64, (((arr_9 [i_0 - 1] [i_0 + 2] [i_0 + 2]) ? 1 : 1))));
            arr_20 [i_0 + 2] [i_0] = (max(((max((arr_7 [i_0]), 1))), (arr_3 [i_0] [i_0 - 1])));
            arr_21 [i_0] [i_0 + 2] = ((-((((max(-9223372036854775796, var_6))) ? (-78 / var_0) : (!1)))));
            var_22 += 0;
            var_23 = ((-((((var_2 || 4398046511103) || (arr_12 [i_0]))))));
        }
        arr_22 [4] |= ((((((max((-9223372036854775807 - 1), 127))) ? (((min((arr_14 [8] [i_0] [i_0 - 2] [i_0 - 2]), var_10)))) : (min(18446744073709551615, 36560))))) || ((!(-97 && 107))));
    }
    var_24 += var_0;
    var_25 = var_3;
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_33 [i_7] [i_8] [i_9] = (arr_9 [i_7] [i_8] [i_9]);
                    var_26 = (min(var_26, (((-20742 | (-2147483647 - 1))))));
                    arr_34 [i_7] [i_7] = (!((max(3295340234, 0))));
                }
            }
        }
    }
    #pragma endscop
}
