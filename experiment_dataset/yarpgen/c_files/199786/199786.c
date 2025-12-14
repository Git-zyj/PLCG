/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-1275696908 < (~1)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 = ((((~(arr_1 [i_0]))) != ((max((arr_1 [i_0]), (arr_1 [i_0]))))));
        var_22 = (max(var_22, (((!((((arr_0 [i_0]) ? ((min((arr_1 [0]), (arr_2 [i_0])))) : ((min((arr_2 [i_0]), (arr_0 [i_0]))))))))))));
    }
    var_23 = var_13;
    #pragma endscop
}
