/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [11] [i_1] [i_2] [i_1] [i_4] [0] [i_2] = ((~(max((~6919), 0))));
                                var_19 *= var_0;
                            }
                        }
                    }
                    var_20 = (132120576 ? (((~0) % var_0)) : (((min((!-19), (!var_2))))));
                    arr_14 [i_0] [i_0] &= ((~(max(8103630055662912769, var_8))));
                }
            }
        }
    }
    var_21 = (min(var_21, (((((max(var_9, (var_16 & var_2)))) ? var_0 : (1309523807014442517 | 5))))));
    #pragma endscop
}
