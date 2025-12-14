/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (~var_9);
    var_11 = (!var_4);
    var_12 = ((~(var_2 % var_2)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = (47 < 1);
                                var_14 = (min(var_14, ((min(((((arr_14 [i_0]) % var_6))), (var_2 <= var_2))))));
                            }
                        }
                    }
                }
                var_15 = (min(((((var_6 > var_8) & (var_9 < var_7)))), ((-(min(var_4, var_1))))));
                var_16 ^= -1;
            }
        }
    }
    #pragma endscop
}
