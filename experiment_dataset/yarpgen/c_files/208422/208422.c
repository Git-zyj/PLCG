/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_3;
    var_18 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 = -8520831325065446953;
                                var_20 = (arr_6 [i_4]);
                            }
                        }
                    }
                    var_21 = (((((-(arr_3 [i_0])))) ? (arr_5 [i_0]) : (((~0) ? 1 : 4190208))));
                }
            }
        }
    }
    #pragma endscop
}
