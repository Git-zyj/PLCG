/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~(((max(var_9, var_1))))));
    var_12 = ((((max((max(65535, var_4)), var_9))) ? ((-((max(var_0, 48657))))) : var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, (((62 - (((max((arr_1 [i_0]), var_4)))))))));
                    var_14 = min((min((arr_6 [i_2 + 1] [i_2 - 1] [i_2 + 1]), (arr_6 [i_2 + 2] [i_2 - 1] [i_2 - 3]))), 6);
                    var_15 = (max(var_15, (((~(((arr_6 [i_0] [i_1] [i_0]) ? 4606 : var_8)))))));
                    var_16 |= (~var_1);
                }
            }
        }
    }
    var_17 = var_9;
    #pragma endscop
}
