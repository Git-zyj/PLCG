/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = (((-1 + 2147483647) >> (3543779088 - 3543779083)));
                var_13 = -646520287736864864;
                var_14 = ((((!(arr_1 [i_1 + 1]))) ? (arr_1 [i_1 + 1]) : (((var_0 ? 7651 : (arr_1 [i_1 - 1]))))));
                var_15 = (min(((((max(1637580883, (arr_0 [i_0])))) ? (min((arr_3 [i_0] [i_1 - 1]), 1959283302)) : (arr_2 [i_0] [i_0] [i_1]))), (27 + -1542916165)));
            }
        }
    }
    var_16 |= (~var_11);
    #pragma endscop
}
