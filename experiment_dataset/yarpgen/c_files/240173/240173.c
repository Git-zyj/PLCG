/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_12 + 2147483647) >> (((!(((var_13 ? 120 : var_0))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = ((((arr_0 [i_0] [i_1]) ^ var_13)) & ((min((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1])))));
                var_16 -= 134;
                var_17 |= var_11;
            }
        }
    }
    var_18 = (min(131, (((((var_0 ? -1797872576 : 121))) ? (90 * 121) : (var_13 || var_7)))));
    #pragma endscop
}
