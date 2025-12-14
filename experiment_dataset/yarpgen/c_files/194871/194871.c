/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = max(1, 127);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((-((((!(arr_5 [i_0] [i_0] [i_0] [i_0]))) ? (arr_7 [i_3] [i_3] [i_3]) : (min(12961763356923628468, 1))))));
                            var_18 += -1;
                        }
                    }
                }
            }
        }
    }
    var_19 = (max(var_16, ((3968 ? var_9 : var_11))));
    var_20 = 12961763356923628464;
    var_21 -= var_12;
    #pragma endscop
}
