/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_0 ? (max(2962118835, -57911)) : ((((min((-2147483647 - 1), 4611123068473966592)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = (min(((((71 <= 0) << (2807052892 - 2807052877)))), (-4 - 62)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_3] [i_3] = ((((21863 ? 38064 : 0)) - ((13106435079211254840 - ((max(2147483647, 1322976237)))))));
                            arr_13 [i_3] [i_1] [i_3] = (67 - 35167192219648);
                        }
                    }
                }
            }
        }
    }
    var_17 = (max(((~((min(65520, 19222))))), 1650128066));
    var_18 = var_8;
    #pragma endscop
}
