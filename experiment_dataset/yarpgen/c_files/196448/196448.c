/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 9223372036854775807;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_20 &= (((arr_3 [6]) << (((max(var_5, (((arr_4 [i_0] [i_1] [13]) & -29556)))) - 3807251577))));
                var_21 = (arr_1 [i_0 - 1] [i_1 - 1]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_22 = (max(14087995403662367991, 9223372036854775807));
        var_23 = (3957707325326498824 & 592043824);
        arr_9 [i_2] = (max((arr_7 [i_2] [i_2]), ((((min((arr_6 [i_2]), (arr_7 [i_2] [i_2]))) < (arr_6 [i_2]))))));
    }
    var_24 = var_6;
    #pragma endscop
}
