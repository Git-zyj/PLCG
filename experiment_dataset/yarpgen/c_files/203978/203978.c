/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_17 = var_5;
                    arr_8 [i_2] [i_1] [i_2] [8] = ((((max((arr_1 [i_0 + 1]), (arr_4 [i_0 - 1] [i_1] [i_0])))) ? (arr_2 [i_0] [i_2]) : (arr_0 [i_0 + 1] [i_0 + 2])));
                }
            }
        }
    }
    var_18 = var_4;
    var_19 = (max((~var_8), var_13));
    #pragma endscop
}
