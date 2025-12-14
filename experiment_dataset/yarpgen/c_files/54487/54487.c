/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((min((8934 == var_8), var_1)), var_6));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0] [i_0]) ? ((0 ? (((arr_0 [i_0]) ? 139 : (arr_1 [i_0] [i_0]))) : ((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))) : (arr_0 [i_0])));
        arr_3 [i_0] = ((((min((arr_0 [i_0]), (arr_0 [i_0])))) | ((((((arr_1 [i_0] [i_0]) | 139)) == ((max(139, var_1))))))));
        var_13 = (((((arr_0 [i_0]) ? (arr_0 [i_0]) : 116)) * (((arr_0 [i_0]) ? (1 > var_3) : ((min(-32749, var_11)))))));
    }
    #pragma endscop
}
