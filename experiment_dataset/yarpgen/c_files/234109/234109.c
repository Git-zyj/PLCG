/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_13 = 1938496286;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, (((~(arr_12 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_2 - 2]))))));
                                arr_13 [i_0] [i_2] [i_2] [i_3 - 1] [i_4] |= 2054112531;
                            }
                        }
                    }
                    var_15 = (min(var_15, (((!((max(-3200557127509163290, (arr_12 [i_1] [3] [i_2 - 1] [9] [3])))))))));
                    var_16 = (min(var_16, var_12));
                }
            }
        }
    }
    var_17 = ((((((var_8 ? var_9 : 3330171093))) ? ((min(143, 2054112537))) : var_5)));
    var_18 |= 964796200;
    #pragma endscop
}
