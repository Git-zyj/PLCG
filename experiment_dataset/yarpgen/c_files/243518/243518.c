/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((~var_3), ((((min(var_3, var_4)) < ((var_10 ? var_9 : var_9)))))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_15 = (max(var_15, (((((((((arr_2 [16] [16]) - (arr_2 [i_0] [i_0]))) > var_7))) * -7967)))));
        var_16 = min((arr_2 [i_0] [i_0]), (((((var_10 + (arr_2 [i_0] [i_0])))) + 894031474)));
        var_17 -= var_10;
        var_18 ^= (((((((-(arr_1 [i_0 - 1])))) ? -11297 : (((arr_0 [i_0]) + var_5)))) & var_2));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_19 = (max(var_19, (((((((var_0 + (arr_1 [i_1]))) ? var_0 : ((var_13 - (arr_5 [i_1 + 2]))))))))));
        var_20 = (min((max(((max(var_2, (arr_0 [13])))), (~var_13))), var_8));
        arr_6 [i_1] |= ((((min(-12313, ((52102 ? 31225 : var_3))))) != var_0));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    {
                        var_21 = ((((arr_10 [i_4 + 1] [i_1 + 2] [i_3]) ? (var_10 && var_7) : (var_12 | var_9))));
                        var_22 = (max(var_22, var_0));
                        arr_15 [i_4 + 1] [i_1] [i_4] [i_4] [i_1] [i_1] = ((7967 ? 4294967282 : 149298293));
                    }
                }
            }
        }
        arr_16 [i_1 + 1] = (((((~var_5) ? (((var_3 ? var_3 : (arr_13 [i_1 + 2] [6] [i_1] [i_1])))) : ((var_4 ? var_11 : (arr_2 [i_1] [i_1]))))) & (((~(arr_10 [14] [i_1 + 2] [i_1]))))));
    }
    for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_23 = (4145668990 & -4145669009);
        var_24 = ((((arr_12 [i_5 + 1] [i_5] [i_5]) + (arr_1 [i_5 - 1]))) + (((arr_10 [19] [i_5 - 1] [i_5 - 1]) - (arr_12 [i_5 + 1] [i_5] [i_5 + 1]))));
    }
    #pragma endscop
}
