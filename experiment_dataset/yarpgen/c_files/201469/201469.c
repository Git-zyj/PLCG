/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_12 = (((-71 + 1) == 7894));
                            arr_13 [i_0] [i_2] [i_0] = (arr_0 [i_2]);
                            var_13 &= ((((arr_0 [i_2 - 1]) ? (arr_8 [i_2 - 1]) : var_6)));
                            var_14 -= (((arr_9 [i_0]) + ((4385443525240905493 ? 252 : 9602585757436978599))));
                        }
                    }
                }
                arr_14 [10] [5] [i_1] = (max(-1504498738, (((-585749115352994694 - var_11) - 65535))));
                arr_15 [i_0] = (min(-1527414928, 16449198954771232827));
                arr_16 [i_0] [1] [i_1] = ((!-19) % (((251 & var_9) << (((min((arr_12 [i_0]), (arr_11 [i_0] [i_0]))) - 38569)))));
            }
        }
    }
    var_15 = (min(var_15, var_9));
    #pragma endscop
}
