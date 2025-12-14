/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] |= -2010839803;
                var_20 ^= (((~var_9) ^ (arr_4 [i_0] [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                var_21 = var_10;
                arr_10 [i_2] [i_2] = min((((((max(var_9, var_17))) && ((((arr_4 [i_2] [i_3]) ? (arr_4 [i_2] [i_3]) : (arr_0 [19] [i_3]))))))), ((-2010839799 ? 0 : var_15)));
            }
        }
    }
    #pragma endscop
}
