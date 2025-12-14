/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((var_11 ? var_9 : ((((min(var_11, 5864022161767649406))) ? ((5864022161767649406 ? 32767 : var_0)) : var_2)))))));
    var_14 = ((((((max(5864022161767649402, var_12))) ? ((30475 ? var_1 : (-32767 - 1))) : var_3)) + (min(var_8, (min(5864022161767649420, var_4))))));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((-(((((var_0 ? 19 : 13899744387543625874))) ? (var_9 ^ var_0) : -18297))));
        var_15 = (-32767 - 1);
        arr_3 [i_0] = (((((-32762 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) ? 30475 : (max(-32765, ((18296 ? (arr_1 [i_0] [i_0]) : 12582721911941902195))))));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_16 = (min(var_16, (+-32767)));
        var_17 = (((((arr_4 [i_1]) ? (arr_1 [i_1] [i_1 - 1]) : (arr_1 [i_1] [i_1 - 1]))) ^ ((~(arr_1 [i_1] [i_1])))));
        var_18 = ((32746 ? (arr_0 [i_1 + 1] [i_1]) : ((~(min(18307, 5864022161767649412))))));
    }
    #pragma endscop
}
