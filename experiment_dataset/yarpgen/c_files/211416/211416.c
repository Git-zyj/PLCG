/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_4;
    var_15 = (max(var_15, var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 += 14915;
                var_17 = var_13;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_18 = (min(var_18, (((-30984 ? 30984 : (arr_8 [i_3] [i_3 + 1]))))));
                            var_19 |= (((((arr_8 [i_0] [i_1]) << (arr_8 [i_0] [i_1]))) ^ ((max((arr_5 [i_3 + 1] [i_1] [i_0]), (min(var_9, 127)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
