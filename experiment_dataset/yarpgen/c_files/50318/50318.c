/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_2 ? ((var_4 ? 45852 : var_10)) : (min(-1873400862, var_5)))) | var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                var_12 = (((-((1 ? 0 : 67)))));
                var_13 = (min((arr_2 [i_0]), (arr_2 [i_0])));
            }
        }
    }
    var_14 = ((65535 >= (var_2 * 152)));
    #pragma endscop
}
