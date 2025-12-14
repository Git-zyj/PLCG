/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-((-var_9 / (max(var_9, -19665))))));
    var_18 = var_9;
    var_19 = ((!(~1813129260736147388)));
    var_20 = (min(((var_2 ? var_10 : var_4)), ((((((var_2 ? var_0 : var_12))) ? var_8 : (~var_6))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (max((14769625730149024071 || -3253857164459694864), ((!(arr_0 [i_0])))));
        arr_4 [i_0] = ((((arr_0 [i_0]) < (((-(arr_1 [i_0])))))));
        arr_5 [i_0] = ((~(!var_14)));
        var_21 = (max(var_21, (((((((!var_4) ? (((11921 ? (arr_1 [18]) : var_13))) : (arr_2 [i_0])))) ? var_2 : (((((var_12 == (arr_0 [12])))))))))));
    }
    #pragma endscop
}
