/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((max((var_6 | var_1), 2669791299))) ? ((~(var_7 || 121))) : (((!var_8) ? ((var_4 ? var_14 : var_0)) : 1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_0] = (max(-122, (((((arr_3 [i_0] [i_1] [i_1 + 1]) ? (arr_0 [i_0]) : var_4)) + ((((arr_2 [8] [i_1]) ? (arr_1 [i_1]) : (arr_0 [i_0]))))))));
                arr_8 [i_0] [i_0] [i_0] = ((((max((7702 >= 1457214022), var_8))) ? ((min((arr_0 [i_0]), ((1 ? (arr_4 [i_1]) : -25))))) : (arr_3 [i_1] [i_1] [i_1 - 1])));
                arr_9 [i_0] [i_1 + 2] = -4809584913482253327;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_17 -= 1625175997;
                            var_18 = ((-114 ? 18446744073709551592 : -3));
                        }
                    }
                }
                var_19 = var_2;
            }
        }
    }
    var_20 = var_12;
    var_21 = ((((((var_9 / -393083312275570739) >= var_0))) >= (!var_7)));
    #pragma endscop
}
