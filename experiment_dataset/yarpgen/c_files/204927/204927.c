/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((((max(150096237, 4144871058))) > (max((-9223372036854775807 - 1), 3510451308332283209))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = 5682641131895661848;
                            var_21 = 1566089505;
                        }
                    }
                }
                var_22 = 3956836478;
            }
        }
    }
    #pragma endscop
}
