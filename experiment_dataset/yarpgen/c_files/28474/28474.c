/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_0 ? (var_13 < var_9) : -var_15))) ? var_0 : (((!(((var_13 ? 2577457652 : var_16))))))));
    var_21 += ((min((22 - -7), (var_12 + -8))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_22 = (min(var_22, (((((((arr_6 [i_0]) | -1)) == (arr_2 [i_1])))))));
                    var_23 ^= (min(15, -87));
                }
            }
        }
    }
    #pragma endscop
}
