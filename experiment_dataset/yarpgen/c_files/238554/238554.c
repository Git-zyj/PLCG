/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_13 ? ((max(10104060033696762790, 154))) : var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((272928312 ? 728383993 : 16)))));
                var_16 = (((((((arr_1 [i_0]) ? 83 : var_10)) ^ ((((arr_0 [11]) != var_9))))) * ((((-1 ? (arr_3 [i_0] [i_0]) : var_2))))));
                arr_4 [7] [i_1] [i_0] = (+(max((max((arr_1 [i_0]), (arr_0 [i_1 + 2]))), -0)));
            }
        }
    }
    var_17 &= ((-var_7 / -var_5) ? (!504403158265495552) : var_6);
    #pragma endscop
}
