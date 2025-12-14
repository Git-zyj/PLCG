/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = (((min(21779, var_12))));
                                var_15 = var_3;
                            }
                        }
                    }
                    arr_17 [i_0] [i_2] [i_2] |= (min(((min(242, ((var_8 ? -8004 : 1))))), var_8));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = (min(((max(127, 0))), 547654499231033268));
                                arr_24 [i_0] [i_0] [i_0] [i_0] [16] [i_0] [i_0] = ((((var_6 == 141) >> (((119 ^ 1) - 99)))));
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = ((min(7974718699970668886, var_8)));
                            }
                        }
                    }
                    var_16 = var_7;
                }
            }
        }
    }
    var_17 = var_4;
    #pragma endscop
}
