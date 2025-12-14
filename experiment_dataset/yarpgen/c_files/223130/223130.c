/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= var_2;
    var_12 |= ((var_4 ? (max(((var_2 ? 27216 : var_9)), (~0))) : (!var_1)));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_13 += ((((max((((-2016876699 ? 37372 : 4084637878))), (((arr_0 [i_0]) ^ 210329417))))) && ((max(198, -27231)))));
        arr_3 [i_0] = ((!(arr_1 [i_0] [i_0])));
    }
    var_14 = min((((var_10 != ((-2016876699 ? 0 : 108))))), -17);
    #pragma endscop
}
