/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 = ((-(((((!(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) << (((min(4294967295, 28672)) - 28653))))));
                                var_20 = ((((max(var_4, 243))) || (!1)));
                                var_21 = ((((65535 ? 134217728 : (arr_0 [i_0])))) || (((-((var_16 ? var_17 : (arr_7 [i_0] [i_0] [i_2 + 1])))))));
                                var_22 = (arr_6 [i_0] [i_2] [i_2] [i_3] [i_4] [i_0]);
                            }
                        }
                    }
                    arr_11 [i_2] [16] [16] [i_0] |= var_9;
                }
            }
        }
    }
    var_23 = 4160749567;
    #pragma endscop
}
