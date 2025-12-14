/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, (arr_4 [i_1] [i_2])));
                            var_16 = ((((arr_7 [i_0] [i_1] [i_0] [i_1]) ? ((min(1, var_12))) : (arr_0 [i_3]))));
                        }
                    }
                }
                var_17 = ((min((arr_1 [i_0]), ((((arr_1 [i_0]) || 24576))))));
                arr_11 [15] = 4288464823669637685;
            }
        }
    }
    var_18 = ((((112 ? -113 : 0)) != 185));
    #pragma endscop
}
