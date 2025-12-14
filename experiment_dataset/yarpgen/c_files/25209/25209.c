/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 2338101050483420741;
    var_19 = (!((((var_12 * var_12) ? var_6 : (max(3606917054, 3))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] = (!-2894);
                var_20 -= ((((3 & 1955410897) ? (arr_3 [i_0]) : 9144807485032360193)));
            }
        }
    }
    var_21 -= ((~-53) ? (253 > -2338101050483420727) : var_2);
    #pragma endscop
}
