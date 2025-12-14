/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!((!(((18446744073709551599 ? var_10 : var_2)))))));
    var_19 = (!-940689132);

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0 + 1] = (((((max(3577563942, var_15))) ? (arr_1 [i_0 - 1] [i_0 - 1]) : (arr_1 [i_0 + 2] [i_0 + 1]))));
        var_20 = (min(var_20, (((0 && (arr_0 [i_0 - 1]))))));
        var_21 = ((-16 ? (max(((((arr_0 [17]) & 3665517040))), ((114 ? 3665517037 : -9223372036854775790)))) : (((-104 ? (!629450254) : 1219134803)))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_22 = var_15;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    arr_9 [i_1] = (max((arr_8 [12]), (((var_13 || (~-795814943941010198))))));
                    var_23 -= (arr_5 [i_2] [1]);
                }
            }
        }
        arr_10 [i_1] = (((~var_6) % (max(3665517041, (arr_4 [i_1 + 1])))));
    }
    #pragma endscop
}
