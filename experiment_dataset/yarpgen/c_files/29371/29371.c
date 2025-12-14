/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (((max((!0), var_11)) >= var_9));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_13 = ((!(arr_0 [i_0 - 2] [i_0 + 1])));
        var_14 -= 45598;
    }
    for (int i_1 = 4; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_15 = (((var_7 + (arr_2 [i_1] [i_1 - 1]))));
        var_16 = (((((var_3 ? (arr_3 [i_1 - 3]) : (((arr_0 [i_1 - 3] [i_1]) | 19946))))) ? ((min((arr_1 [4]), 1277786813))) : (((!19934) ? ((var_6 ? (arr_2 [i_1] [i_1]) : var_10)) : (((arr_3 [i_1]) - 45610))))));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_17 = var_7;
            var_18 -= arr_1 [2];
        }
        var_19 = (((~var_6) - 2235636350));
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_20 = ((2235636381 ? (arr_3 [i_3 - 1]) : (arr_6 [i_3 - 2])));
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                {
                    var_21 = (((2289646981 / -655784033) == ((0 ? 655784006 : 2235636350))));
                    var_22 = (!var_10);
                }
            }
        }
        var_23 = ((var_1 - ((((-32767 - 1) == 42373)))));
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_24 = 48;
        var_25 = ((var_9 ? 2813869370 : ((((arr_19 [i_6]) + (min(-8939, -655784007)))))));
        var_26 = 57595;
    }
    var_27 = ((((((~var_11) ? ((48 ? 655784003 : var_5)) : var_0))) ? var_3 : var_6));
    var_28 -= var_0;
    #pragma endscop
}
