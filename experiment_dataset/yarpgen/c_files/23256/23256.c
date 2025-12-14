/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (~var_9);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_10 = (i_0 % 2 == 0) ? ((max((-304587052 && 1854253131), (((var_0 + 2147483647) << (((((arr_15 [14] [i_4 + 1] [i_0] [i_4 - 1] [i_4]) + 2269)) - 23))))))) : ((max((-304587052 && 1854253131), (((var_0 + 2147483647) << (((((((arr_15 [14] [i_4 + 1] [i_0] [i_4 - 1] [i_4]) + 2269)) - 23)) - 23081)))))));
                                var_11 = (min(var_11, (((-(((-304587076 < (((arr_15 [i_0] [i_1] [i_1] [i_3 - 1] [i_4]) & var_4))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = var_5;
    #pragma endscop
}
