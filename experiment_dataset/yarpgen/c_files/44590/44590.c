/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = arr_7 [i_0 + 1];
                                var_13 = var_4;
                            }
                        }
                    }
                    var_14 = (min((((arr_12 [i_1]) * 0)), ((min(-2147483626, 0)))));
                }
            }
        }
    }
    #pragma endscop
}
