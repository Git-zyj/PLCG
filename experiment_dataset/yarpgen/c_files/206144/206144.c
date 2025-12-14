/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 16147;
    var_21 = var_7;
    var_22 = (max(1, var_6));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((arr_1 [i_0]) && ((max(((var_9 & (arr_0 [i_0]))), (arr_0 [i_0]))))));
        arr_3 [i_0] = ((-(((-111 || ((max(17437, 1))))))));
        var_23 = ((((min((arr_0 [i_0]), 926286927))) ? (arr_0 [i_0]) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_8))));
        var_24 = (min(var_24, ((min((((((926286932 || (arr_0 [i_0])))) % (-11 >= -116))), -48098)))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_25 = (-((~((min(1, var_6))))));
        var_26 = (1358081227 >= 25054);
        var_27 = 242;
    }
    #pragma endscop
}
