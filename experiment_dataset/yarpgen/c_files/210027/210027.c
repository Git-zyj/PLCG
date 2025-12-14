/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1284493844;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = var_11;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 = (((arr_0 [i_0] [i_0]) > (((~1) ? 1 : ((67108863 ? -406664637 : 406664625))))));
                    arr_7 [i_1] [i_1] [i_1] = (arr_4 [i_0] [i_1] [i_0]);
                    var_22 |= 10580;
                    var_23 = 1278899691;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    arr_13 [12] [i_3] [i_4 - 1] |= ((7 ? (arr_9 [i_0] [i_3] [i_4]) : ((((((-2147483647 - 1) ^ var_14))) ? (((-4 + 2147483647) << (var_4 - 2967255432266639949))) : (406664626 == 2147483647)))));
                    var_24 = ((((((406664643 ? 53750 : 20951))) ? (62 ^ 2147483644) : var_15)));
                    arr_14 [i_0] [i_0] [i_4] = 77218587;
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        var_25 = (((((!30169) ? (min(127, var_11)) : ((min(-2575085393665838957, -54))))) >> (-19953 + 19959)));
        var_26 = var_12;
        var_27 = var_8;
    }
    var_28 = ((-29 ? -2147483626 : ((((max(var_18, 5151))) | -13185))));
    #pragma endscop
}
