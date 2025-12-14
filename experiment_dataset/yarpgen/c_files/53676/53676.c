/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((-1 ? ((((-1956790418 + var_19) <= ((0 ? var_15 : var_13))))) : 2143289344)))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_1] = (((((((arr_3 [i_1]) ? var_19 : 11810277397313361836))) ? (arr_0 [i_0 - 1]) : var_15)));
                    var_21 = (((((((((arr_0 [i_0]) + var_5))) ? (arr_0 [i_0 + 1]) : (arr_7 [8] [2] [i_2 - 1] [i_1])))) ? ((((!(((-1 ? (arr_1 [i_1]) : -103))))))) : ((var_14 | ((-64 ? var_11 : 3048595259))))));
                    arr_9 [i_1] [i_2 - 1] = ((((((((0 << (-81096509878087016 + 81096509878087070)))) ? -2230 : var_6))) ? (((arr_1 [i_0 - 1]) ? ((((arr_0 [i_1]) ? -118 : 0))) : (arr_3 [i_1]))) : (((~(min((arr_7 [i_0] [15] [13] [i_1]), var_4)))))));
                    var_22 = (((((var_6 ? var_17 : (arr_4 [i_0 - 1] [i_1])))) || 0));
                }
            }
        }

        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_12 [i_0] [i_0] [i_0] = -2143289345;
            arr_13 [18] = -6384616876292831996;
            arr_14 [i_0] = -2220;
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_19 [i_0] [i_0] = (!var_18);

            for (int i_5 = 3; i_5 < 18;i_5 += 1)
            {
                arr_24 [i_5] [i_4] = ((~(((((var_9 ? var_15 : var_4))) ? ((-1 ? var_12 : 2143289344)) : ((var_5 ? 2317 : (arr_23 [i_5 - 3] [i_5 - 1] [i_5])))))));
                arr_25 [i_5] = (~var_7);
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
    {
        var_23 = (((((104 ? var_11 : -2685475762720487970))) <= (-4 | var_5)));
        var_24 -= ((~((var_5 ? 0 : 103))));
    }
    #pragma endscop
}
