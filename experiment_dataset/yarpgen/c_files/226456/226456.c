/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_10 = var_1;
                arr_5 [i_0] [i_0] [i_1] = (16355 && 1);
                var_11 *= (((((var_0 / var_7) ^ (var_2 && var_6))) != (var_1 <= var_1)));
                arr_6 [i_0] = ((var_7 << ((((var_6 ^ ((59 >> (21822 - 21795))))) - 237))));
            }
        }
    }
    var_12 = ((var_4 || (((((var_4 + 9223372036854775807) << (var_5 - 3862880802))) >= (((var_2 >> (var_0 - 2263383253))))))));
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_13 = (185 ^ 16342);
                    var_14 = ((var_3 || var_0) >= ((var_5 >> (var_0 - 2263383257))));
                }
            }
        }
    }
    #pragma endscop
}
