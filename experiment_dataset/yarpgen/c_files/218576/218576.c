/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_10 = ((((min(((var_7 ? (arr_6 [10] [i_0]) : (arr_6 [i_0] [i_0]))), (!0)))) ? (var_9 != var_4) : (var_7 / 1)));
                    var_11 = (((min((arr_4 [i_0] [i_0] [i_0]), var_9))) <= 1);
                    var_12 = (min(64789, (min(44876, 13141427096589008335))));
                }
            }
        }
    }
    var_13 = var_1;
    var_14 -= ((~(min((~var_8), var_9))));
    var_15 = 1;
    #pragma endscop
}
