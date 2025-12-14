/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = 7089;
                var_14 = (min(var_14, (((-663120918 ? (min((arr_3 [i_0 + 2] [i_1 - 1] [i_1 - 1]), ((663120929 ? (arr_2 [8]) : -4252)))) : (min((~0), (min(1779235413269152173, (arr_1 [i_0] [i_0]))))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_0] [i_3] = 663120895;
                            var_15 = ((((((4294967293 >> (4294967293 - 4294967288)))) ? var_3 : (((((arr_1 [3] [i_2 + 1]) || var_3)))))));
                            arr_11 [11] [i_3] [i_0] [i_3] = 3072613071593754321;
                            var_16 -= -22346114;
                        }
                    }
                }
            }
        }
    }
    var_17 = var_5;
    #pragma endscop
}
