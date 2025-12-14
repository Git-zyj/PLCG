/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 ^= 104;
                                var_12 = (min(var_3, ((var_3 ? 18151 : 3299333313))));
                            }
                        }
                    }
                }
                arr_13 [i_1] [i_1] = arr_1 [i_0] [i_1];
                arr_14 [i_1 - 1] [i_1] [i_0] = (((max((~2047), (1417739567 < 197))) != 249));
                arr_15 [i_0] [i_1] = (2536890367 - 7);
            }
        }
    }
    var_13 = var_9;
    var_14 = ((((!1) / (!var_9))));
    var_15 = (max(var_6, ((var_6 ? var_8 : 1))));
    #pragma endscop
}
