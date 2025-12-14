/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((29841 ? (var_11 & var_11) : (((((29841 == var_8) && (!0)))))));
    var_16 |= 9223372036854775807;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (29841 != var_4);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_18 = (((((!(35694 & -932355352)))) % ((((max(29825, 35694))) ? (((arr_4 [i_1]) ? var_8 : var_10)) : (max(0, -1242338431))))));
                            arr_9 [i_0] [i_0] = (max((max((35695 - var_2), var_9)), ((((((max(-17, -4))) + 2147483647)) >> (((max(var_11, (arr_8 [i_0 - 1] [i_1] [i_2] [i_3]))) - 4174027147))))));
                            var_19 = ((((arr_4 [i_0 - 3]) - 29841)) == (((((338332378 >> var_5) <= 32767)))));
                        }
                    }
                }
                var_20 = ((((((var_9 ? (arr_0 [i_0 + 2] [i_0 + 1]) : 185)) + 2147483647)) >> (((var_7 & var_6) - 16666))));
                arr_10 [i_0] = ((((max(0, 11147745612044201646)) - (max(16166777488044679460, var_11)))));

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_21 = ((((35694 << (91 - 88))) & (((0 ^ 15566) ? -2 : (1 & 51244)))));
                    var_22 = -7607;
                    arr_14 [i_0] [8] [i_4] [i_4] |= (((0 <= 1) ? (1 >> 1) : (((!((max(0, 51244))))))));
                    arr_15 [6] [i_1] [i_0] [i_0] = -82;
                }
            }
        }
    }
    #pragma endscop
}
