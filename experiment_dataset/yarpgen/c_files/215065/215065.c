/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (!var_6)));
    var_18 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_1] = var_16;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 = ((-(!1225107779)));
                                arr_15 [i_1] [i_4] [i_4] = -187;
                            }
                        }
                    }
                }
                var_20 = (min(var_13, (((((-127 - 1) && var_10)) ? ((((arr_2 [i_1]) && 1))) : (((var_5 && (arr_0 [i_0]))))))));
                var_21 = (min(var_21, ((((6460553491601675756 & 33895) ? (~74) : ((~(arr_13 [i_0 - 2] [i_0] [i_0 + 2]))))))));
            }
        }
    }
    #pragma endscop
}
