/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    var_15 = 2147483647;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (~var_0);
                arr_7 [i_1] [i_1] &= (3400506946057710007 * var_3);

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_16 = (((~((min(1, 255))))));
                    arr_11 [i_0] [i_1] [i_1] = (((var_4 ? 24 : (min(-9064652688146213180, 4720323988785843181)))));
                    var_17 *= (min(-var_12, (((((min(15046237127651841609, var_4))) || 245)))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    arr_14 [i_1] [i_1] [i_0 - 2] [i_1] |= var_7;
                    var_18 = (!var_5);
                    arr_15 [i_0] = (var_10 % 2305841909702066176);
                }
            }
        }
    }
    var_19 *= var_12;
    var_20 &= 36748;
    #pragma endscop
}
