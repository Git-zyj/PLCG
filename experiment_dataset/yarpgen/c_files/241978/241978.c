/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(1, 1);

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_18 |= 1;
        var_19 = 192;
    }
    var_20 = (min(var_0, ((-72 ? ((var_9 ? 37 : var_5)) : var_16))));
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            {
                var_21 ^= 0;
                var_22 -= 10;
                var_23 |= (((((var_7 / ((32743 ? -1090631600444032573 : (-127 - 1)))))) ? (min(((var_4 ? var_8 : 1)), (!var_12))) : 99));
            }
        }
    }
    #pragma endscop
}
