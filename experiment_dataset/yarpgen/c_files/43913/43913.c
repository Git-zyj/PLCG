/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_10 == -10043) >> (((((2199006478336 ? 2199006478336 : 55432))) - 2199006478305))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    var_13 = var_4;
                    var_14 = (((arr_1 [i_1]) ? (arr_3 [i_2 + 1] [i_2 + 1] [i_2 - 1]) : (((142 << (var_7 - 1176113923))))));
                }
                arr_7 [i_0] [i_0] = (arr_0 [i_0]);
            }
        }
    }
    #pragma endscop
}
