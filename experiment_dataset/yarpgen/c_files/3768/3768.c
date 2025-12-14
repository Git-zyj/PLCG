/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] [i_1] = (var_4 ? (arr_5 [i_0]) : (max((~2841425100930414538), -112)));
                var_13 = (min(((((((!(arr_6 [i_0 + 2] [i_0 + 2] [i_1])))) != 88))), (max((var_2 / var_5), var_5))));
            }
        }
    }
    var_14 = (min(var_14, (((((var_11 ? var_5 : ((var_9 ? 6158188843573174460 : 167)))) * (((((max(var_2, var_1))) ? var_3 : -2102065094))))))));
    var_15 = ((((var_10 ? var_1 : (max(var_3, var_8)))) * (max(var_3, var_12))));
    #pragma endscop
}
