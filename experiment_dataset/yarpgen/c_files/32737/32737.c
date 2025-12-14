/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] = 240;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_20 = (((((min((arr_11 [i_0] [i_2] [i_1] [i_2 - 2] [i_3] [i_3]), (arr_3 [i_0] [i_0]))) + 9223372036854775807)) << (((var_6 == ((94 ? var_14 : -28171)))))));
                            var_21 = (min(((max(-19, 26))), var_0));
                            var_22 = (max(var_22, (((max(32750, (arr_9 [0] [i_3] [i_3])))))));
                        }
                    }
                }
            }
        }
    }
    var_23 = (max(var_3, ((~(~0)))));
    #pragma endscop
}
