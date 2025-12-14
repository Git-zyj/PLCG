/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    var_21 = (49078 / 238);
    var_22 -= ((4469610028920891450 ? 3314137045 : 4294967295));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_23 += (((arr_0 [i_0] [18]) ? (((arr_0 [14] [10]) / var_6)) : (~62784)));
                var_24 = (i_0 % 2 == 0) ? ((((arr_0 [i_0] [i_0]) >> (((~37) + 64))))) : ((((((arr_0 [i_0] [i_0]) + 9223372036854775807)) >> (((~37) + 64)))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_25 -= (((arr_2 [11] [11] [i_0]) - (((0 - var_8) ? (arr_6 [i_2] [i_1] [i_0]) : (arr_0 [i_0] [0])))));
                    var_26 |= ((!(!1891653058)));
                    var_27 &= ((!(((-(arr_5 [i_1] [8] [i_2]))))));
                    var_28 = (3102344408 / (18446744073709551615 + 244));
                    var_29 = ((!((((arr_3 [i_1]) ? 34 : (arr_3 [i_0]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                var_30 = 7681009324700429840;
                var_31 = 3027320344;
                var_32 = (arr_7 [i_3]);
                var_33 = (-(max((!12674893697663284436), 3245953303908780508)));
            }
        }
    }
    #pragma endscop
}
