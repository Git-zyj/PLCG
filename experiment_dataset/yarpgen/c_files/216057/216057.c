/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_10 = (((min(((min(65, -22191))), (max(-65, 5070642094315698219)))) < ((((((max(-77, var_7)))) | var_1)))));
                    arr_7 [i_0] [i_1 - 2] [i_0] = -22181;
                }
            }
        }
    }
    var_11 = (~var_1);
    var_12 = (max(((min(18446744073709551615, 206))), 0));
    var_13 = (max(((4 ? (~var_2) : 0)), var_7));
    #pragma endscop
}
