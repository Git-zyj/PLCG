/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_8 + 9223372036854775807) << (((((~var_2) + 150)) - 7)))) < var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_11 = ((1 ? 0 : ((max((arr_6 [5] [i_1] [i_2 - 1]), (max(0, (arr_4 [i_0] [i_1] [i_2]))))))));
                    arr_7 [i_0] [i_0] [i_0] = ((-var_7 ? var_1 : (((arr_6 [2] [i_1 - 2] [i_2 + 1]) ? (arr_6 [i_0] [i_1 - 2] [i_2 - 1]) : (arr_6 [i_0] [i_1 + 1] [i_2 + 1])))));
                }
            }
        }
    }
    var_12 = var_5;
    #pragma endscop
}
