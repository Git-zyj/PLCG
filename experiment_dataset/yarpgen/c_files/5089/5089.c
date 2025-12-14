/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = 0;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_19 ^= 4611686018427387904;
                            arr_12 [i_0] [i_1] [i_0] = (min((min(18446744073709551615, 18446744073709551606)), (min((min(18446744073709551610, 18446744073709551615)), 1))));
                            arr_13 [i_2] [i_0] = 18446744073709551610;
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(((min(15, (min(1, 4165563283))))), -8506394284499528862));
    #pragma endscop
}
