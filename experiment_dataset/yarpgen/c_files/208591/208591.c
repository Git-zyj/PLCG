/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = ((~(((((var_7 ? 60 : var_1))) ? (arr_5 [i_0]) : (arr_5 [0])))));
                var_22 = 63488;
            }
        }
    }
    var_23 *= (((((1 ? -223979083 : 2047))) ? (~var_5) : ((min((var_18 >= var_6), 65535)))));
    var_24 = var_17;
    #pragma endscop
}
