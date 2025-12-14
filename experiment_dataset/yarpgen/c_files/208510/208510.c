/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_13));
    var_16 = ((var_13 ? (16939 ^ 127) : (var_13 != var_0)));
    var_17 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (((!-2487957246912764289) * ((max((arr_0 [i_0 - 1]), (!13))))));
                var_19 = 2487957246912764289;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                var_20 -= ((+((2115775493 ? (arr_9 [i_2]) : 3344648328))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_21 ^= var_5;
                            var_22 = var_3;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
