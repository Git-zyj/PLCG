/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((1355290636 ? 0 : 4294967295));
        arr_4 [i_0] = (!var_9);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_13 ^= 9;
        var_14 = (min(var_14, (((4009897559 ? ((-((4294967278 ? 234 : var_8)))) : var_6)))));
        var_15 = (max(var_9, ((((var_3 > var_3) ? (arr_6 [i_1]) : (max(268435455, 4294967289)))))));
        var_16 ^= (~var_4);
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            {
                var_17 ^= ((var_7 ? (((((281474976710655 ? 1 : var_3))) ? (7 == var_4) : -var_3)) : (((!(-7030 <= var_3))))));
                var_18 = (min((((234 > 1) >> ((((var_0 ? (arr_9 [i_2] [i_2] [i_2]) : 33849)) - 23931)))), var_6));
                var_19 = ((((!((((arr_8 [i_2]) ? 1056964608 : var_0))))) ? ((~(max(var_1, var_3)))) : (((-var_1 ? (33831 / 4) : -var_2)))));
            }
        }
    }
    #pragma endscop
}
