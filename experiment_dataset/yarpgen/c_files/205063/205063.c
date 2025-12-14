/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 += (arr_7 [i_0] [i_1]);
                    var_18 = min(((((max((arr_8 [i_0] [i_1] [i_2] [0]), (arr_9 [i_2]))) <= (((~(arr_7 [i_0] [i_1]))))))), (var_6 | -7852225730178871711));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 = (7137789360837907744 / -11466);
                                var_20 = min((arr_8 [i_0] [i_0] [i_2] [i_3]), (((min(11766, -7852225730178871701)))));
                                arr_15 [i_4] [i_4] [i_4] |= (min(((~(13622209860878383315 / 8878))), ((((arr_0 [i_0]) << (arr_0 [i_0]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_21 ^= var_12;
                                var_22 = (((arr_8 [i_1] [i_1] [i_1] [i_1]) ? (((((95 + 9386) && (!var_11))))) : 7852225730178871710));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (min(((~((7852225730178871710 ? 127 : 7852225730178871694)))), var_10));
    #pragma endscop
}
