/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 -= (max(16257171650195327852, 191));
                    var_15 = (~-28215);
                    var_16 = (min((((~(max(var_9, -1609107168))))), ((18446744073709551610 ? (max(21, (arr_0 [i_1]))) : (arr_4 [i_0] [i_0])))));
                    arr_8 [i_0] [i_0] [i_0] [i_2] = 180;
                }
            }
        }
    }
    var_17 = (min(var_17, ((((((((89 ? var_4 : var_10))) ? var_11 : var_3)) != (~-6188))))));
    #pragma endscop
}
