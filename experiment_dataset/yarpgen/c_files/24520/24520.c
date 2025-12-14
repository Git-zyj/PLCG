/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = var_2;
        var_18 -= ((((((max(110, var_12)) >> ((((var_17 ? 52386 : var_3)) - 52383))))) | var_13));
        var_19 = (min(((25836786 ? var_0 : var_5)), (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_20 = ((-111 <= ((2186137277 ? (((58101 ? -88 : var_12))) : (min(41138, (arr_5 [9] [i_1])))))));
        arr_6 [i_1] [i_1] = 7437;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_10 [1] [i_2] = (((23899 ? -9152324686985171552 : var_13)) >> (-20335 + 20340));
        var_21 = (((((41138 ? 16560 : -32493))) ? ((13314894948356295521 & (min(var_0, var_5)))) : -9223372036854775789));
    }
    var_22 = var_15;
    #pragma endscop
}
