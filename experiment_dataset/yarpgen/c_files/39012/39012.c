/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 = (14193263967402179103 * 0);

    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        var_14 = ((((((var_11 || 58572) ? (var_9 ^ var_1) : 21))) != (max(var_3, (~var_5)))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_15 = ((-(22 / -var_4)));

            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                var_16 |= (min((((min(0, 7325185051078628733)) + var_0)), (var_1 / var_2)));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_17 -= (((!var_7) ^ ((max((!255), var_1)))));
                            var_18 = (max(((min(var_11, 19043))), var_4));
                            arr_15 [i_3] [i_0 + 3] [i_0] [i_0] [i_0] [i_0] = (max(var_11, ((249 ? 6 : -16220))));
                            var_19 -= (min(((var_9 ? ((var_7 ? var_5 : 3298909531304012000)) : var_5)), (!var_1)));
                        }
                    }
                }
                arr_16 [i_2 - 1] [i_1] = (((((4160810217 % var_4) ? (min(40739, var_0)) : (arr_12 [i_0] [i_0] [4] [i_2] [i_0] [i_0 + 1] [i_2]))) - 8202413865741573569));
            }
        }
        var_20 = (((((134157078 ^ ((var_4 ? 16219 : var_3))))) && var_9));
    }
    var_21 = (min(var_21, var_7));
    var_22 -= ((-((268435440 ? var_1 : var_0))));
    #pragma endscop
}
