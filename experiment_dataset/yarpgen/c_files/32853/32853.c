/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, ((((arr_2 [i_1 + 1] [i_1 - 1] [i_1 - 1]) ? (((!(arr_2 [i_1] [i_1 - 2] [i_1 - 2])))) : (((arr_2 [i_1] [i_1 + 1] [i_1]) ? (arr_2 [18] [i_1 - 2] [18]) : (arr_2 [i_1 - 2] [i_1 - 1] [i_1 + 1]))))))));
                    var_12 = (2942470714506954463 && 4499201580859392);
                }
            }
        }
    }
    var_13 &= ((((max(var_0, var_3))) ^ 40984));
    #pragma endscop
}
