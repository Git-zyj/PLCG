/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, (min(((var_8 << (((~var_7) + 32)))), (((var_7 * var_6) | var_1))))));
                    var_13 = (6217339208383925323 & 5127743280990897949);
                    arr_7 [i_0] [i_0] [i_2] [9] = ((~((var_1 ? (arr_0 [i_0]) : var_5))));
                    arr_8 [i_0] [i_1] [i_0] = -5127743280990897950;
                }
            }
        }
    }
    var_14 = (-5127743280990897960 & var_7);
    var_15 = var_0;
    #pragma endscop
}
