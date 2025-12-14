/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, 54879));
    var_14 = -439312085;

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_15 = 439312085;
        var_16 = -6722949231390263134;
        var_17 = (min(var_17, 0));
        var_18 = (((((37029 ? -2108118314 : 1))) ? 163 : ((439312084 ? 23239 : -5130))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_19 = -8016561667166532955;
        var_20 = 0;
        var_21 = 6722949231390263134;
        var_22 = 439775086;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_23 = ((-6064 ? 439312085 : 12497441617160397410));
        arr_8 [i_2] = -6873847634615077859;
    }
    var_24 = var_10;
    var_25 = ((-6737494169153282470 ? var_11 : ((8971730277461715430 ? ((-439312091 ? -4452527619090252927 : 28230)) : var_4))));
    #pragma endscop
}
