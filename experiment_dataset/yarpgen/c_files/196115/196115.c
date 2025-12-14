/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_16 = (((arr_0 [i_0 + 1] [i_0 + 1]) ? (!0) : var_3));
        arr_3 [i_0] = (126 / 9);
        var_17 = (min(((+(((arr_1 [i_0 - 2]) ? (arr_1 [i_0]) : var_3)))), ((max(88, (arr_0 [i_0 + 1] [i_0 + 1]))))));
    }
    var_18 = (max(((((var_9 & var_7) ? (~2147352576) : (min(var_5, 0))))), ((4177920 ? (1575302229 - var_5) : var_2))));
    var_19 = (-1575302230 & -120);
    var_20 = -1575302230;
    var_21 = 31;
    #pragma endscop
}
