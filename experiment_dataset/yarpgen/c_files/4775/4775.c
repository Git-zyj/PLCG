/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_6, var_5));
    var_11 = ((((((min(var_5, 24))) && (((var_8 ? 1752514579 : 1))))) || 18446744073709551589));
    var_12 = (min(((((2542452717 ? var_2 : 1752514563)) + (((min(1, var_8)))))), var_4));
    var_13 = ((((1 ? (1 % 1565201037941028058) : 1)) >= (((~(2542452717 % 1))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (((162 >= 576460614864470016) << (min((~1), (arr_1 [i_0])))));
        var_15 &= ((~(min((arr_1 [i_0]), ((2013483635888736634 ? 17870283458845081606 : (arr_1 [i_0])))))));
    }
    #pragma endscop
}
