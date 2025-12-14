/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((-4333247920686757585 >= ((((~1) - var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 = (max(var_18, 4333247920686757584));
                arr_6 [i_0] [i_1] = (((((~1) + 2147483647)) << (4333247920686757595 * 0)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_19 = (~88);
                            var_20 = (-4333247920686757585 <= 8110918766630171792);
                            var_21 = ((1 < (!-4333247920686757565)));
                            var_22 = ((!1971908814) <= (-637648479540869263 - -5710741911527700432));
                        }
                    }
                }
                var_23 = (~(49597 > 20427));
            }
        }
    }
    #pragma endscop
}
