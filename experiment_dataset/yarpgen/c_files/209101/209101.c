/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (-(!7239781016684085571));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_11 -= (min((((arr_0 [i_0 + 1] [i_0 - 2]) ? var_5 : (((-(arr_2 [i_0])))))), (arr_5 [i_0 + 1] [i_0] [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] [i_0] [i_2] = (arr_11 [i_0 + 1] [i_1] [i_0 - 1] [i_1] [i_4]);
                                arr_15 [6] [i_1] [i_2] [i_1] [6] = ((-(arr_1 [i_0 - 1])));
                            }
                        }
                    }
                    var_12 = var_1;
                    var_13 = (((((var_7 ? -2928955501777626613 : 18446744073709551611))) || (((~(min((arr_8 [i_0] [i_0] [i_1] [i_0] [i_2] [i_2]), 347844251)))))));
                }
            }
        }
    }
    var_14 = 1095077732;
    var_15 -= var_4;
    #pragma endscop
}
