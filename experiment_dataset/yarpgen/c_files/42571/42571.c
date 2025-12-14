/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_16, (((max(var_4, 3320511593)) & -var_3))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = ((((min(var_11, (arr_1 [i_0])))) >= ((14336 >> (10030032085578537923 - 10030032085578537892)))));
        arr_2 [i_0] = ((((((min(10030032085578537923, 10030032085578537942)) == (max(var_12, var_0))))) + (max(((max((arr_0 [i_0]), (arr_0 [i_0])))), (~var_5)))));
        var_19 = (max(var_19, ((((((63 < (arr_0 [i_0]))))) ^ (min(752683919347591776, 416916118))))));
    }

    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_20 = (min((min(((((arr_0 [i_1]) << (var_7 - 13945551667292880416)))), (max(8971275647366898566, var_7)))), ((((arr_4 [i_1] [2]) == (arr_4 [i_1] [15]))))));
        var_21 = (max(((var_1 * ((min(var_14, var_2))))), (~var_16)));
    }
    var_22 = ((var_16 || (5836 * var_13)));
    #pragma endscop
}
