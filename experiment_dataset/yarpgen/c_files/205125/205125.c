/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_15 += (~((-(arr_4 [i_1 - 3] [i_1 - 3]))));
                arr_5 [i_0 - 2] [i_0 - 2] |= (~-53229);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_2] = (min((((((-(arr_8 [i_1] [5] [i_1] [i_1])))) ? (((min((arr_10 [i_0 - 1] [i_1] [i_2] [i_4]), (arr_2 [i_0]))))) : (arr_7 [i_2] [i_2] [i_2 + 1] [i_3]))), ((max(53229, -var_12)))));
                                var_16 = ((+((((-32767 - 1) ? -1 : 0)))));
                            }
                        }
                    }
                }
                var_17 = (max(1, 0));
            }
        }
    }
    var_18 -= (max(((~((29542 ? 12306 : 1269863270919507064)))), var_6));
    #pragma endscop
}
