/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (11521824755885393093 ^ var_11);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = (arr_2 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, (min((arr_0 [16]), (min(((var_6 / (arr_7 [i_0] [9] [1] [i_4]))), (min(6924919317824158498, (arr_0 [7])))))))));
                                var_15 -= ((((((((var_9 ? var_8 : (arr_13 [i_0] [i_0] [i_0] [i_0] [9])))) ? 7139622961880755719 : ((((arr_8 [i_0] [i_1] [i_1]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : 18)))))) ? 252 : (arr_2 [i_2])));
                                var_16 -= 2734449824;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
