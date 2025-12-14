/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = (((arr_3 [i_1]) - (arr_3 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] = var_12;
                            var_14 -= -969634329496322475;
                            var_15 -= (min(((~((-3653167716768339711 ? 34786 : var_6)))), (!var_6)));
                        }
                    }
                }
                var_16 = arr_4 [i_1];
                var_17 = (((((((min(969634329496322475, (arr_2 [i_0] [i_0]))) + 9223372036854775807)) >> ((((0 ? 0 : (arr_0 [8]))) - 66))))) ? (arr_9 [i_0] [i_0] [i_0] [3]) : ((-(min((arr_8 [i_0] [i_1] [i_1]), var_3)))));
            }
        }
    }
    var_18 = (((((-283 ? (((var_11 ? var_5 : var_12))) : (min(8558160146404684627, 4694189068488884656))))) ? var_12 : var_0));
    #pragma endscop
}
