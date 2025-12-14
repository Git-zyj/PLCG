/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_11 * (((var_6 / var_12) * (max(var_1, var_7))))));
    var_15 = var_8;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] &= (((arr_3 [5]) | (arr_1 [i_0] [i_1 - 1])));
            var_16 = (min((arr_1 [i_0] [i_1]), (((arr_0 [i_1 - 1] [9]) ? (arr_0 [i_1 - 1] [i_1 - 1]) : (arr_0 [i_1 - 1] [i_1 - 1])))));
        }
        arr_6 [i_0] = (((1505 < 3977003691363283283) ? 5237 : ((-(arr_2 [7])))));
    }
    var_17 = (-1506 & 1505);
    #pragma endscop
}
