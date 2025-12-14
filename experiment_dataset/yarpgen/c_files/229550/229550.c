/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (-9223372036854775807 - 1);
        arr_3 [i_0] [i_0] = (max(((min(var_5, var_7))), (max(-120, 15025324150341691246))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_10 = (((14 <= (max(var_6, var_5)))));
        var_11 = ((((max(-15, 18012199486226432))) ? (9223372036854775807 & var_0) : ((var_2 ? var_4 : -9223372036854775802))));
    }
    var_12 = ((((!(((14 ? -9223372036854775799 : -3))))) ? var_8 : ((((((-9223372036854775807 - 1) == 9223372036854775798))) >> (var_4 - 12986701341768711378)))));
    var_13 = var_7;
    var_14 = ((((max(1, 9223372036854775807)))) ? (!var_2) : var_6);
    #pragma endscop
}
