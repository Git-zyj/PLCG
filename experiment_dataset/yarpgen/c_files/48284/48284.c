/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_15;
    var_21 = (((((max(var_3, 1152921470247108608)))) >= (min((max(1073741823, var_8)), -317337560))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_22 = ((-1 ? 173145654 : 10343005));
                var_23 = (min(((((max(1152921470247108601, 1073741846))) ? (max(18446744072635809770, -10343003)) : (243 * var_8))), ((((30 + 108) == (max(18446744072635809792, 0)))))));
                arr_6 [1] [i_0] = 24;
                arr_7 [i_0 + 1] [i_1 + 1] = (max(var_10, (((~0) ? ((48008 ? (arr_3 [i_0 - 1]) : 1152921470247108609)) : (!1)))));
            }
        }
    }
    #pragma endscop
}
