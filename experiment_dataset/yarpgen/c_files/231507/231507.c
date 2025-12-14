/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = arr_6 [i_0] [i_1];
                var_19 = (min(var_19, 15));
                arr_7 [i_0] [0] = (min((((((max(-8, var_14))) <= 15))), 61517));
                arr_8 [i_0] = arr_4 [i_0 - 1];
            }
        }
    }
    var_20 = (min(var_20, (~var_2)));
    #pragma endscop
}
