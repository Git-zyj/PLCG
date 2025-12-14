/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (i_0 % 2 == zero) ? (((var_3 >> ((((min((arr_0 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) - 202))))) : (((var_3 >> ((((((min((arr_0 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) - 202)) + 146)))));
        var_19 = var_2;
        var_20 = (min(var_20, (((((4192 || (((16573 ? 8191 : 4921))))) && -4)))));
    }
    var_21 = (var_2 <= var_1);
    #pragma endscop
}
