/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] = (((((14543983489511372321 ? 65535 : var_2))) ? (max(8281, (max(4274028284949693271, (arr_3 [i_0]))))) : var_1));
                            arr_14 [i_3] [i_1] [i_2] [i_3] [i_3] [i_1] = (~57269);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_13 = (min(var_13, (max((!-4274028284949693284), ((~(var_2 / var_12)))))));
                            var_14 = (max((((-4274028284949693282 < (((-127 - 1) * 0))))), ((37 ? 241 : 28448))));
                        }
                    }
                }
            }
        }
    }
    var_15 = var_1;
    var_16 = (var_6 ? var_9 : var_6);
    #pragma endscop
}
