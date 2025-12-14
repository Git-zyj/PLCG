/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(var_16, 18446744073709551615);
    var_18 = ((((max(var_8, 18446744073709551607))) != var_16));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_19 = (max((!1010703369), var_11));
        var_20 |= 18446744073709551595;
        arr_2 [i_0] = 18446744073709551602;
        arr_3 [i_0] = 18446744073709551602;
        arr_4 [i_0] = (!var_6);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((var_1 ? (((~var_12) * -1)) : (((var_1 ^ var_15) ? (arr_6 [i_1]) : (arr_1 [i_1])))));
        var_21 |= (max(var_7, (max((arr_0 [i_1]), 22))));
        var_22 = ((!22) ? 1481335247 : (1481335233 / 36626));
    }
    #pragma endscop
}
