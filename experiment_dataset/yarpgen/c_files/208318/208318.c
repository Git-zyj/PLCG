/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(14, ((~((-15 ? 0 : 13))))));
    var_14 = min((min((0 ^ 144115119356379136), (((15 ? 0 : -8))))), var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_15 = (((((!((max(var_9, -1)))))) ^ 1));
                                arr_11 [i_0] [i_2] [i_2] [i_4 - 1] [i_4] [i_1] = ((((min(-7903, (min(-8723766183014246879, 3749))))) ? 2251799813685247 : 251));
                                var_16 = (arr_7 [i_0] [i_1] [i_4 - 2] [i_3]);
                            }
                        }
                    }
                }
                var_17 = (max(((max((min(var_8, 0)), (!1099511627264)))), 17287006591423762700));
                var_18 = (((((max(17287006591423762697, (arr_1 [i_0])) >= var_1)))));
            }
        }
    }
    #pragma endscop
}
