/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((3104977398 & 3104977404) ? -var_14 : var_14))) || ((((-8221296026750262199 ? var_3 : var_11)) > -0))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = (((arr_3 [i_0 - 1]) ? (((arr_4 [i_0] [i_1 - 2] [i_1 - 2]) ? (var_5 <= var_9) : ((var_2 ? var_11 : var_17)))) : (max(((max((arr_5 [i_0 - 1] [i_0 - 1] [i_1 + 1]), 19564))), ((-1115835746 ? 84 : 46))))));
                var_21 = (4 >= -1115835770);
                arr_6 [i_0 - 1] [i_0 - 1] = 1;
            }
        }
    }
    #pragma endscop
}
