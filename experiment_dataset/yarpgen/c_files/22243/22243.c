/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((-32767 - 1) ? ((var_3 % ((19532 ? var_7 : 2147483647)))) : ((min(((max(var_4, 46003))), -19532)))));
    var_13 = ((var_10 ? var_5 : ((-(min(var_0, var_11))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = ((((min(((min((arr_0 [i_0]), (arr_0 [i_0])))), (max(var_7, var_8))))) ? ((((min(45, (arr_1 [i_0])))))) : (arr_1 [i_0])));
        arr_2 [i_0] = ((-(min(var_3, var_2))));
        arr_3 [i_0] = ((var_8 ? (arr_1 [i_0]) : (((-(var_1 < var_8))))));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] [i_1] &= (((((((((arr_4 [3]) ^ var_5))) ? ((var_7 ? (arr_5 [i_1]) : var_11)) : 19533))) ? 2147483644 : ((min(987848916, (arr_4 [i_1]))))));
        var_15 = ((-289465653 ? ((max((max(var_9, var_11)), -2147483647))) : (max((min((arr_5 [4]), var_10)), var_8))));
        var_16 = (min((((var_9 < (((arr_5 [i_1]) ? var_9 : 536870912))))), (((arr_5 [i_1 - 2]) ? var_0 : -2147483624))));
    }
    #pragma endscop
}
