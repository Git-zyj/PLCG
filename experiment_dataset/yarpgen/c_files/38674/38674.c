/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((max((min(var_6, var_10)), (min(1656079454, var_11)))), (min(-3516937461914234233, 0))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            arr_14 [i_4] [i_3] [i_2] [i_1] [i_4] = -26256;
                            var_13 = 26256;
                            var_14 = -32760;
                        }
                        var_15 -= 16;
                    }
                    var_16 = (max(((max(((min(var_6, var_2))), (min(1857587449, 4294967286))))), (max((max(35184372088831, 6592005154071370261)), ((max(var_1, 12409)))))));
                }
            }
        }
    }
    #pragma endscop
}
