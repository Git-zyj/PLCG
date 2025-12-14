/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max(((max(1, var_0))), ((var_4 ? var_2 : 1))))) == var_9));
    var_15 = (((max(((((-2147483647 - 1) ? 1223482739 : -647223479))), -134217720)) + var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (((((((min(647223458, 2879513003))) ? (-127 - 1) : 31166))) & (((arr_1 [i_1 - 1] [i_1 - 1]) - ((31152 ? 304851368550412762 : var_9))))));
                var_17 = 647223474;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((min(112, -var_3)))));
                            var_19 = (max(var_19, ((max(((!(((1 ? (arr_5 [17]) : 12978000664092474071))))), (!var_3))))));
                            var_20 = (max(var_20, (arr_7 [0])));
                        }
                    }
                }
                arr_10 [1] [i_1] = (!-var_13);
            }
        }
    }
    #pragma endscop
}
