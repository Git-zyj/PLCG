/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_7;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_19 -= ((var_14 ? var_6 : var_12));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_20 = (!107313143);
            var_21 = 107313143;
            var_22 = (((~var_9) ? (var_16 < var_6) : ((107313143 ? 107313133 : var_14))));
        }
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            var_23 = (!107313133);
            var_24 = -var_7;
        }
        for (int i_3 = 4; i_3 < 9;i_3 += 1)
        {
            var_25 &= var_5;
            var_26 = (((var_1 < -8) >= (((!(arr_7 [i_0]))))));
        }
    }
    var_27 = ((((((((var_7 ? -107313133 : var_8))) ? var_0 : (min(var_4, var_13))))) ? var_12 : var_2));
    #pragma endscop
}
