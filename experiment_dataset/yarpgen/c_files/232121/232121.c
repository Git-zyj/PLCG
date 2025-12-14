/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [i_1] = ((1 ? 1 : 7549));
                    arr_11 [i_1] = ((((max(0, (var_9 && var_7)))) && (((var_17 >> (2124266606 - 2124266599))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                var_18 = (((((var_6 < (18258 % var_12)))) * ((((18014398509449216 % var_8) && (var_9 || var_12))))));
                arr_18 [i_3] [i_4] = (((~var_3) != var_0));
            }
        }
    }
    #pragma endscop
}
