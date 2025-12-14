/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_12 = ((var_10 ? (arr_2 [i_1 - 1] [i_1 - 1]) : ((((max(3246323612495519923, 47))) ? (-632033368 && -3246323612495519900) : -3246323612495519923))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_13 = ((-3246323612495519939 ? (((arr_8 [i_0] [i_0] [i_3] [i_1 + 2]) ? var_9 : (arr_8 [7] [i_1] [i_3] [i_1 + 2]))) : ((((min(1438260018, 1)))))));
                            var_14 = (max(var_14, -64));
                        }
                    }
                }
                var_15 = (((arr_4 [i_1]) ? 462475443 : var_0));
            }
        }
    }
    var_16 = (max((1746207597 % 8380416), ((((1174950790 ? -1532020837 : 177))))));
    #pragma endscop
}
