/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_3 != (((var_0 != var_8) ? ((var_5 ? 1850373742219408712 : var_6)) : ((3696793783 ? -4771336744981643285 : var_3))))));
    var_13 = 1504654919;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = (arr_2 [i_0]);
                var_15 = (var_2 * 3696793762);
            }
        }
    }
    #pragma endscop
}
