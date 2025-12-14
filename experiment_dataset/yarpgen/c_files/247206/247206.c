/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((!(var_11 && -5844627051406673161)))) & ((((min(var_9, var_12)) > 112)))));
    var_14 -= (min(var_10, var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (arr_4 [i_0] [i_1]);
                var_15 = ((+((((((arr_2 [i_0] [i_0]) + 4096)) < ((~(arr_3 [i_0]))))))));
            }
        }
    }
    var_16 = (min(var_16, (((min(var_2, var_10))))));
    #pragma endscop
}
