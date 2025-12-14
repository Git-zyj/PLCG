/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_3 >> ((((~(min(var_15, var_3)))) - 14))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (((1 ? (arr_3 [i_0]) : (arr_1 [i_0]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_18 = (min(var_18, (((var_4 ? 4160749568 : ((17592186044400 >> (189 - 149))))))));
                            arr_10 [i_1] [i_1] [i_0] [i_3] = (max(-10431, 8388096));
                        }
                    }
                }
                var_19 = (min(((~(arr_0 [i_0]))), (((-((min(1, (arr_5 [i_0] [i_0] [i_1] [i_1])))))))));
            }
        }
    }
    #pragma endscop
}
