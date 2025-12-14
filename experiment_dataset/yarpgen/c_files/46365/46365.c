/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0 + 1] = ((-(max(var_4, 0))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_12 = (((var_0 || var_6) || ((max(var_0, (var_10 + var_5))))));
                            var_13 = (min(var_13, (((max(-7542756590910458841, ((min(var_9, var_5)))))))));
                        }
                    }
                }
                arr_10 [i_1] [i_0 - 2] [6] = (min((-127 - 1), (arr_9 [i_1] [i_1] [i_0] [i_1])));
            }
        }
    }
    var_14 = max(((max((max(64100, 21)), var_5))), var_10);
    var_15 = var_10;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    var_16 = 7542756590910458823;
                    var_17 ^= 116;
                    var_18 *= (max((max((-1359040027 ^ 31), 11)), (((arr_11 [i_5] [i_6]) ? var_7 : 255))));
                }
            }
        }
    }
    #pragma endscop
}
