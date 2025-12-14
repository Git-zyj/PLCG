/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((((((min(var_7, var_4)) != (var_7 <= var_7)))) << (var_1 - 792335398))))));
    var_18 = ((-((((var_3 <= var_3) >= (0 ^ -6340113374885289586))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, var_3));
                                arr_13 [i_0] [1] [i_2] [i_3] [i_4] = 94;
                            }
                        }
                    }
                    var_20 ^= max((min(-8213803710673652940, 6340113374885289599)), (((arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) & -6340113374885289595)));
                    var_21 = (max(var_21, ((min(6340113374885289586, ((-(min(var_3, var_9)))))))));
                }
            }
        }
    }
    #pragma endscop
}
