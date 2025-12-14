/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 ^= (((((var_1 ? var_0 : 1))) % ((((214 / var_1) ? (var_1 >> var_5) : var_7)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_3] [i_2] [i_3] [i_4] = ((~(((((var_3 ? var_1 : -557094570))) ? var_4 : var_12))));
                                var_15 = ((!((((~-6588056903469943019) - ((min(-115471670, -95))))))));
                            }
                        }
                    }
                    var_16 = (!93);
                    var_17 = ((~(((~var_9) ^ 29801))));
                }
            }
        }
    }
    var_18 = min((((((max(4, var_2))) >> (((~var_0) - 1632774636676429257))))), (max(5808991831335035308, 1668502661)));
    #pragma endscop
}
