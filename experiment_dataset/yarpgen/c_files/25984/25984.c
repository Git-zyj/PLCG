/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_7));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [5] [i_0] = (min((((arr_2 [i_0 - 2] [2] [i_1 + 1]) << (((arr_3 [i_0] [i_0 + 1]) - 3227965407156754062)))), (arr_2 [i_0 + 2] [i_0 + 2] [i_0 + 1])));
                var_12 = (min((((arr_5 [i_1 + 3] [6]) < var_3)), (((max(55, (arr_3 [15] [i_0]))) >= var_5))));
                var_13 ^= ((((min(var_6, (~15)))) != (((var_1 + 9223372036854775807) << (((arr_0 [i_0 + 1]) - 13268009611658457230))))));
                arr_7 [i_1] = var_5;
            }
        }
    }
    #pragma endscop
}
