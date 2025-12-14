/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_12 = (arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, ((((~-103) ? 1369842225 : ((max(-11758, 3))))))));
                                var_14 = (min(var_14, (((((min((arr_4 [i_4] [i_4 - 1] [i_4]), -103))) + (~var_9))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
