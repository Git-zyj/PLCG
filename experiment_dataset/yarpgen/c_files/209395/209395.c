/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((+-9) / -34));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_20 = (--22);
        var_21 = -4;
        arr_2 [6] = (((((-22 / ((min(21, 9)))))) ? -7 : 34));
        var_22 ^= -22;
        var_23 -= 7;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_24 = (((-22 == -10) & -4));
        var_25 = ((-41 ? -9 : (((-16 <= -5) ? ((max(-34, -10))) : ((-13 ? -24 : -9))))));
        arr_7 [i_1] = (((((~-1) ? -5 : ((min(7, -9))))) ^ 4));
    }
    #pragma endscop
}
